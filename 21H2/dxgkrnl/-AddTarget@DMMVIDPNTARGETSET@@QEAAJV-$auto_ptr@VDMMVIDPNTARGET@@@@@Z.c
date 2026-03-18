/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C018A3C0
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C018A4B0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C01A6FD0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004ED14 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // r11
  __int64 (__fastcall ***v5)(_QWORD, __int64); // r8
  _QWORD *v6; // r10
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r8

  v2 = *a2;
  v5 = *a2;
  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *a2;
    v5 = *a2;
  }
  v6 = (_QWORD *)a1[3];
  v7 = a1 + 3;
  if ( v6 == a1 + 3 || (v8 = v6 - 1, v6 == (_QWORD *)8) )
  {
LABEL_14:
    if ( !v5 || v6 == v7 || (v12 = v6 - 1, v6 == (_QWORD *)8) )
    {
LABEL_21:
      v14 = (_QWORD *)a1[4];
      v15 = v5 + 1;
      if ( (_QWORD *)*v14 != v7 )
        __fastfail(3u);
      *v15 = v7;
      v15[1] = v14;
      *v14 = v15;
      a1[4] = v15;
      ++a1[5];
    }
    else
    {
      while ( v12 != v5 )
      {
        v13 = (_QWORD *)v12[1];
        v12 = v13 - 1;
        if ( v13 == v7 )
          v12 = 0LL;
        if ( !v12 )
          goto LABEL_21;
      }
      WdLogSingleEntry1(1LL, 108LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
    }
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    while ( *((_DWORD *)v8 + 6) != *((_DWORD *)v5 + 6) )
    {
      v9 = (_QWORD *)v8[1];
      v8 = v9 - 1;
      if ( v9 == v7 )
        v8 = 0LL;
      if ( !v8 )
      {
        v10 = v6 - 1;
        while ( v10 != v5 )
        {
          v11 = (_QWORD *)v10[1];
          v10 = v11 - 1;
          if ( v11 == v7 )
            v10 = 0LL;
          if ( !v10 )
            goto LABEL_14;
        }
        goto LABEL_26;
      }
    }
    if ( v8 != v5 )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)v2 + 6), v2, a1);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
      return 3223192370LL;
    }
LABEL_26:
    WdLogSingleEntry2(2LL, v2, a1);
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
    return 3223192344LL;
  }
}
