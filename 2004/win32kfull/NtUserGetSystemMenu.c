/*
 * XREFs of NtUserGetSystemMenu @ 0x1C005C250
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSystemMenu @ 0x1C005C324 (xxxGetSystemMenu.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetSystemMenu(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWND *v5; // rbx
  __int64 v6; // r8
  __int64 *SystemMenu; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  gbValidateHandleForIL = 0;
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    *((_QWORD *)&v12 + 1) = v5;
    HMLockObject(v5);
    SystemMenu = (__int64 *)xxxGetSystemMenu(v5);
    if ( SystemMenu )
      v2 = *SystemMenu;
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6);
  return v2;
}
