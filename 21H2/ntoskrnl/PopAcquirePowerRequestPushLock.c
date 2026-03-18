/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x140753094
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14036A5FC (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCreateCommon @ 0x14036A698 (PopPowerRequestCreateCommon.c)
 *     PopPowerRequestCallbackWorker @ 0x14036A8F0 (PopPowerRequestCallbackWorker.c)
 *     PopUpdatePdcSystemIdleState @ 0x140752ECC (PopUpdatePdcSystemIdleState.c)
 *     PopWnfAudioCallback @ 0x1407EE7A0 (PopWnfAudioCallback.c)
 *     PopPowerRequestDelete @ 0x1407EF930 (PopPowerRequestDelete.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407EFDC8 (PopPowerRequestHandleRequestUpdate.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140806FC0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopDiagTraceControlCallback @ 0x14081CBF0 (PopDiagTraceControlCallback.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408630F0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x140863534 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140989CF0 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140989DA0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotificationsBegin @ 0x140989DD4 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x140989E98 (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140989EE0 (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140989F5C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140989FA4 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PopPowerRequestSpecialRequestClear @ 0x14098A060 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x14098A13C (PopPowerRequestSpecialRequestSet.c)
 *     PopGetPowerRequestListInfo @ 0x14098C7F4 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 )
    return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return (struct _KTHREAD *)ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerRequestLock, 0LL);
}
