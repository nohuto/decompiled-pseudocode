/*
 * XREFs of PfSnTraceTimerRoutine @ 0x140310C20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     PfSnTraceGetLogEntry @ 0x1402B64D0 (PfSnTraceGetLogEntry.c)
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
  if ( (int)PfSnTraceGetLogEntry((__int64)DeferredContext, 1u, &v9) < 0 )
  {
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 10, 0) == 0;
  }
  else
  {
    v7 = v9;
    *v9 &= 7uLL;
    v7[1] = 0LL;
    *v7 = *v7 & 0xFFFFFFFFFFFFFFF8uLL | 4;
    if ( *((_DWORD *)DeferredContext + 82) < dword_140C501F4 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 34);
      if ( !*((_DWORD *)DeferredContext + 100) && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)DeferredContext + 45) )
        KiSetTimerEx(
          (__int64)(DeferredContext + 136),
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
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)DeferredContext + 45);
}
