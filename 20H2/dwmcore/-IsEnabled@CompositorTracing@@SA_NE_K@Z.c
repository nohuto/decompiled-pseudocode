/*
 * XREFs of ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D689C
 * Callers:
 *     ?ToggleSuspension@CHolographicManager@@UEAAX_N@Z @ 0x1800D6850 (-ToggleSuspension@CHolographicManager@@UEAAX_N@Z.c)
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x18024FE68 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x18024FF10 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x180250058 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802501C0 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x180250B00 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x180250C40 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x1802515B0 (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180251630 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x180251724 (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x18025181C (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180251A80 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x180251B04 (-UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x18025581C (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D68C0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 */

bool __fastcall CompositorTracing::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax
  unsigned __int8 v2; // dl
  unsigned __int64 v3; // r8

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<CompositorTracing>::get(
                                      a1,
                                      _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, v2, v3);
}
