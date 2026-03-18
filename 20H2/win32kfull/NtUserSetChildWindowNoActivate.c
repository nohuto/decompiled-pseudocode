/*
 * XREFs of NtUserSetChildWindowNoActivate @ 0x1C0125770
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetChildWindowNoActivate(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v2;
    HMLockObject(v2);
    if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x40) != 0 )
    {
      SetOrClrWF(1, v5, 0xD910u, 1);
      v4 = 1LL;
    }
    else
    {
      UserSetLastError(87LL, v6, v7);
    }
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
