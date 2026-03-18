/*
 * XREFs of NtUserSetInternalWindowPos @ 0x1C0202CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     xxxSetInternalWindowPos @ 0x1C0209D60 (xxxSetInternalWindowPos.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, __int128 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct tagWND *v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+28h] [rbp-60h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+48h] [rbp-40h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v6;
  v11 = 0;
  if ( v6 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v18;
      *((_QWORD *)&v18 + 1) = v6;
      HMLockObject(v6);
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004LL, v12, v13);
      }
      else
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (__int128 *)MmUserProbeAddress;
        v20 = *a3;
        v11 = xxxSetInternalWindowPos(v10);
      }
      ThreadUnlock1(v15, v14, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v11;
}
