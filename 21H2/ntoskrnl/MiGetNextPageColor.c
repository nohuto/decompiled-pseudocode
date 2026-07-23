/*
 * XREFs of MiGetNextPageColor @ 0x140296F58
 * Callers:
 *     MiAllocateTopLevelPage @ 0x1406A7B04 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 *     MiCombineIdenticalPages @ 0x140726B60 (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     MiMapNewSession @ 0x14078724C (MiMapNewSession.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 *     MiScrubNodeLargePages @ 0x1408D8928 (MiScrubNodeLargePages.c)
 *     MiInitializeScrubPacket @ 0x1408DBFB0 (MiInitializeScrubPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextPageColor(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) | (unsigned int)_InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
}
