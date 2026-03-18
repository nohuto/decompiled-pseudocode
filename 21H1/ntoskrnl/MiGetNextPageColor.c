/*
 * XREFs of MiGetNextPageColor @ 0x140280344
 * Callers:
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x1406F0068 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406F10F0 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x1407128D0 (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14074B21C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x14077289C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D3690 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D3E78 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408D7500 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
