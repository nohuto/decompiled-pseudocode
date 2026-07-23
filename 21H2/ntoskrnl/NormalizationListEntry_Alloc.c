/*
 * XREFs of NormalizationListEntry_Alloc @ 0x14059454C
 * Callers:
 *     RtlpGetNormalization @ 0x14091B980 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
