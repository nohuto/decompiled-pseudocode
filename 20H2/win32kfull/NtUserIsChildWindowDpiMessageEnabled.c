/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00ED8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v13;
    *((_QWORD *)&v13 + 1) = v2;
    HMLockObject(v2);
    v8 = 0LL;
    v9 = *(unsigned int *)(v5[5] + 288LL);
    LOBYTE(v9) = v9 & 0xF;
    if ( (_BYTE)v9 == 2 )
    {
      v10 = v5;
      do
      {
        v9 = v10[13];
        if ( v9 )
        {
          v7 = v10[3];
          v6 = 0LL;
          if ( v7 )
          {
            v11 = *(_QWORD *)(v7 + 8);
            if ( v11 )
              v6 = *(_QWORD *)(v11 + 24);
          }
          if ( v9 == v6 )
            break;
        }
        v10 = (_QWORD *)v10[13];
      }
      while ( v9 );
      if ( v5 == v10 )
      {
        v8 = 1LL;
      }
      else if ( v10 && (*(_DWORD *)(v10[5] + 232LL) & 0x20000000) != 0 )
      {
        v8 = 1LL;
      }
    }
    ThreadUnlock1(v9, v6, v7);
    v4 = v8;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
