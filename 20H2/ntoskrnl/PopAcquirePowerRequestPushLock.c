/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x14071EC18
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140361DE0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x14036237C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140362540 (PoSetPowerRequestInternal.c)
 *     PopUmpoProcessPowerMessage @ 0x1406FA488 (PopUmpoProcessPowerMessage.c)
 *     PopDiagTraceControlCallback @ 0x14071C0D0 (PopDiagTraceControlCallback.c)
 *     PopCreateUserPowerRequest @ 0x14071CC80 (PopCreateUserPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14071EAC4 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x140720270 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopWnfAudioCallback @ 0x14076E220 (PopWnfAudioCallback.c)
 *     PopCreateKernelPowerRequest @ 0x14076E658 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407CF2F0 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407CFEE4 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1408E403C (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1408E40E0 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408E4150 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopNotifySessionUserPowerRequestsPresent @ 0x1408E4214 (PopNotifySessionUserPowerRequestsPresent.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1408E438C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopSetSpecialRequest @ 0x1408E43CC (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1408E6614 (PopGetPowerRequestListInfo.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F3A18 (PopUpdatePdcSystemIdleState.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
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
