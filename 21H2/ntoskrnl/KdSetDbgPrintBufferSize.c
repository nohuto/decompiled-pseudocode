/*
 * XREFs of KdSetDbgPrintBufferSize @ 0x140511924
 * Callers:
 *     NtSystemDebugControl @ 0x1407CFD70 (NtSystemDebugControl.c)
 *     KdAllocateDynamicMemory @ 0x140A575F8 (KdAllocateDynamicMemory.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KdSetDbgPrintBufferSize(SIZE_T NumberOfBytes)
{
  unsigned int v1; // r14d
  _BYTE *PoolWithTag; // rsi
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *v7; // r10
  _DWORD *v8; // r9
  int v9; // eax
  bool v10; // zf
  size_t v11; // rdi
  PVOID v12; // r15
  size_t v13; // rbx
  size_t v14; // rax
  size_t v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax

  v1 = NumberOfBytes;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( (unsigned int)NumberOfBytes > 0x1000000 )
    return 3221225711LL;
  if ( (unsigned int)NumberOfBytes <= 0x1000 )
  {
    v1 = 4096;
    PoolWithTag = &KdPrintDefaultCircularBuffer;
    while ( 1 )
    {
LABEL_9:
      if ( !KdpPrintSpinLock )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        if ( !_InterlockedCompareExchange64(&KdpPrintSpinLock, 1LL, 0LL) )
        {
          v11 = 0LL;
          v12 = KdPrintCircularBuffer;
          qword_140CFA2F8 = (__int64)KeGetCurrentPrcb();
          if ( v1 > (unsigned __int64)(unsigned int)KdPrintBufferSize )
          {
            if ( KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer >= (unsigned __int64)(unsigned int)KdPrintBufferSize )
              KdPrintRolloverCount = 0;
            v13 = (KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer) & -(__int64)(KdPrintWritePointer
                                                                                       - (_UNKNOWN *)KdPrintCircularBuffer < (unsigned __int64)(unsigned int)KdPrintBufferSize);
            if ( KdPrintRolloverCount )
            {
              v11 = (unsigned int)KdPrintBufferSize - v13;
              memmove(PoolWithTag, (char *)KdPrintCircularBuffer + v13, v11);
            }
            memmove(&PoolWithTag[v11], v12, v13);
            v11 += v13;
            if ( KdPrintRolloverCount )
            {
              v14 = 0LL;
              if ( *PoolWithTag )
              {
                do
                {
                  if ( v14 >= v11 )
                    break;
                  ++v14;
                }
                while ( PoolWithTag[v14] );
              }
              v15 = v14 + 1;
              if ( v15 < v11 )
              {
                v11 -= v15;
                memmove(PoolWithTag, &PoolWithTag[v15], v11);
              }
            }
          }
          memset(&PoolWithTag[v11], 0, v1 - v11);
          ++KdPrintBufferChanges;
          qword_140CFA2F8 = 0LL;
          KdPrintCircularBuffer = PoolWithTag;
          KdPrintBufferSize = v1;
          KdPrintWritePointer = &PoolWithTag[v11];
          KdPrintRolloverCount = 0;
          _InterlockedExchange((volatile __int32 *)&KdpPrintSpinLock, 0);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v16 = KeGetCurrentIrql();
              if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v18 = CurrentPrcb->SchedulerAssist;
                v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v10 = (v19 & v18[5]) == 0;
                v18[5] &= v19;
                if ( v10 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          if ( v12 && v12 != &KdPrintDefaultCircularBuffer )
            ExFreePoolWithTag(v12, 0);
          return 0LL;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v6 = KeGetCurrentIrql();
            if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
            {
              v7 = KeGetCurrentPrcb();
              v8 = v7->SchedulerAssist;
              v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v10 = (v9 & v8[5]) == 0;
              v8[5] &= v9;
              if ( v10 )
                KiRemoveSystemWorkPriorityKick((__int64)v7);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
      _mm_pause();
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6250644Bu);
  if ( PoolWithTag )
    goto LABEL_9;
  return 3221225495LL;
}
