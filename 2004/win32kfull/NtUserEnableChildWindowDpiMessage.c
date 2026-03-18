/*
 * XREFs of NtUserEnableChildWindowDpiMessage @ 0x1C0050FF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00510B4 (xxxEnableChildWindowDpiMessageX.c)
 */

__int64 __fastcall NtUserEnableChildWindowDpiMessage(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v12;
    *((_QWORD *)&v12 + 1) = v2;
    HMLockObject(v2);
    v6 = xxxEnableChildWindowDpiMessageX(v7);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
