/*
 * XREFs of RtlNumberOfClearBits @ 0x1402E1390
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1409AD5C4 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkCreateSharedExportInformation @ 0x1409BF1B8 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkReplaceAllSharedExports @ 0x1409D6258 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1402E13C0 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
