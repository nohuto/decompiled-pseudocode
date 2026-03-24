/*
 * XREFs of MiCreateUltraThreadContext @ 0x1402E30FC
 * Callers:
 *     MiZeroLargePage @ 0x1402B71F8 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1402E6010 (MiZeroInParallelWorker.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403B0C88 (MiCreateZeroThreadContext.c)
 *     MiHugePageOperation @ 0x140532F78 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1407266AC (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408D87C8 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DBE50 (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x14099F710 (MmInitializeProcessor.c)
 * Callees:
 *     MiCreateUltraThreadContextHelper @ 0x1402E3164 (MiCreateUltraThreadContextHelper.c)
 *     MiDeleteUltraThreadContext @ 0x1402E65FC (MiDeleteUltraThreadContext.c)
 */

__int64 __fastcall MiCreateUltraThreadContext(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  while ( !_bittest(&a3, v6) || (unsigned int)MiCreateUltraThreadContextHelper(a1 + 32LL * v6, v6, a2) )
  {
    if ( ++v6 >= 4 )
      return 1LL;
  }
  MiDeleteUltraThreadContext(a1);
  return 0LL;
}
