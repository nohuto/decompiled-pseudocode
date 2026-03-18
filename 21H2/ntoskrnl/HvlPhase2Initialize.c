/*
 * XREFs of HvlPhase2Initialize @ 0x1403DE4F0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140232788 (ExNotifyWithProcessing.c)
 *     ExRegisterCallback @ 0x14025A0B0 (ExRegisterCallback.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x140545C94 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x14054A344 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpInitializeHvCrashdumpPhase2 @ 0x14054B350 (HvlpInitializeHvCrashdumpPhase2.c)
 *     HvlpInitializeSvmIommuSupport @ 0x14054B43C (HvlpInitializeSvmIommuSupport.c)
 *     HvlpCheckTscSync @ 0x14054B670 (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x14054B7B4 (HvlpEtwRegister.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x14054B7FC (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x14054BA84 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x14054BAFC (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x14054BC60 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x14054BE48 (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x14054BF10 (HvlpWriteEventLog.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x140931064 (HvlpLogMicrocodeUpdateStatus.c)
 *     HvlpDiscoverTopologyComplete @ 0x140B4E6A0 (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rcx
  __int64 v23; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v25[6]; // [rsp+30h] [rbp-29h] BYREF
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
    v25[0] = v3;
    v25[1] = v4;
    v25[2] = v5;
    v25[3] = v6;
    v25[4] = v7;
    HvlpLogHypervisorLaunchError(v25);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) == 0 )
    goto LABEL_12;
  HvlpDiscoverTopologyComplete(a1, a2);
  HvlpSchedulerType = HvlpQueryHypervisorSchedulerType(v10, v9);
  if ( HvlpSchedulerType == 4 )
    HvlpRootSchedulerEnabled = 1;
  if ( !HvlpRootSchedulerEnabled
    || (result = HvlpInitializeSvmIommuSupport(a1, a2), a2 = 0x80000000LL, a1 = result + 0x80000000, (int)a1 < 0)
    || result == -1073741637 )
  {
LABEL_12:
    HvlpInitializeHvCrashdumpPhase2(a1, a2);
    if ( (HvlpRootFlags & 1) == 0 )
    {
LABEL_21:
      v23 = ExCbEnlightenmentState;
      if ( ExCbEnlightenmentState )
        ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
      HvlpRegisterPowerPolicyCallbacks(v23, v11);
      return 0;
    }
    HvlpEtwRegister(v12, v11);
    HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
    HvlpLogHypervisorSchedulerType(v14, v13);
    HvlpCheckTscSync(v16, v15);
    HvlpLogIommuInitStatus(v18, v17);
    HvlpLogGuestStateScrubbingStatus(v20, v19);
    if ( (unsigned int)HvlpLogicalProcessorCount < 0x400 )
    {
      v22 = &HvlpLogicalProcessorRegions[30 * (unsigned int)HvlpLogicalProcessorCount];
      if ( !*v22 )
      {
        if ( *((_WORD *)v22 + 28) )
          HvlpLogProcessorStartupFailure((unsigned int)v22[2], *((unsigned __int16 *)v22 + 28));
      }
    }
    HvlpLogMicrocodeUpdateStatus(v22, v21);
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
      goto LABEL_21;
    }
  }
  return result;
}
