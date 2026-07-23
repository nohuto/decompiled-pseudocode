/*
 * XREFs of HvlPhase2Initialize @ 0x1403CF228
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14022E9B8 (ExNotifyWithProcessing.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x14037ECF0 (ExRegisterCallback.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403F0D20 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1404F8604 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x1404F9520 (HvlpInitializeHvCrashdumpPhase2.c)
 *     HvlpInitializeSvmIommuSupport @ 0x1404F960C (HvlpInitializeSvmIommuSupport.c)
 *     HvlpCheckTscSync @ 0x1404F9860 (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x1404F99A0 (HvlpEtwRegister.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1404F99E8 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1404F9C5C (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1404F9CD4 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x1404F9E38 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1404F9FEC (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x1404FA0B4 (HvlpWriteEventLog.c)
 *     ExCreateCallback @ 0x14061C450 (ExCreateCallback.c)
 *     EtwUnregister @ 0x140760390 (EtwUnregister.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x14088E784 (HvlpLogMicrocodeUpdateStatus.c)
 *     HvlpDiscoverTopologyComplete @ 0x140A90044 (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  volatile CCHAR v10; // t0
  NTSTATUS result; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int *v23; // rcx
  __int64 v24; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v26[6]; // [rsp+30h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+C0h] [rbp+67h] BYREF

  v2 = *(_QWORD **)(a1 + 240);
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = v2[316];
  v4 = v2[317];
  v5 = v2[318];
  v6 = v2[319];
  v7 = v2[320];
  if ( v3 )
  {
    HvlpEtwRegister(a1, a2);
    v26[0] = v3;
    v26[1] = v4;
    v26[2] = v5;
    v26[3] = v6;
    v26[4] = v7;
    HvlpLogHypervisorLaunchError(v26);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) == 0 )
    goto LABEL_10;
  HvlpDiscoverTopologyComplete(a1, a2);
  HvlpSchedulerType = HvlpQueryHypervisorSchedulerType(v9, v8);
  if ( HvlpSchedulerType == 4 )
    KeNumberProcessorsGroup0[3] = 1;
  v10 = KeNumberProcessorsGroup0[3];
  if ( !v10
    || (result = HvlpInitializeSvmIommuSupport(a1, a2), a2 = 0x80000000LL, a1 = result + 0x80000000, (int)a1 < 0)
    || result == -1073741637 )
  {
LABEL_10:
    HvlpInitializeHvCrashdumpPhase2(a1, a2);
    if ( (HvlpRootFlags & 1) == 0 )
    {
LABEL_19:
      v24 = ExCbEnlightenmentState;
      if ( ExCbEnlightenmentState )
        ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
      HvlpRegisterPowerPolicyCallbacks(v24, v12);
      return 0;
    }
    HvlpEtwRegister(v13, v12);
    HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
    HvlpLogHypervisorSchedulerType(v15, v14);
    HvlpCheckTscSync(v17, v16);
    HvlpLogIommuInitStatus(v19, v18);
    HvlpLogGuestStateScrubbingStatus(v21, v20);
    if ( (unsigned int)HvlpLogicalProcessorCount < 0x400 )
    {
      v23 = &HvlpLogicalProcessorRegions[30 * (unsigned int)HvlpLogicalProcessorCount];
      if ( !*v23 )
      {
        if ( *((_WORD *)v23 + 28) )
          HvlpLogProcessorStartupFailure((unsigned int)v23[2], *((unsigned __int16 *)v23 + 28));
      }
    }
    HvlpLogMicrocodeUpdateStatus(v23, v22);
    if ( HvlpMinrootConfigurationError )
      HvlpWriteEventLog(&HV_EVENTLOG_CORE_SCHEDULER_PROCESSOR_CONFIGURATION_WARNING, 0, 0LL);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    CallbackObject = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
    {
      ExRegisterCallback(CallbackObject, HvlpPowerStateCallback, 0LL);
      goto LABEL_19;
    }
  }
  return result;
}
