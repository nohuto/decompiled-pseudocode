/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x14052AB24
 * Callers:
 *     MiFreeExcessSegments @ 0x140314D50 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x14052A6FC (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140C4C998 && (unsigned __int64)qword_140C4C998 >> 12 > 3 * (qword_140C52B28 / 0x64uLL);
}
