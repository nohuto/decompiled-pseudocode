/*
 * XREFs of ?AreResourcesPinned@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801F7C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGlobalCompositionSurfaceInfo::AreResourcesPinned(CGlobalCompositionSurfaceInfo *this)
{
  return (__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 3 != 0;
}
