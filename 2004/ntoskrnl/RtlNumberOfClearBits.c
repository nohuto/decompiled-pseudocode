/*
 * XREFs of RtlNumberOfClearBits @ 0x1402F2480
 * Callers:
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1409AE424 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkCreateSharedExportInformation @ 0x1409BF1C8 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkReplaceAllSharedExports @ 0x1409D62B8 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1402F24B0 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
