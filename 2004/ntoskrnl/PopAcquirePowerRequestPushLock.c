/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1406A85E8
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140275FBC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140276180 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140276C34 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopCreatePowerRequestObject @ 0x14064DBA8 (PopCreatePowerRequestObject.c)
 *     PopCreateUserPowerRequest @ 0x14064E058 (PopCreateUserPowerRequest.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14064E318 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopDiagTraceControlCallback @ 0x14064EB10 (PopDiagTraceControlCallback.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A71B0 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopUmpoProcessPowerMessage @ 0x1406A7AE4 (PopUmpoProcessPowerMessage.c)
 *     PopWnfAudioCallback @ 0x14075FBB0 (PopWnfAudioCallback.c)
 *     PopCreateKernelPowerRequest @ 0x14075FFE8 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407C0A60 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407C16E4 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1408DE1FC (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408DE2A0 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408DE310 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408DE3D4 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408DE54C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopSetSpecialRequest @ 0x1408DE58C (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1408E07D4 (PopGetPowerRequestListInfo.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408EDE08 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
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
