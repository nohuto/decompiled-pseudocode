/*
 * XREFs of MiDeleteUltraThreadContext @ 0x1403265F0
 * Callers:
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1403248C0 (MiZeroInParallelWorker.c)
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AE258 (MiTimeSingleLargePageZeroWorker.c)
 *     MmDeleteProcessor @ 0x1405284B0 (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x14052D458 (MiHugePageOperation.c)
 *     MiDeleteZeroThreadContext @ 0x14054A124 (MiDeleteZeroThreadContext.c)
 *     MiCombineIdenticalPages @ 0x1407128D0 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408D3E78 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x1408D7600 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x140326628 (MiDeleteUltraMapContext.c)
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
