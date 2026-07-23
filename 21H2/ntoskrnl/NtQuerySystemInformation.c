/*
 * XREFs of NtQuerySystemInformation @ 0x140645D10
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x1403CDF1C (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x1407CE1BC (AlpcpInitSystem.c)
 * Callees:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
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
