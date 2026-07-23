/*
 * XREFs of MiDeleteUltraThreadContext @ 0x14029794C
 * Callers:
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MmDeleteProcessor @ 0x14052E210 (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x14054FE54 (MiDeleteZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x140726B60 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408D8928 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x1408DC0B0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x140297984 (MiDeleteUltraMapContext.c)
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
