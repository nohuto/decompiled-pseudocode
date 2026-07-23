/*
 * XREFs of RtlClearAllBitsEx @ 0x140311AC0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14063C8B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14063D090 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14089261C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140894900 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409A85BC (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
