/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1405928D4
 * Callers:
 *     RtlpGetNormalization @ 0x14091E040 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
