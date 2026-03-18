/*
 * XREFs of ?GetAdapterLuid@CGlobalCompositionSurfaceInfo@@UEBA?AU_LUID@@XZ @ 0x1800DE990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CGlobalCompositionSurfaceInfo::GetAdapterLuid(CGlobalCompositionSurfaceInfo *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 148);
  return (struct _LUID)a2;
}
