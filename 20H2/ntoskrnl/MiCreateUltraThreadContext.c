/*
 * XREFs of MiCreateUltraThreadContext @ 0x140333FE4
 * Callers:
 *     MiZeroLargePage @ 0x140319D50 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403AAD88 (MiCreateZeroThreadContext.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x140722C1C (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x1408DB008 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DE690 (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x1409A1E3C (MmInitializeProcessor.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1403338B8 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14033404C (MiCreateUltraThreadContextHelper.c)
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
