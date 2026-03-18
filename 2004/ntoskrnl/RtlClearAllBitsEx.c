/*
 * XREFs of RtlClearAllBitsEx @ 0x14034F2B0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140607760 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140607F40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14089393C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x140895C20 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1409A941C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
