/*
 * XREFs of NtUserPaintMenuBar @ 0x1C005CEF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxPaintMenuBar @ 0x1C005D020 (xxxPaintMenuBar.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserPaintMenuBar(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-18h]

  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v14 = 0;
  v15 = v10;
  if ( v10 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v21;
    *((_QWORD *)&v21 + 1) = v10;
    HMLockObject(v10);
    if ( (*(_BYTE *)(*(_QWORD *)(v15 + 40) + 31LL) & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v20 = 1004LL;
        goto LABEL_12;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v14 = xxxPaintMenuBar(v15, a2, (unsigned int)a3, (unsigned int)a4, a5, a6);
LABEL_8:
        ThreadUnlock1(v17, v16, v18);
        goto LABEL_9;
      }
    }
    v20 = 87LL;
LABEL_12:
    UserSetLastError(v20);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return v14;
}
