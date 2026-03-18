/*
 * XREFs of EtwpStopLoggerInstance @ 0x140712DC0
 * Callers:
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x140715350 (EtwpLogger.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     ExCancelTimer @ 0x14033BF90 (ExCancelTimer.c)
 *     EtwpStackRundown @ 0x1405AC128 (EtwpStackRundown.c)
 *     EtwpDisableTraceProviders @ 0x140717A88 (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x140718000 (EtwpSendSessionNotification.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14078CCAC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x1409404E4 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v9; // rax
  ULONG_PTR v10; // rcx

  v1 = *(_QWORD *)(a1 + 1080);
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
    v4 = 0;
    while ( *(unsigned __int16 *)(v1 + 2LL * v4 + 4048) != *(_DWORD *)a1 )
    {
      if ( ++v4 >= 8 )
        goto LABEL_11;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1 + 432, 0LL);
    *(_BYTE *)(v1 + 4064) &= ~(1 << v4);
    v6 = 32LL * v4;
    *(_OWORD *)(v6 + v1 + 152) = 0LL;
    *(_OWORD *)(v6 + v1 + 168) = 0LL;
    *(_WORD *)(v1 + 2LL * v4 + 4048) = 0;
    *(_QWORD *)(v1 + 440) = 0LL;
    ExReleasePushLockEx(v1 + 432, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_11:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    v7 = *(_DWORD *)(a1 + 832);
    if ( (v7 & 0x800) != 0 )
    {
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
      v7 = *(_DWORD *)(a1 + 832);
    }
    if ( (v7 & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 992), v1, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
    return 2147483685LL;
  v9 = *(_QWORD *)(a1 + 1064);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 )
      ExCancelTimer(v10, 0LL);
  }
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
