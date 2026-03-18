/*
 * XREFs of ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180021234
 * Callers:
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800450C4 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z @ 0x180045634 (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z.c)
 *     ?UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x1801F8570 (-UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfac.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(
        __int64 a1,
        int a2,
        char a3)
{
  __int64 v3; // r11
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(a1 + 232) )
  {
    v3 = *((_QWORD *)g_pComposition + 57);
    result = 2LL * a2;
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16LL * a2 + 168) = v3;
    }
    else
    {
      result = (v3 - *(_QWORD *)(a1 + 16LL * a2 + 168)) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
      *(_QWORD *)(a1 + 16 * (a2 + 11LL)) += result;
    }
  }
  return result;
}
