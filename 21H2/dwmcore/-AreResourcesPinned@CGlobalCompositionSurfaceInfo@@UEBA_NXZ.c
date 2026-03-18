/*
 * XREFs of ?AreResourcesPinned@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180248210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::AreResourcesPinned(CGlobalCompositionSurfaceInfo *this)
{
  return (__int64)(*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) >> 3 != 0;
}
