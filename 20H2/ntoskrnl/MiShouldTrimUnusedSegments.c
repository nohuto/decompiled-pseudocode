/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x140529024
 * Callers:
 *     MiFreeExcessSegments @ 0x14029C0C0 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x140528C1C (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140C4C818 && (unsigned __int64)qword_140C4C818 >> 12 > 3 * (qword_140C529A8 / 0x64uLL);
}
