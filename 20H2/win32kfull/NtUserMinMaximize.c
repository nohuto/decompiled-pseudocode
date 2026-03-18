/*
 * XREFs of NtUserMinMaximize @ 0x1C01FF7A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 */

__int64 __fastcall NtUserMinMaximize(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct tagWND *v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0LL;
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 40);
    if ( (((*(_WORD *)(v7 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v15;
      *((_QWORD *)&v15 + 1) = v6;
      HMLockObject(v6);
      v10 = (__int64 *)xxxMinMaximizeEx(v9, a2, gdwPUDFlags & 0x10000 | (unsigned int)(a3 != 0), 0LL, 0LL, 0LL);
      if ( v10 )
        v8 = *v10;
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
