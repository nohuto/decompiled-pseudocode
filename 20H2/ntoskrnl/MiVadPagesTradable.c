/*
 * XREFs of MiVadPagesTradable @ 0x14034120C
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPagesTradable(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x100000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( !v2 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 || (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 )
      return 0LL;
  }
  else if ( v2 && ((v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000) )
  {
    return 0LL;
  }
  return 1LL;
}
