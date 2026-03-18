/*
 * XREFs of EtwpStopLoggerInstance @ 0x140678BF8
 * Callers:
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     ExCancelTimer @ 0x14035B3B0 (ExCancelTimer.c)
 *     EtwpStackRundown @ 0x1405A7ED8 (EtwpStackRundown.c)
 *     EtwpDisableTraceProviders @ 0x1405F3508 (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x14067D228 (EtwpSendSessionNotification.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14077FD78 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x140939414 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // eax
  unsigned int v4; // eax
  ULONG_PTR v5; // rcx
  unsigned int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v1 = *(_QWORD *)(a1 + 1112);
  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  v3 = *(_DWORD *)(a1 + 832);
  if ( (v3 & 0x20) == 0 )
  {
    EtwpDisableTraceProviders(v1, *(_DWORD *)a1);
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
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
  EtwpSendSessionNotification(a1, 2LL, 0LL);
  return 0LL;
}
