/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x14070F888
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14033CD34 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x14033D2AC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14033D470 (PoSetPowerRequestInternal.c)
 *     PopDiagTraceControlCallback @ 0x1406FF180 (PopDiagTraceControlCallback.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x1406FF5FC (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x1406FF730 (PopCreateUserPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14070E454 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopUmpoProcessPowerMessage @ 0x14070ED84 (PopUmpoProcessPowerMessage.c)
 *     PopWnfAudioCallback @ 0x14075D8A0 (PopWnfAudioCallback.c)
 *     PopCreateKernelPowerRequest @ 0x14075DCD8 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407BD8F0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407BE4A0 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1408DCE8C (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408DCF90 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408DD000 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408DD0C4 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408DD23C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopSetSpecialRequest @ 0x1408DD27C (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1408DF574 (PopGetPowerRequestListInfo.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408ECB14 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
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
