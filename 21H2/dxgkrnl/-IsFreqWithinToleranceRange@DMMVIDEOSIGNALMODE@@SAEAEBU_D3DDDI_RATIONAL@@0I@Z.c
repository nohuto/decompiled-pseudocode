/*
 * XREFs of ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0010CA8
 * Callers:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C0017CD4 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A9040 (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C01B5890 (BmlDoesTargetModeObeyConstraint.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C01B5CB4 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDPN_TARGET_MODE@@AEBU_D3DKMDT_MONITOR_SOURCE_MODE@@EPEAE@Z @ 0x1C01E4E80 (-IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDPN_.c)
 *     ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C01E5E54 (-IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 *     ?DmmIsFreqWithinToleranceRange@@YAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C039C1B0 (-DmmIsFreqWithinToleranceRange@@YAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     _lambda_f7629139d0209e148fddfe9121e39862_::operator() @ 0x1C03AAED0 (_lambda_f7629139d0209e148fddfe9121e39862_--operator().c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
        const struct _D3DDDI_RATIONAL *a1,
        const struct _D3DDDI_RATIONAL *a2,
        int a3)
{
  unsigned __int64 Denominator; // r10
  unsigned __int64 v4; // r9
  __int64 Numerator; // r11
  unsigned __int64 v6; // r10
  bool result; // al

  Denominator = a1->Denominator;
  result = 0;
  if ( (_DWORD)Denominator )
  {
    v4 = a2->Denominator;
    if ( (_DWORD)v4 )
    {
      Numerator = a2->Numerator;
      v6 = 100000 * (unsigned __int64)a1->Numerator / Denominator;
      if ( v6 >= Numerator * (unsigned __int64)(unsigned int)(100000 - a3) / v4
        && v6 <= Numerator * (unsigned __int64)(unsigned int)(a3 + 100000) / v4 )
      {
        return 1;
      }
    }
  }
  return result;
}
