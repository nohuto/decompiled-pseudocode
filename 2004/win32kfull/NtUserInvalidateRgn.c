/*
 * XREFs of NtUserInvalidateRgn @ 0x1C010ACE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 */

__int64 __fastcall NtUserInvalidateRgn(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  struct tagWND *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0;
  v11 = (struct tagWND *)v6;
  if ( v6 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    *((_QWORD *)&v16 + 1) = v6;
    HMLockObject(v6);
    v10 = xxxRedrawWindow(v11, 0LL, a2, a3 != 0 ? 5 : 1);
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
