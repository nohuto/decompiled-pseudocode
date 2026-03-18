/*
 * XREFs of NtUserGetCaretPos @ 0x1C0121F30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 v4; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (_QWORD *)MmUserProbeAddress;
  *v2 = *v2;
  v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
  *a1 = *(_DWORD *)(v4 + 316);
  a1[1] = *(_DWORD *)(v4 + 320);
  UserSessionSwitchLeaveCrit(v4);
  return 1LL;
}
