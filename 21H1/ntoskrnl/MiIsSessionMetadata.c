/*
 * XREFs of MiIsSessionMetadata @ 0x1403681C0
 * Callers:
 *     MiCombineCandidate @ 0x140366B50 (MiCombineCandidate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiIsSessionMetadata(unsigned __int64 a1)
{
  return (unsigned int)MiGetSystemRegionType(a1) == 1 && a1 >= qword_140C4DD20 && a1 < qword_140C4DD20 + 290816;
}
