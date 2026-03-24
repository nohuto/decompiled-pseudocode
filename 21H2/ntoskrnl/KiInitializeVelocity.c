/*
 * XREFs of KiInitializeVelocity @ 0x140A4C6E8
 * Callers:
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 * Callees:
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x1403B50F4 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     Feature_DisableLowQosTimerResolution__private_ReportDeviceUsage @ 0x1403F245C (Feature_DisableLowQosTimerResolution__private_ReportDeviceUsage.c)
 *     Feature_ReduceTimerWakes__private_ReportDeviceUsage @ 0x1403F24C4 (Feature_ReduceTimerWakes__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage @ 0x1403F252C (Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistAllowRealTime__private_ReportDeviceUsage @ 0x1403F2594 (Feature_SchedulerAssistAllowRealTime__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistEnableBAM__private_ReportDeviceUsage @ 0x1403F25FC (Feature_SchedulerAssistEnableBAM__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistForegroundBoostBias__private_ReportDeviceUsage @ 0x1403F2664 (Feature_SchedulerAssistForegroundBoostBias__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistHRTimer__private_ReportDeviceUsage @ 0x1403F26CC (Feature_SchedulerAssistHRTimer__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistLongSpinWait__private_ReportDeviceUsage @ 0x1403F2734 (Feature_SchedulerAssistLongSpinWait__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistPreemptionPriorityKick__private_ReportDeviceUsage @ 0x1403F279C (Feature_SchedulerAssistPreemptionPriorityKick__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistReflectPriority__private_ReportDeviceUsage @ 0x1403F2804 (Feature_SchedulerAssistReflectPriority__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistSystemIrql__private_ReportDeviceUsage @ 0x1403F286C (Feature_SchedulerAssistSystemIrql__private_ReportDeviceUsage.c)
 *     Feature_SchedulerAssistThreadFlag__private_ReportDeviceUsage @ 0x1403F28D4 (Feature_SchedulerAssistThreadFlag__private_ReportDeviceUsage.c)
 *     RtlQueryImageFileKeyOption @ 0x1406AEF00 (RtlQueryImageFileKeyOption.c)
 */

NTSTATUS KiInitializeVelocity()
{
  NTSTATUS result; // eax
  ULONG v1; // ecx
  ULONG v2; // [rsp+40h] [rbp+8h] BYREF

  Feature_SchedulerAssistReflectPriority__private_ReportDeviceUsage();
  Feature_SchedulerAssistPreemptionPriorityKick__private_ReportDeviceUsage();
  KiVelocityFlags |= 2u;
  Feature_SchedulerAssistThreadFlag__private_ReportDeviceUsage();
  KiVelocityFlags |= 4u;
  Feature_SchedulerAssistForegroundBoostBias__private_ReportDeviceUsage();
  Feature_SchedulerAssistEnableBAM__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x10u;
  Feature_SchedulerAssistSystemIrql__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x200u;
  Feature_SchedulerAssistHRTimer__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x40u;
  Feature_SchedulerAggressiveForegroundBoost__private_ReportDeviceUsage();
  KiForegroundBoostTicks = 1;
  Feature_SchedulerAssistAllowRealTime__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x80u;
  Feature_SchedulerAssistLongSpinWait__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x400u;
  Feature_ReduceTimerWakes__private_ReportDeviceUsage();
  KiVelocityFlags |= 0x2000u;
  Feature_DisableLowQosTimerResolution__private_ReportDeviceUsage();
  v2 = 0;
  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    result = RtlQueryImageFileKeyOption(KiDisableFgBoostDecayRegistryHandle, L"DisableFGBoostDecay", 4, &v2, 4u, 0LL);
    v1 = v2;
    if ( result < 0 )
      v1 = 0;
    v2 = v1;
    if ( v1 )
      KiForegrounBoostVelocityFlag = 1;
  }
  return result;
}
