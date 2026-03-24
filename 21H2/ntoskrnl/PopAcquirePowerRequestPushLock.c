/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x14067B148
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140281F9C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140282160 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x14028278C (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140282C34 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopCreatePowerRequestObject @ 0x14062BBB0 (PopCreatePowerRequestObject.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x140679D14 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopUmpoProcessPowerMessage @ 0x14067A644 (PopUmpoProcessPowerMessage.c)
 *     PopCreateUserPowerRequest @ 0x14067CD9C (PopCreateUserPowerRequest.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14067CF30 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopDiagTraceControlCallback @ 0x14067D270 (PopDiagTraceControlCallback.c)
 *     PopWnfAudioCallback @ 0x140772380 (PopWnfAudioCallback.c)
 *     PopCreateKernelPowerRequest @ 0x1407727C8 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407D36E0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407D4314 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1408E17FC (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408E18C0 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408E1930 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408E19F4 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E1B6C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopSetSpecialRequest @ 0x1408E1BAC (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1408E3E14 (PopGetPowerRequestListInfo.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F1218 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
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
