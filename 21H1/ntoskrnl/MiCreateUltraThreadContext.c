/*
 * XREFs of MiCreateUltraThreadContext @ 0x140326F88
 * Callers:
 *     MiZeroLargePage @ 0x14030B58C (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1403248C0 (MiZeroInParallelWorker.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AE258 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403AE7B8 (MiCreateZeroThreadContext.c)
 *     MiHugePageOperation @ 0x14052D458 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1407128D0 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408D3E78 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408D7500 (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x14099A5A0 (MmInitializeProcessor.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1403265F0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x140326FF0 (MiCreateUltraThreadContextHelper.c)
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
