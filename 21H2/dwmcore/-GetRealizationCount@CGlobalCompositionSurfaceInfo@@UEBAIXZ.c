/*
 * XREFs of ?GetRealizationCount@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x1800FBB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::GetRealizationCount(CGlobalCompositionSurfaceInfo *this)
{
  return (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
}
