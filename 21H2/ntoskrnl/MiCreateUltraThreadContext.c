/*
 * XREFs of MiCreateUltraThreadContext @ 0x14026A574
 * Callers:
 *     MiInitializeNewUltraHugeContext @ 0x14025BDC8 (MiInitializeNewUltraHugeContext.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 *     MiCreateZeroThreadContext @ 0x1403D3CA0 (MiCreateZeroThreadContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403D452C (MiTimeSingleLargePageZeroWorker.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MiCombineIdenticalPages @ 0x1407F8CF0 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14097E8C8 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1409839C0 (MiInitializeScrubPacket.c)
 *     MmInitializeProcessor @ 0x140A59E20 (MmInitializeProcessor.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140268284 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14026A5DC (MiCreateUltraThreadContextHelper.c)
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
