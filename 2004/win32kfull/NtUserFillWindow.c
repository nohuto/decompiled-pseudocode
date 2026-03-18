/*
 * XREFs of NtUserFillWindow @ 0x1C0143600
 * Callers:
 *     <none>
 * Callees:
 *     xxxFillWindow @ 0x1C0061DEC (xxxFillWindow.c)
 */

__int64 __fastcall NtUserFillWindow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h]
  __int128 v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-20h]

  v22 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a2);
  v10 = 0;
  v11 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v20;
    *((_QWORD *)&v20 + 1) = v6;
    HMLockObject(v6);
    if ( a3 )
    {
      if ( !a1 )
      {
        v15 = 0LL;
        goto LABEL_5;
      }
      v15 = ValidateHwnd(a1);
      if ( v15 )
      {
LABEL_5:
        *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v22;
        *((_QWORD *)&v22 + 1) = v15;
        if ( v15 )
          HMLockObject(v15);
        v10 = xxxFillWindow(v15, v11, a3);
        ThreadUnlock1(v17, v16, v18);
      }
    }
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
