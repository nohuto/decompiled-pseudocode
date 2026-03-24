/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1800939DC
 * Callers:
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180093798 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z @ 0x180093C40 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800940BC (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180154F00 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rbx
  bool v21; // sf
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v28; // r9
  bool v29; // sf
  unsigned __int64 v30; // r8
  __int128 v31; // [rsp+20h] [rbp-40h] BYREF
  __int64 v32; // [rsp+30h] [rbp-30h]
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  detail::pointer_buffer_impl<CDrawListEntry *>::ensure_extra_capacity(a1, a3);
  v6 = *a1;
  v7 = *a1 & 3;
  if ( (*a1 & 3) == 0 )
  {
LABEL_35:
    v8 = (unsigned __int64)a1;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)a1 & 3) == 1 )
  {
    v8 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)a1 & 3) != 2 )
  {
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_35;
  }
  v8 = 0LL;
LABEL_4:
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      v6 = *a1;
      v10 = *(_QWORD *)(v9 - 16);
    }
    else
    {
      if ( (unsigned int)(v7 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v10 = 0LL;
    }
  }
  else
  {
    v10 = 1LL;
  }
  v11 = v8 + 8 * v10;
  v12 = v6 & 3;
  if ( (v6 & 3) == 0 )
    goto LABEL_40;
  if ( (v6 & 3) == 1 )
  {
    v13 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_10;
  }
  if ( (v6 & 3) != 2 )
  {
    if ( (v6 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_40:
    v13 = (unsigned __int64)a1;
    goto LABEL_10;
  }
  v13 = 0LL;
LABEL_10:
  v14 = (__int64)(v11 - v13) >> 3;
  v15 = v14 - a2;
  if ( (v6 & 3) == 0 )
  {
LABEL_43:
    v16 = (unsigned __int64)a1;
    goto LABEL_13;
  }
  if ( (_DWORD)v12 == 1 )
  {
    v16 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_13;
  }
  if ( (_DWORD)v12 != 2 )
  {
    if ( (_DWORD)v12 != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_43;
  }
  v16 = 0LL;
LABEL_13:
  if ( (v6 & 3) != 0 )
  {
    if ( (_DWORD)v12 == 1 )
    {
      v17 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      v6 = *a1;
      v18 = *(_QWORD *)(v17 - 16);
    }
    else
    {
      if ( (unsigned int)(v12 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v18 = 0LL;
    }
  }
  else
  {
    v18 = 1LL;
  }
  v19 = (_QWORD *)(v16 + 8 * v18);
  if ( (v6 & 3) == 0 )
    goto LABEL_48;
  if ( (v6 & 3) == 1 )
  {
    v20 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_19;
  }
  if ( (v6 & 3) != 2 )
  {
    if ( (v6 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_48:
    v20 = (unsigned __int64)a1;
    goto LABEL_19;
  }
  v20 = 0LL;
LABEL_19:
  *((_QWORD *)&v31 + 1) = a3;
  *(_QWORD *)&v31 = v20 + 8 * v14;
  v21 = a3 < 0;
  if ( a3 )
  {
    if ( !(v20 + 8 * v14) )
      goto LABEL_78;
    v21 = a3 < 0;
  }
  if ( v21 && a3 )
    goto LABEL_78;
  v32 = a3;
  v22 = v15;
  if ( a3 < v15 )
    v22 = a3;
  v33 = v31;
  v23 = 8 * v22;
  v24 = &v19[v23 / 0xFFFFFFFFFFFFFFF8uLL];
  v34 = a3;
  if ( v19 != &v19[v23 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v28 = v33;
    v12 = v34;
    do
    {
      --v19;
      if ( !v28 )
        goto LABEL_78;
      if ( !v12 )
        goto LABEL_78;
      if ( (unsigned __int64)--v12 >= *((_QWORD *)&v33 + 1) )
        goto LABEL_78;
      *(_QWORD *)(v28 + 8 * v12) = *v19;
    }
    while ( v19 != v24 );
  }
  if ( v15 > a3 )
  {
    *(_QWORD *)&v33 = v20;
    *((_QWORD *)&v33 + 1) = v14;
    v29 = v14 < 0;
    if ( !v14 )
    {
LABEL_76:
      if ( !v29 || !v14 )
        goto LABEL_79;
      goto LABEL_78;
    }
    if ( v20 )
    {
      v29 = v14 < 0;
      goto LABEL_76;
    }
LABEL_78:
    _o__invalid_parameter_noinfo_noreturn(v12, v19);
    __debugbreak();
LABEL_79:
    v34 = v14;
    v31 = v33;
    v32 = v14;
    v30 = v20 + 8 * (v14 - a3);
    v25 = a2;
    ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v33,
      v20 + 8 * a2,
      v30,
      &v31);
    goto LABEL_28;
  }
  v25 = a2;
LABEL_28:
  if ( a3 )
  {
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_81;
    if ( (*(_DWORD *)a1 & 3) == 1 )
    {
      v26 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      *(_QWORD *)(v26 - 16) += a3;
      return v20 + 8 * v25;
    }
    if ( (*(_DWORD *)a1 & 3) != 2 )
    {
      if ( (*(_DWORD *)a1 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( a3 != 1 )
LABEL_81:
        *a1 = 2LL;
    }
  }
  return v20 + 8 * v25;
}
