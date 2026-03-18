/*
 * XREFs of MiGetNextPageColor @ 0x1402272F4
 * Callers:
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406ABFD4 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x140714C54 (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14074F63C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x140774CAC (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D49E0 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D51C8 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408D8850 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
