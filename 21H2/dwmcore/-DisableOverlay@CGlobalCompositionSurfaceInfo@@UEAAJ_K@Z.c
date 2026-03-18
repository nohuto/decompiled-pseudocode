/*
 * XREFs of ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x180004F70
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180004EA8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180004FE0 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180005100 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableOverlay(CGlobalCompositionSurfaceInfo *this, __int64 a2)
{
  unsigned int v2; // edi
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rsi

  v2 = 0;
  if ( a2 == *((_QWORD *)this + 14) && *((_BYTE *)this + 283) )
  {
    v4 = (CGlobalCompositionSurfaceInfo *)((char *)this + 88);
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
    CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(v4, 0);
    if ( *((_BYTE *)this + 276) )
      CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(v4);
    *((_BYTE *)this + 283) = 0;
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x18Bu, 0LL);
  }
  return v2;
}
