/*
 * XREFs of NormalizationListEntry_Alloc @ 0x1405F2970
 * Callers:
 *     RtlpGetNormalization @ 0x1409C5570 (RtlpGetNormalization.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
