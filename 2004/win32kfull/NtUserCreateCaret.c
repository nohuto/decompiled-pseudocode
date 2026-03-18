/*
 * XREFs of NtUserCreateCaret @ 0x1C005DB50
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateCaret @ 0x1C005DC34 (xxxCreateCaret.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int Caret; // ebx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  Caret = 0;
  v13 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v18;
    *((_QWORD *)&v18 + 1) = v8;
    HMLockObject(v8);
    Caret = xxxCreateCaret(v13, a2, a3, a4);
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return Caret;
}
