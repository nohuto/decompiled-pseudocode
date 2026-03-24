/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C0110174
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C010D698 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0111980 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004D420 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, unsigned int **a2)
{
  unsigned int *v3; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  unsigned int *v7; // r9
  _QWORD *v8; // rax
  unsigned int *v9; // r9
  _QWORD *v10; // rax
  unsigned int *v11; // r8
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edi
  _QWORD *v22; // rax
  __int64 v23; // rax

  v3 = *a2;
  if ( !v3 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    WdLogEvent5_WdAssertion(v18);
    v3 = *a2;
  }
  v5 = a1 + 3;
  v6 = (_QWORD *)a1[3];
  if ( v6 == a1 + 3 )
    goto LABEL_24;
  v7 = (unsigned int *)(v6 - 1);
  if ( v6 == (_QWORD *)8 )
    goto LABEL_10;
  do
  {
    if ( v7[6] == v3[6] )
      break;
    v8 = (_QWORD *)*((_QWORD *)v7 + 1);
    v7 = (unsigned int *)(v8 - 1);
    if ( v8 == v5 )
      v7 = 0LL;
  }
  while ( v7 );
  if ( v7 )
  {
    v14 = (v7 != v3) + 1;
  }
  else
  {
LABEL_10:
    if ( v6 == v5 )
      goto LABEL_24;
    v9 = (unsigned int *)(v6 - 1);
    if ( v6 == (_QWORD *)8 )
      goto LABEL_23;
    do
    {
      if ( v9 == v3 )
        break;
      v10 = (_QWORD *)*((_QWORD *)v9 + 1);
      v9 = (unsigned int *)(v10 - 1);
      if ( v10 == v5 )
        v9 = 0LL;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_23:
      if ( v6 != v5 )
      {
        v11 = (unsigned int *)(v6 - 1);
        if ( v11 )
        {
          do
          {
            if ( v11 == v3 )
              break;
            v12 = (_QWORD *)*((_QWORD *)v11 + 1);
            v11 = (unsigned int *)(v12 - 1);
            if ( v12 == v5 )
              v11 = 0LL;
          }
          while ( v11 );
          if ( v11 )
          {
            v19 = WdLogNewEntry5_WdAssertion(v5, v3);
            *(_QWORD *)(v19 + 24) = 108LL;
            WdLogEvent5_WdAssertion(v19);
LABEL_26:
            v14 = 3;
            goto LABEL_27;
          }
        }
      }
LABEL_24:
      v13 = (_QWORD *)a1[4];
      v3 += 2;
      if ( (_QWORD *)*v13 != v5 )
        __fastfail(3u);
      *(_QWORD *)v3 = v5;
      *((_QWORD *)v3 + 1) = v13;
      *v13 = v3;
      a1[4] = v3;
      ++a1[5];
      goto LABEL_26;
    }
    v14 = 1;
  }
LABEL_27:
  v15 = (unsigned int)(v14 - 1);
  if ( (_DWORD)v15 )
  {
    v16 = (unsigned int)(v15 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 == 1 )
      {
        *a2 = 0LL;
        return 0LL;
      }
      v20 = WdLogNewEntry5_WdError(v16, v3);
      WdLogEvent5_WdError(v20);
      v21 = -1073741823;
    }
    else
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v16, v3);
      v22[3] = (*a2)[6];
      v22[4] = *a2;
      v22[5] = a1;
      WdLogEvent5_WdError(v22);
      v21 = -1071774926;
    }
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return v21;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v15, v3);
    *(_QWORD *)(v23 + 24) = *a2;
    *(_QWORD *)(v23 + 32) = a1;
    WdLogEvent5_WdError(v23);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return 3223192344LL;
  }
}
