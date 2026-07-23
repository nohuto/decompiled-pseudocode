/*
 * XREFs of KdLogDbgPrint @ 0x1409BA380
 * Callers:
 *     KdpPrint @ 0x1409BA6C8 (KdpPrint.c)
 *     KdpPrompt @ 0x1409BA848 (KdpPrompt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     KdpCopyMemoryChunks @ 0x1409BAB9C (KdpCopyMemoryChunks.c)
 */

struct _KPRCB *__fastcall KdLogDbgPrint(unsigned __int16 *a1)
{
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned int v5; // eax
  unsigned int v6; // ecx
  bool v7; // cc
  __int64 v8; // rbx
  signed __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  void *v12; // rcx
  unsigned int v13; // ebx
  char *v14; // rcx
  unsigned int v15; // edi
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  result = KeGetCurrentPrcb();
  LODWORD(v21) = 0;
  if ( (struct _KPRCB *)qword_140CFA2F8 == result )
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
    v5 = (unsigned int)KdPrintBufferSize >> 3;
    if ( (unsigned int)KdPrintBufferSize >> 3 > 0x200 )
      v5 = 512;
    v6 = *a1;
    v7 = v6 <= v5;
    if ( v6 > v5 )
    {
      _InterlockedIncrement(&KdPrintTruncatedCount);
      v7 = v6 <= v5;
    }
    if ( v7 )
      v5 = v6;
    v8 = v5;
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, 0LL, 0LL);
    do
    {
      v10 = v8 + v9 - (unsigned int)KdPrintBufferSize;
      v11 = v9;
      if ( v8 + v9 < (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
        v10 = v8 + v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, v10, v9);
    }
    while ( v9 != v11 );
    if ( v10 < v11 )
      _InterlockedIncrement(&KdPrintRolloverCount);
    v12 = (void *)*((_QWORD *)a1 + 1);
    if ( v8 + v11 > (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
    {
      v15 = KdPrintBufferSize + (_DWORD)KdPrintCircularBuffer - v11;
      KdpCopyMemoryChunks(v12, 4, (__int64)&v21);
      if ( (unsigned int)v21 < v15 )
        memset((void *)(v11 + (unsigned int)v21), 0, v15 - (unsigned int)v21);
      v13 = v8 - v15;
      if ( (_DWORD)v21 == v15 )
      {
        KdpCopyMemoryChunks((PVOID)(*((_QWORD *)a1 + 1) + v15), 4, (__int64)&v21);
        if ( (unsigned int)v21 >= v13 )
          goto LABEL_33;
        v13 -= v21;
        v14 = (char *)KdPrintCircularBuffer + (unsigned int)v21;
      }
      else
      {
        v14 = (char *)KdPrintCircularBuffer;
      }
    }
    else
    {
      KdpCopyMemoryChunks(v12, 4, (__int64)&v21);
      if ( (unsigned int)v21 >= (unsigned int)v8 )
        goto LABEL_33;
      v13 = v8 - v21;
      v14 = (char *)(v11 + (unsigned int)v21);
    }
    memset(v14, 0, v13);
  }
LABEL_33:
  _InterlockedAdd((_DWORD *)&KdpPrintSpinLock + 1, 0xFFFFFFFF);
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
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = (struct _KPRCB *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
