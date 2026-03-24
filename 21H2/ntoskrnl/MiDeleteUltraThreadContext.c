/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1402E65FC
 * Callers:
 *     MiZeroLargePage @ 0x1402B71F8 (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x1402E30FC (MiCreateUltraThreadContext.c)
 *     MiZeroInParallelWorker @ 0x1402E6010 (MiZeroInParallelWorker.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 *     MmDeleteProcessor @ 0x14052DFD0 (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x140532F78 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x14054FC14 (MiDeleteZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x1407266AC (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408D87C8 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x1408DBF50 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1402E6634 (MiDeleteUltraMapContext.c)
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
