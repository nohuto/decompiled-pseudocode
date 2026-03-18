/*
 * XREFs of MiVadPagesTradable @ 0x1402ACB38
 * Callers:
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
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
