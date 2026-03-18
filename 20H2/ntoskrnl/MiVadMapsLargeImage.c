/*
 * XREFs of MiVadMapsLargeImage @ 0x14027F1D0
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiIsVadLargePrivate @ 0x14030DCC4 (MiIsVadLargePrivate.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14031A918 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140529BA8 (MiIsVadEligibleForCommitRelease.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14068317C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406D3888 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
