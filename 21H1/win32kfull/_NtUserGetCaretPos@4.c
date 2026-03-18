/*
 * XREFs of _NtUserGetCaretPos@4 @ 0x161DC3
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetCaretPos(_DWORD *a1)
{
  int v3; // [esp+14h] [ebp-28h]
  PKTHREAD CurrentThread; // [esp+44h] [ebp+8h]

  EnterSharedCrit(0, 1);
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    *(_DWORD *)_MmUserProbeAddress = 0;
  *a1 = *a1;
  a1[1] = a1[1];
  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 236);
  *a1 = *(_DWORD *)(v3 + 232);
  a1[1] = *(_DWORD *)(v3 + 236);
  UserSessionSwitchLeaveCrit();
  return 1;
}
