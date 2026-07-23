/*
 * XREFs of NtQuerySystemInformation @ 0x140607EE0
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x1403CD3C4 (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x1407C9D8C (AlpcpInitSystem.c)
 * Callees:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 */

NTSTATUS __cdecl NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int16 *p_Group; // r10
  __int64 v6; // r8
  __int16 Group; // [rsp+40h] [rbp+8h] BYREF

  p_Group = 0LL;
  Group = 0;
  if ( SystemInformationClass < SystemWow64SharedInformationObsolete
    || SystemInformationClass >= SystemProcessorIdleCycleTimeInformation )
  {
    switch ( SystemInformationClass )
    {
      case SystemProcessorPerformanceInformation:
      case SystemInterruptInformation:
      case SystemProcessorIdleInformation:
      case SystemProcessorPowerInformation:
      case SystemProcessorIdleCycleTimeInformation:
      case SystemProcessorPerformanceDistribution:
      case SystemProcessorCycleTimeInformation:
      case SystemProcessorPerformanceInformationEx:
        Group = KeGetCurrentPrcb()->Group;
        goto LABEL_8;
      case SystemLogicalProcessorInformation:
LABEL_8:
        p_Group = &Group;
        v6 = 2LL;
        return ExpQuerySystemInformation(
                 SystemInformationClass,
                 p_Group,
                 v6,
                 SystemInformation,
                 SystemInformationLength,
                 ReturnLength);
      case SystemLogicalProcessorAndGroupInformation:
      case SystemNodeDistanceInformation:
      case SystemInterruptSteeringInformation:
      case SystemFeatureConfigurationInformation:
      case SystemFeatureConfigurationSectionInformation:
        return -1073741821;
      default:
        break;
    }
  }
  v6 = 0LL;
  return ExpQuerySystemInformation(
           SystemInformationClass,
           p_Group,
           v6,
           SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
