/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x140525004
 * Callers:
 *     MiFreeExcessSegments @ 0x1402A3B70 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x140524BFC (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140C4C8D8 && (unsigned __int64)qword_140C4C8D8 >> 12 > 3 * (qword_140C52A28 / 0x64uLL);
}
