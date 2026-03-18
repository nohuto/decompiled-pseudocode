/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1403338B8
 * Callers:
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x140333FE4 (MiCreateUltraThreadContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MmDeleteProcessor @ 0x14052C4D0 (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x14054E144 (MiDeleteZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x140722C1C (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408DB008 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x1408DE790 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1403338F0 (MiDeleteUltraMapContext.c)
 */

__int64 __fastcall MiDeleteUltraThreadContext(__int64 a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 4; ++i )
  {
    result = MiDeleteUltraMapContext(a1, i);
    a1 += 32LL;
  }
  return result;
}
