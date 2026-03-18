/*
 * XREFs of EtwpStopLoggerInstance @ 0x1406C6F20
 * Callers:
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     ExCancelTimer @ 0x140275200 (ExCancelTimer.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ObGetCurrentIrql @ 0x1402C8F70 (ObGetCurrentIrql.c)
 *     EtwpStackRundown @ 0x1405A85C8 (EtwpStackRundown.c)
 *     EtwpSendSessionNotification @ 0x1406328F8 (EtwpSendSessionNotification.c)
 *     EtwpDisableTraceProviders @ 0x1406C7034 (EtwpDisableTraceProviders.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14077F39C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x14093A6B4 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  int v4; // eax
  ULONG_PTR v5; // rcx
  unsigned int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 1112);
  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  v3 = *(_DWORD *)(a1 + 832);
  if ( (v3 & 0x20) == 0 )
  {
    EtwpDisableTraceProviders(v1, *(unsigned int *)a1);
    v3 = *(_DWORD *)(a1 + 832);
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v7 = 0;
    while ( *(unsigned __int16 *)(v1 + 2LL * v7 + 4048) != *(_DWORD *)a1 )
    {
      if ( ++v7 >= 8 )
        goto LABEL_6;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1 + 432, 0LL);
    *(_BYTE *)(v1 + 4064) &= ~(1 << v7);
    v9 = 32LL * v7;
    *(_OWORD *)(v9 + v1 + 152) = 0LL;
    *(_OWORD *)(v9 + v1 + 168) = 0LL;
    *(_WORD *)(v1 + 2LL * v7 + 4048) = 0;
    *(_QWORD *)(v1 + 440) = 0LL;
    ExReleasePushLockEx(v1 + 432, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 832);
    if ( (v4 & 0x800) != 0 )
    {
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
      v4 = *(_DWORD *)(a1 + 832);
    }
    if ( (v4 & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 992), v1, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
    return 2147483685LL;
  v5 = *(_QWORD *)(a1 + 1088);
  if ( v5 )
    ExCancelTimer(v5, 0LL);
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( ObGetCurrentIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2u, 0);
  return 0LL;
}
