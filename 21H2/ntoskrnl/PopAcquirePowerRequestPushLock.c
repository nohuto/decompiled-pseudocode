/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x14066E888
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1402701DC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1402703A0 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140270EE0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14066D454 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopUmpoProcessPowerMessage @ 0x14066DD84 (PopUmpoProcessPowerMessage.c)
 *     PopCreatePowerRequestObject @ 0x140670788 (PopCreatePowerRequestObject.c)
 *     PopCreateUserPowerRequest @ 0x140670C38 (PopCreateUserPowerRequest.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x140670F5C (PopNotifySessionUserPowerRequestCreated.c)
 *     PopDiagTraceControlCallback @ 0x140671060 (PopDiagTraceControlCallback.c)
 *     PopWnfAudioCallback @ 0x140772540 (PopWnfAudioCallback.c)
 *     PopCreateKernelPowerRequest @ 0x140772988 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407D3850 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407D4484 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1408E195C (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408E1A20 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408E1A90 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408E1B54 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E1CCC (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopSetSpecialRequest @ 0x1408E1D0C (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1408E3F74 (PopGetPowerRequestListInfo.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F1378 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
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
