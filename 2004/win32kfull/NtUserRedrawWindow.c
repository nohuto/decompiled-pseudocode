/*
 * XREFs of NtUserRedrawWindow @ 0x1C006F340
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+48h] [rbp-50h]
  __int128 v18; // [rsp+58h] [rbp-40h]

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( a1 )
  {
    v10 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_9;
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v16;
  *((_QWORD *)&v16 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v18 = *a2;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL);
  else
    v7 = xxxRedrawWindow(v10);
  ThreadUnlock1(v13, v12, v14);
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v8, v11);
  return v7;
}
