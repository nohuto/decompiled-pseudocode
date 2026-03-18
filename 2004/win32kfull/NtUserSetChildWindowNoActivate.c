/*
 * XREFs of NtUserSetChildWindowNoActivate @ 0x1C0124480
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserSetChildWindowNoActivate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v14;
    *((_QWORD *)&v14 + 1) = v2;
    HMLockObject(v2);
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x40) != 0 )
    {
      SetOrClrWF(1, v7, 0xD910u, 1);
      v6 = 1LL;
    }
    else
    {
      UserSetLastError(87LL, v8, v9);
    }
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
