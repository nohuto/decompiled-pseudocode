/*
 * XREFs of NormalizationListEntry_Alloc @ 0x14059431C
 * Callers:
 *     RtlpGetNormalization @ 0x14091B820 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
