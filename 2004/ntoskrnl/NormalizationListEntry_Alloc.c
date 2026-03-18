/*
 * XREFs of NormalizationListEntry_Alloc @ 0x14058EE30
 * Callers:
 *     RtlpGetNormalization @ 0x140918410 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
