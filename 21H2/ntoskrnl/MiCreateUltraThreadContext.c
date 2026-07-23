/*
 * XREFs of MiCreateUltraThreadContext @ 0x14029444C
 * Callers:
 *     MiZeroLargePage @ 0x1402353D8 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403B0DF8 (MiCreateZeroThreadContext.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x140726B60 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408D8928 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DBFB0 (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x1409A0640 (MmInitializeProcessor.c)
 * Callees:
 *     MiCreateUltraThreadContextHelper @ 0x1402944B4 (MiCreateUltraThreadContextHelper.c)
 *     MiDeleteUltraThreadContext @ 0x14029794C (MiDeleteUltraThreadContext.c)
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
