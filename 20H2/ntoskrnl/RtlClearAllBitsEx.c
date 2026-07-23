/*
 * XREFs of RtlClearAllBitsEx @ 0x1403200B0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140629C60 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14062A440 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1408995EC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14089B8D0 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409AF38C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
