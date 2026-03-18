/*
 * XREFs of MiDeleteUltraThreadContext @ 0x140268284
 * Callers:
 *     MiInitializeNewUltraHugeContext @ 0x14025BDC8 (MiInitializeNewUltraHugeContext.c)
 *     MiZeroLargePage @ 0x14026A28C (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x14026A574 (MiCreateUltraThreadContext.c)
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403D452C (MiTimeSingleLargePageZeroWorker.c)
 *     MmDeleteProcessor @ 0x14057F9FC (MmDeleteProcessor.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MiDeleteZeroContext @ 0x1405B2670 (MiDeleteZeroContext.c)
 *     MiReleaseLargeZeroingVa @ 0x1405B2914 (MiReleaseLargeZeroingVa.c)
 *     MiCombineIdenticalPages @ 0x1407F8CF0 (MiCombineIdenticalPages.c)
 *     MiScrubNodeLargePages @ 0x14097E8C8 (MiScrubNodeLargePages.c)
 *     MiReleaseScrubPacket @ 0x140983AC0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDeleteUltraMapContext @ 0x1402682BC (MiDeleteUltraMapContext.c)
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
