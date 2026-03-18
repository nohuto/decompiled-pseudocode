/*
 * XREFs of NtUserSetDialogControlDpiChangeBehavior @ 0x1C02026F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetDialogControlDpiChangeBehavior(__int64 a1, char a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v17;
    *((_QWORD *)&v17 + 1) = v6;
    HMLockObject(v6);
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) == PsGetCurrentProcessWin32Process(v12) )
    {
      v15 = *(_QWORD *)(v11 + 40);
      v10 = 1LL;
      *(_WORD *)(v15 + 304) = a2 & 3 & a3 | *(_WORD *)(v15 + 304) & ~(a2 & 3);
    }
    else
    {
      UserSetLastError(5LL, v13, v14);
    }
    ThreadUnlock1(v15, v13, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
