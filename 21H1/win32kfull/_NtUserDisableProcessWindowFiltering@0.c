/*
 * XREFs of _NtUserDisableProcessWindowFiltering@0 @ 0xABEBE
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserDisableProcessWindowFiltering()
{
  int v0; // eax

  EnterCrit(0, 1);
  *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 464) |= 0x800u;
  v0 = *(_DWORD *)(_gptiCurrent + 260);
  if ( v0 )
    *(_DWORD *)(v0 + 148) |= 4u;
  UserSessionSwitchLeaveCrit();
  return 1;
}
