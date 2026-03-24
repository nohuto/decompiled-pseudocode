/*
 * XREFs of MiGetNextPageColor @ 0x1402E5C08
 * Callers:
 *     MiAllocateTopLevelPage @ 0x1406D0824 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1406D1A78 (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 *     MiCombineIdenticalPages @ 0x1407266AC (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140762A0C (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x14078708C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D87C8 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DBE50 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
