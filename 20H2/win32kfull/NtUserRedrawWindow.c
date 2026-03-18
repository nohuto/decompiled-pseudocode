/*
 * XREFs of NtUserRedrawWindow @ 0x1C0041AD0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h]
  __int128 v16; // [rsp+58h] [rbp-40h]

  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( a1 )
  {
    v9 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_9;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v14;
  *((_QWORD *)&v14 + 1) = v9;
  if ( v9 )
    HMLockObject(v9);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v16 = *a2;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL);
  else
    v7 = xxxRedrawWindow(v9);
  ThreadUnlock1(v11, v10, v12);
LABEL_9:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
