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

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
