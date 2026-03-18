/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x140525654
 * Callers:
 *     MiFreeExcessSegments @ 0x14024AB40 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x14052524C (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiShouldTrimUnusedSegments()
{
  return qword_140C4C798 && (unsigned __int64)qword_140C4C798 >> 12 > 3 * (qword_140C52928 / 0x64uLL);
}
