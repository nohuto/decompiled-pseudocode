/*
 * XREFs of MiIsSessionMetadata @ 0x14036AFC0
 * Callers:
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  return (unsigned int)MiGetSystemRegionType(a1) == 1 && a1 >= qword_140C4DE20 && a1 < qword_140C4DE20 + 290816;
}
