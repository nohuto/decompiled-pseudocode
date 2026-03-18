/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x14021AA60
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14030C194 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiCrcStillIntact @ 0x140364F24 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140525B88 (MiIsVadEligibleForCommitRelease.c)
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x1406DD768 (MiProcessVaRangesInfoClass.c)
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
