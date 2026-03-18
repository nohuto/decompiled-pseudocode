/*
 * XREFs of NtUserSetInternalWindowPos @ 0x1C0201E50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxSetInternalWindowPos @ 0x1C0208ED8 (xxxSetInternalWindowPos.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, __int128 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+28h] [rbp-60h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+48h] [rbp-40h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  v9 = 0;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v16;
      *((_QWORD *)&v16 + 1) = v6;
      HMLockObject(v6);
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004LL, v10, v11);
      }
      else
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (__int128 *)MmUserProbeAddress;
        v18 = *a3;
        v9 = xxxSetInternalWindowPos(v8);
      }
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
