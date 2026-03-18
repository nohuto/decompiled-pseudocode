/*
 * XREFs of MonitorGetCachedApiGammaRampForDiagnostics @ 0x1C03B0530
 * Callers:
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C02EF694 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x1C03B7508 (-GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN.c)
 */

__int64 __fastcall MonitorGetCachedApiGammaRampForDiagnostics(
        __int64 a1,
        struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *a2)
{
  __int64 v3; // rbx
  unsigned int CachedGammaRampForDiagnostics; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(&v6, a1);
  v3 = v6;
  if ( v6 )
  {
    CachedGammaRampForDiagnostics = DxgMonitor::MonitorGammaState::GetCachedGammaRampForDiagnostics(
                                      *(DxgMonitor::MonitorGammaState **)(v6 + 248),
                                      a2);
    ExReleaseResourceLite((PERESOURCE)(v3 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    CachedGammaRampForDiagnostics = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return CachedGammaRampForDiagnostics;
}
