/*
 * XREFs of NtUserGetSystemMenu @ 0x1C0078F20
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C0078FF4 (xxxGetSystemMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetSystemMenu(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  struct tagWND *v4; // rbx
  __int64 *SystemMenu; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  gbValidateHandleForIL = 0;
  v4 = (struct tagWND *)ValidateHwnd(a1);
  if ( v4 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    *((_QWORD *)&v10 + 1) = v4;
    HMLockObject(v4);
    SystemMenu = (__int64 *)xxxGetSystemMenu(v4);
    if ( SystemMenu )
      v2 = *SystemMenu;
    ThreadUnlock1(v7, v6, v8);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
