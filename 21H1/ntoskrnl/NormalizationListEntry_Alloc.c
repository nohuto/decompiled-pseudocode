/*
 * XREFs of NormalizationListEntry_Alloc @ 0x14058E740
 * Callers:
 *     RtlpGetNormalization @ 0x1409171A0 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
