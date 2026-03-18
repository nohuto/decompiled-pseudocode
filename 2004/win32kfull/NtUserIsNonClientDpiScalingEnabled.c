/*
 * XREFs of NtUserIsNonClientDpiScalingEnabled @ 0x1C00F4DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsNonClientDpiScalingEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v13;
    *((_QWORD *)&v13 + 1) = v2;
    HMLockObject(v2);
    v10 = v7[5];
    if ( (*(_DWORD *)(v10 + 288) & 0xF) == 2 )
    {
      v11 = v7[13];
      if ( v11 )
      {
        v8 = v7[3];
        v9 = 0LL;
        if ( v8 )
        {
          v8 = *(_QWORD *)(v8 + 8);
          if ( v8 )
            v9 = *(_QWORD *)(v8 + 24);
        }
        if ( v11 == v9 && (*(_DWORD *)(v10 + 232) & 0x10000000) != 0 )
          v6 = 1LL;
      }
    }
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
