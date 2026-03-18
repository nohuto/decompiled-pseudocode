/*
 * XREFs of ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01B3FE0
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1C01B3E70 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C01B4B34 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEAAJKPEAXPEA_K@Z @ 0x1C01B4F10 (-_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEAAJKPEAXPEA_K@Z.c)
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C03B9D7C (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchIoctrls(
        DxgMonitor::MonitorGammaState **this,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r9
  DxgMonitor::MonitorGammaState *v14; // rcx
  int v15; // ebx
  int v16; // ebx
  DxgMonitor::MonitorMipiDsiState *v19; // rcx

  v8 = (unsigned int)a2;
  v11 = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = this;
  if ( (_DWORD)v8 == 2297856 || (_DWORD)v8 == 2297860 || (_DWORD)v8 == 2297864 )
  {
    v14 = this[31];
    v15 = v8 - 2297856;
    if ( v15 )
    {
      v16 = v15 - 4;
      if ( v16 )
      {
        if ( v16 == 4 )
        {
          *a7 = 0LL;
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_EnableDisplayColorManagementApi__private_reporting,
            0x12AB040u,
            2297856LL,
            v13,
            (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
            1);
          return 0;
        }
        return v11;
      }
      *a7 = 0LL;
      return (unsigned int)DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(v14, a3, a4);
    }
    else
    {
      return (unsigned int)DxgMonitor::MonitorGammaState::_QueryColorSpaceTransformCaps(v14, a5, a6, a7);
    }
  }
  if ( (_DWORD)v8 == 2298880 || (_DWORD)v8 == 2298884 || (_DWORD)v8 == 2298888 )
  {
    v19 = this[32];
    if ( v19 )
      return (unsigned int)DxgMonitor::MonitorMipiDsiState::OnIoctl(v19, v8, a3, a4, a5, a6, a7);
  }
  return v11;
}
