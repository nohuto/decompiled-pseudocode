/*
 * XREFs of ?SetIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_N0III@Z @ 0x1801FCC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::SetIndependentFlip(
        CGlobalCompositionSurfaceInfo *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  return CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlip(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
           a2,
           a3,
           a4,
           a5,
           a6);
}
