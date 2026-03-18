/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x14027CA20
 * Callers:
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14031A918 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MiCrcStillIntact @ 0x1403678C4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140529BA8 (MiIsVadEligibleForCommitRelease.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14068317C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x1406D371C (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x100000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( v2 || (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
    {
      v1 = *(_DWORD *)(a1 + 48);
      if ( (v1 & 0x70) == 0x20 )
        return 1LL;
    }
    else
    {
      v1 = *(_DWORD *)(a1 + 48);
    }
  }
  else if ( !v2 || (v1 & 0x400000) == 0 && (v1 & 0xC0000u) < 0x80000 )
  {
    return 1LL;
  }
  return (v1 & 0x70) == 0x40;
}
