/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x1402AD6E0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140311308 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiCrcStillIntact @ 0x1403658E4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1405261D8 (MiIsVadEligibleForCommitRelease.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14062ECA4 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiProcessVaRangesInfoClass @ 0x140700488 (MiProcessVaRangesInfoClass.c)
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
