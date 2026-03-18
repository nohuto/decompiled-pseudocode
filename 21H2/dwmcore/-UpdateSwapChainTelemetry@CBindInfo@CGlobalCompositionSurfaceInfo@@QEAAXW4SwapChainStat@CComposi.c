/*
 * XREFs of ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180015740
 * Callers:
 *     ?UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180015730 (-UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfac.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z @ 0x18006B75C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800C7E3C (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(
        __int64 a1,
        int a2,
        char a3)
{
  __int64 v3; // r10
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(a1 + 288) )
  {
    v3 = *((_QWORD *)g_pComposition + 76);
    result = 2 * (a2 + 14LL);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16 * (a2 + 14LL)) = v3;
    }
    else
    {
      result = (v3 - *(_QWORD *)(a1 + 16 * (a2 + 14LL))) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
      *(_QWORD *)(a1 + 16LL * a2 + 232) += result;
    }
  }
  return result;
}
