/*
 * XREFs of NtUserSetCapture @ 0x1C0038F00
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetCapture @ 0x1C00393E0 (xxxSetCapture.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserSetCapture(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v4 = ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)&v11 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v11;
  *((_QWORD *)&v11 + 1) = v4;
  if ( v4 )
    HMLockObject(v4);
  v6 = (__int64 *)xxxSetCapture(v4);
  if ( v6 )
    v2 = *v6;
  ThreadUnlock1(v8, v7, v9);
LABEL_8:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
