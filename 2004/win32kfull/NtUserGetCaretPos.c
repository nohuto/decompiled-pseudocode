/*
 * XREFs of NtUserGetCaretPos @ 0x1C0120BF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v6; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (_QWORD *)MmUserProbeAddress;
  *v2 = *v2;
  v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424);
  *a1 = *(_DWORD *)(v6 + 316);
  a1[1] = *(_DWORD *)(v6 + 320);
  UserSessionSwitchLeaveCrit(v6, v3, v4);
  return 1LL;
}
