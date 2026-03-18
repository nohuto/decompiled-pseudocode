/*
 * XREFs of MiGetNextPageColor @ 0x140336AE8
 * Callers:
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406ED7B8 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406EDC28 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x140722C1C (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14075E21C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x1407832AC (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408DA820 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408DB008 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DE690 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
