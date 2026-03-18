/*
 * XREFs of NtUserMinMaximize @ 0x1C0200610
 * Callers:
 *     <none>
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  struct tagWND *v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = (struct tagWND *)v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v7 = (*(_WORD *)(v8 + 42) & 0x3FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v17;
      *((_QWORD *)&v17 + 1) = v6;
      HMLockObject(v6);
      v12 = (__int64 *)xxxMinMaximizeEx(v11, a2, gdwPUDFlags & 0x10000 | (unsigned int)(a3 != 0), 0LL, 0LL, 0LL);
      if ( v12 )
        v10 = *v12;
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
