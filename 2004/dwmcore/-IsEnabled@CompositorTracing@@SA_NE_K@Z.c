/*
 * XREFs of ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800D6EBC
 * Callers:
 *     ?ToggleSuspension@CHolographicManager@@UEAAX_N@Z @ 0x1800D6E70 (-ToggleSuspension@CHolographicManager@@UEAAX_N@Z.c)
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x180250D38 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x180250DE0 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x180250F28 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x180251090 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802519D0 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x180251B10 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x180252480 (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180252500 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802525F4 (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802526EC (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180252950 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802529D4 (-UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x18025664C (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D6EE0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
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
