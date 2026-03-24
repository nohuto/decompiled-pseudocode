/*
 * XREFs of MiVadMapsLargeImage @ 0x14021CC20
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiSoftFaultMappedView @ 0x14028D5A0 (MiSoftFaultMappedView.c)
 *     MiIsVadLargePrivate @ 0x1402AD514 (MiIsVadLargePrivate.c)
 *     MiInsertVad @ 0x140316330 (MiInsertVad.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14035A26C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14052B6A8 (MiIsVadEligibleForCommitRelease.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406621F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMarkPrivateImageCfgBits @ 0x140713DA4 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
