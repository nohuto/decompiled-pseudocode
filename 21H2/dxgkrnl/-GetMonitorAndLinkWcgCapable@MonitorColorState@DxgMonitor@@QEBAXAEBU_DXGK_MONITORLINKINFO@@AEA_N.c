/*
 * XREFs of ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N@Z @ 0x1C01DE228
 * Callers:
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01A68E8 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020BB20 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01A9B2C (-IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2,
        bool *a3,
        __int64 a4)
{
  bool v4; // bl
  __int64 v7; // rax

  v4 = 0;
  if ( (*(_BYTE *)&a2->Capabilities.0 & 2) != 0
    || (wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_WCG_Skip_WideColorSpace_Check__private_reporting,
          0x1E22202u,
          (__int64)a3,
          a4,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
          0),
        (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
          *((_QWORD *)this + 1),
          2LL,
          L"OverrideWCGCapabilities",
          0LL)) )
  {
    if ( DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(this) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) + 48) & 8) != 0 )
        v4 = 1;
    }
  }
  *a3 = v4;
}
