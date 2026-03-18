/*
 * XREFs of ?UnpinResources@CGlobalCompositionSurfaceInfo@@UEAAJ_N@Z @ 0x1801F8560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::UnpinResources(CGlobalCompositionSurfaceInfo *this, char a2)
{
  return CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
           a2);
}
