/*
 * XREFs of MiVadPagesTradable @ 0x140253B08
 * Callers:
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiProcessVaContiguityInformation @ 0x14054CE20 (MiProcessVaContiguityInformation.c)
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
