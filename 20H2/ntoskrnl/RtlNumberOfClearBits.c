/*
 * XREFs of RtlNumberOfClearBits @ 0x140263E30
 * Callers:
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1409B4394 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkCreateSharedExportInformation @ 0x1409C51D8 (ViThunkCreateSharedExportInformation.c)
 *     ViThunkReplaceAllSharedExports @ 0x1409DC2D8 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140263E60 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
