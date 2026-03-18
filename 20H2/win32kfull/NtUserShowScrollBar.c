/*
 * XREFs of NtUserShowScrollBar @ 0x1C010CFB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxShowScrollBar @ 0x1C010D0A4 (xxxShowScrollBar.c)
 */

__int64 __fastcall NtUserShowScrollBar(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v14;
      *((_QWORD *)&v14 + 1) = v4;
      HMLockObject(v4);
      if ( a2 > 3 )
        UserSetLastError(87LL, v8, v9);
      else
        v6 = xxxShowScrollBar(v7);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
