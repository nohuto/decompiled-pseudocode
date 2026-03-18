/*
 * XREFs of NtUserIsChildWindowDpiMessageEnabled @ 0x1C00F3520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserIsChildWindowDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r9
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    *((_QWORD *)&v15 + 1) = v2;
    HMLockObject(v2);
    v10 = 0LL;
    v11 = *(unsigned int *)(v7[5] + 288LL);
    LOBYTE(v11) = v11 & 0xF;
    if ( (_BYTE)v11 == 2 )
    {
      v12 = v7;
      do
      {
        v11 = v12[13];
        if ( v11 )
        {
          v9 = v12[3];
          v8 = 0LL;
          if ( v9 )
          {
            v13 = *(_QWORD *)(v9 + 8);
            if ( v13 )
              v8 = *(_QWORD *)(v13 + 24);
          }
          if ( v11 == v8 )
            break;
        }
        v12 = (_QWORD *)v12[13];
      }
      while ( v11 );
      if ( v7 == v12 )
      {
        v10 = 1LL;
      }
      else if ( v12 && (*(_DWORD *)(v12[5] + 232LL) & 0x20000000) != 0 )
      {
        v10 = 1LL;
      }
    }
    ThreadUnlock1(v11, v8, v9);
    v6 = v10;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
