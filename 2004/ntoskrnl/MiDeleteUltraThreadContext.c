/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1402E14F0
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402DF7C0 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x1402E1D50 (MiCreateUltraThreadContext.c)
 *     MiZeroLargePage @ 0x140349124 (MiZeroLargePage.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403A7E38 (MiTimeSingleLargePageZeroWorker.c)
 *     MmDeleteProcessor @ 0x140528B00 (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x14052DAA8 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x14054A774 (MiDeleteZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x140714C54 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408D51C8 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x1408D8950 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1402E1528 (MiDeleteUltraMapContext.c)
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
