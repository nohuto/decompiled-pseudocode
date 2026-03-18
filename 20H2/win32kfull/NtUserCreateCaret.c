/*
 * XREFs of NtUserCreateCaret @ 0x1C010A760
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateCaret @ 0x1C010A844 (xxxCreateCaret.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int Caret; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  Caret = 0;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v8;
    HMLockObject(v8);
    Caret = xxxCreateCaret(v11, a2, a3, a4);
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v9);
  return Caret;
}
