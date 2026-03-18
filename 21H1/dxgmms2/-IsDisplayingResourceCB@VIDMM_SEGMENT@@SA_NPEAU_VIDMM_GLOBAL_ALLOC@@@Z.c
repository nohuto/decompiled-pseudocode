/*
 * XREFs of ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C8830
 * Callers:
 *     <none>
 * Callees:
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0013E08 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 */

bool __fastcall VIDMM_SEGMENT::IsDisplayingResourceCB(_VIDMM_GLOBAL_ALLOC_NONPAGED **a1)
{
  return _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(a1[62]);
}
