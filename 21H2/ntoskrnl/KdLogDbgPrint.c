/*
 * XREFs of KdLogDbgPrint @ 0x140A73FF0
 * Callers:
 *     KdpPrint @ 0x140A7434C (KdpPrint.c)
 *     KdpPrompt @ 0x140A744CC (KdpPrompt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KdpCopyMemoryChunks @ 0x140A6F124 (KdpCopyMemoryChunks.c)
 */

struct _KPRCB *__fastcall KdLogDbgPrint(unsigned __int16 *a1)
{
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned int v5; // ebx
  unsigned int v6; // eax
  signed __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  char *v10; // rcx
  unsigned int v11; // ebx
  char *v12; // rcx
  unsigned int v13; // edi
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF

  result = KeGetCurrentPrcb();
  v19 = 0;
  if ( (struct _KPRCB *)qword_140D01938 == result )
  {
    _InterlockedIncrement(&KdPrintSkippedCount);
    return result;
  }
  _InterlockedIncrement((_DWORD *)&KdpPrintSpinLock + 1);
  while ( (_DWORD)KdpPrintSpinLock )
    _mm_pause();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( KdPrintCircularBuffer )
  {
    v5 = *a1;
    v6 = (unsigned int)KdPrintBufferSize >> 3;
    if ( (unsigned int)KdPrintBufferSize >> 3 > 0x200 )
      v6 = 512;
    if ( v5 > v6 )
    {
      v5 = v6;
      _InterlockedIncrement(&KdPrintTruncatedCount);
    }
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, 0LL, 0LL);
    do
    {
      v8 = v5 + v7 - (unsigned int)KdPrintBufferSize;
      v9 = v7;
      if ( (unsigned __int64)v5 + v7 < (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
        v8 = v5 + v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, v8, v7);
    }
    while ( v7 != v9 );
    if ( v8 < v9 )
      _InterlockedIncrement(&KdPrintRolloverCount);
    v10 = (char *)*((_QWORD *)a1 + 1);
    if ( v5 + v9 > (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
    {
      v13 = KdPrintBufferSize + (_DWORD)KdPrintCircularBuffer - v9;
      KdpCopyMemoryChunks(v10, v9, v13, 0, 4, &v19);
      if ( v19 < v13 )
        memset((void *)(v9 + v19), 0, v13 - v19);
      v11 = v5 - v13;
      if ( v19 == v13 )
      {
        KdpCopyMemoryChunks((char *)(*((_QWORD *)a1 + 1) + v13), (__int64)KdPrintCircularBuffer, v11, 0, 4, &v19);
        if ( v19 >= v11 )
          goto LABEL_31;
        v11 -= v19;
        v12 = (char *)KdPrintCircularBuffer + v19;
      }
      else
      {
        v12 = (char *)KdPrintCircularBuffer;
      }
    }
    else
    {
      KdpCopyMemoryChunks(v10, v9, v5, 0, 4, &v19);
      if ( v19 >= v5 )
        goto LABEL_31;
      v11 = v5 - v19;
      v12 = (char *)(v9 + v19);
    }
    memset(v12, 0, v11);
  }
LABEL_31:
  _InterlockedAdd((_DWORD *)&KdpPrintSpinLock + 1, 0xFFFFFFFF);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = (struct _KPRCB *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
