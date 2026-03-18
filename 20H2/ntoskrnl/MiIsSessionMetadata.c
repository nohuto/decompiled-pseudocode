/*
 * XREFs of MiIsSessionMetadata @ 0x14036AB60
 * Callers:
 *     MiCombineCandidate @ 0x1403694F0 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  return (unsigned int)MiGetSystemRegionType(a1) == 1 && a1 >= qword_140C4DC60 && a1 < qword_140C4DC60 + 290816;
}
