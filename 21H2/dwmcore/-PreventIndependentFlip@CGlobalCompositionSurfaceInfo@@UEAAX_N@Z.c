/*
 * XREFs of ?PreventIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAX_N@Z @ 0x180248E60
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180004EA8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::PreventIndependentFlip(CGlobalCompositionSurfaceInfo *this, char a2)
{
  if ( a2 && !*((_BYTE *)this + 278) )
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
  *((_BYTE *)this + 278) = a2;
}
