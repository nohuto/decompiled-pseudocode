/*
 * XREFs of MiIsSessionMetadata @ 0x14036AE10
 * Callers:
 *     MiCombineCandidate @ 0x1403697A0 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  return (unsigned int)MiGetSystemRegionType(a1) == 1 && a1 >= qword_140C4DDE0 && a1 < qword_140C4DDE0 + 290816;
}
