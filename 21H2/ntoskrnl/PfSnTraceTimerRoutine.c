/*
 * XREFs of PfSnTraceTimerRoutine @ 0x140244E70
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     PfSnTraceGetLogEntry @ 0x14036669C (PfSnTraceGetLogEntry.c)
 */

void __fastcall PfSnTraceTimerRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // r8d
  int v6; // eax
  unsigned __int64 *v7; // rcx
  bool v8; // zf
  unsigned __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( *((_DWORD *)DeferredContext + 100) )
    goto LABEL_12;
  v5 = *((_DWORD *)DeferredContext + 83);
  if ( v5 > *((_DWORD *)DeferredContext + 85) )
    v5 = *((_DWORD *)DeferredContext + 85);
  v6 = *((_DWORD *)DeferredContext + 81);
  if ( v6 > v5 )
    v6 = v5;
  *(_DWORD *)&DeferredContext[4 * (*((_DWORD *)DeferredContext + 82))++ + 284] = v5 - v6;
  *((_DWORD *)DeferredContext + 81) = v5;
  if ( (int)PfSnTraceGetLogEntry(DeferredContext, 1LL, &v9, SystemArgument2) < 0 )
  {
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 10, 0) == 0;
  }
  else
  {
    v7 = v9;
    *v9 &= 7uLL;
    v7[1] = 0LL;
    *v7 = *v7 & 0xFFFFFFFFFFFFFFF8uLL | 4;
    if ( *((_DWORD *)DeferredContext + 82) < dword_140C544F4 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 34);
      if ( !*((_DWORD *)DeferredContext + 100) && ExAcquireRundownProtection((PEX_RUNDOWN_REF)DeferredContext + 45) )
        KiSetTimerEx(
          (_DWORD)DeferredContext + 136,
          *((_QWORD *)DeferredContext + 25),
          0,
          0,
          (__int64)(DeferredContext + 208));
      KxReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 34);
      goto LABEL_12;
    }
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 4, 0) == 0;
  }
  if ( v8 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 368), DelayedWorkQueue);
LABEL_12:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)DeferredContext + 45);
}
