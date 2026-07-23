/*
 * XREFs of EtwpStopLoggerInstance @ 0x14061F054
 * Callers:
 *     EtwpLogger @ 0x14063A500 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     ExCancelTimer @ 0x14026DAD0 (ExCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     EtwpStackRundown @ 0x1405ADD58 (EtwpStackRundown.c)
 *     EtwpDisableTraceProviders @ 0x1406B8208 (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x1406B87C8 (EtwpSendSessionNotification.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14079725C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x14093DE88 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v12; // rax
  ULONG_PTR v13; // rcx

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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  }
LABEL_11:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 832);
    if ( (v10 & 0x800) != 0 )
    {
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
      v10 = *(_DWORD *)(a1 + 832);
    }
    if ( (v10 & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 992), v1, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
    return 2147483685LL;
  v12 = *(_QWORD *)(a1 + 1064);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 )
      ExCancelTimer(v13, 0LL);
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
