/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x14052AD64
 * Callers:
 *     MiFreeExcessSegments @ 0x14031FAA0 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x14052A93C (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140C4C9D8 && (unsigned __int64)qword_140C4C9D8 >> 12 > 3 * (qword_140C52B68 / 0x64uLL);
}
