/*
 * XREFs of NtUserValidateRect @ 0x1C011AE90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxValidateRect @ 0x1C011AFC8 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rdi
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 *v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int128 v15; // [rsp+58h] [rbp-20h] BYREF

  v2 = a2;
  v12 = a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (__int128 *)MmUserProbeAddress;
    v15 = *v2;
    v12 = &v15;
  }
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
      goto LABEL_7;
  }
  else
  {
    v6 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v13 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v13;
  *((_QWORD *)&v13 + 1) = v6;
  if ( v6 )
    HMLockObject(v6);
  v4 = xxxValidateRect(v6, v12);
  ThreadUnlock1(v9, v8, v10);
LABEL_7:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
