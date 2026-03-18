/*
 * XREFs of MiIsSessionMetadata @ 0x140368B80
 * Callers:
 *     MiCombineCandidate @ 0x140367510 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  return (unsigned int)MiGetSystemRegionType(a1) == 1 && a1 >= qword_140C4DBE0 && a1 < qword_140C4DBE0 + 290816;
}
