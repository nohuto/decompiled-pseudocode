/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x14032E910
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140260144 (MmOutSwapWorkingSet.c)
 *     MiCrcStillIntact @ 0x140339D70 (MiCrcStillIntact.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140373BAC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140580028 (MiIsVadEligibleForCommitRelease.c)
 *     MiProcessVaRangesInfoClass @ 0x140753B20 (MiProcessVaRangesInfoClass.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( !v2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 )
    {
      v1 = *(_DWORD *)(a1 + 48);
    }
    else
    {
      v1 = *(_DWORD *)(a1 + 48);
      if ( (v1 & 0x70) == 0x20 )
        return 1LL;
    }
  }
  else if ( !v2 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
  {
    return 1LL;
  }
  return (v1 & 0x70) == 0x40;
}
