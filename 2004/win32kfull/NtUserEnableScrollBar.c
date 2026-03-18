/*
 * XREFs of NtUserEnableScrollBar @ 0x1C00F11C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxEnableScrollBar @ 0x1C00F12C0 (xxxEnableScrollBar.c)
 */

__int64 __fastcall NtUserEnableScrollBar(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    v5 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v16;
      *((_QWORD *)&v16 + 1) = v4;
      HMLockObject(v4);
      if ( a2 > 3 || a2 == 2 && *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) != 666 )
        UserSetLastError(87LL, v10, v11);
      else
        v8 = xxxEnableScrollBar(v9);
      ThreadUnlock1(v13, v12, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
