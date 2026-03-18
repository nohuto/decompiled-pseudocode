/*
 * XREFs of ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244D10
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F7C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpmRequest(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  int v5; // [rsp+30h] [rbp-18h]

  if ( CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1) )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_VAIL_Opm_Projection__private_reporting,
      0x13CB1C4u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
      0,
      v5);
    v3 = WdLogNewEntry5_WdError(v2, v1);
    *(_QWORD *)(v3 + 24) = 6931LL;
    WdLogEvent5_WdError(v3);
  }
  return 0;
}
