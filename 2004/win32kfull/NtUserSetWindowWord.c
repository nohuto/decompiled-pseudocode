/*
 * XREFs of NtUserSetWindowWord @ 0x1C014E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x1C014E27C (-xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z.c)
 */

__int64 __fastcall NtUserSetWindowWord(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // bx
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v10 = 0;
  v11 = (struct tagWND *)v6;
  if ( v6 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    v10 = xxxSetWindowWord(v11, a2, a3);
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
