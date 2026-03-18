/*
 * XREFs of ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAG@Z @ 0x18002CBC4
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18002CA74 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180021AF4 (-UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CComposi.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1800770C0 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18008B2A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureSwapChainTelemetryInitialized(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned __int16 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned __int16 *v7; // rax

  if ( CGlobalCompositionSurfaceInfo::IsSwapChain(*(CGlobalCompositionSurfaceInfo **)this) && !*((_QWORD *)this + 29) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v5 = v4 + 1;
    if ( v5 > 1 )
    {
      v6 = v5;
      v7 = (unsigned __int16 *)DefaultHeap::Alloc(saturated_mul(v5, 2uLL));
      *((_QWORD *)this + 29) = v7;
      if ( v7 )
      {
        StringCchCopyW(v7, v6, a2);
        CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry((__int64)this, 0, 1);
      }
    }
  }
}
