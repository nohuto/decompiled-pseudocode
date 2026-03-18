/*
 * XREFs of ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C000B36C
 * Callers:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C000B31C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C011D6E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0137CC8 (BmlDoesTargetModeObeyConstraint.c)
 *     ?IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDPN_TARGET_MODE@@AEBU_D3DKMDT_MONITOR_SOURCE_MODE@@EPEAE@Z @ 0x1C01387B0 (-IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDPN_.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149E64 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
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
