/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18009D65C
 * Callers:
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18009D418 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z @ 0x18009D8C0 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009DD3C (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180154820 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rbx
  bool v24; // sf
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rax
  bool v31; // sf
  unsigned __int64 v32; // r8
  __int128 v33; // [rsp+20h] [rbp-40h] BYREF
  __int64 v34; // [rsp+30h] [rbp-30h]
  __int128 v35; // [rsp+40h] [rbp-20h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  detail::pointer_buffer_impl<CDrawListEntry *>::ensure_extra_capacity(a1, a3);
  v9 = *a1;
  v10 = *a1 & 3;
  if ( (*a1 & 3) == 0 )
  {
LABEL_35:
    v11 = (unsigned __int64)a1;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)a1 & 3) == 1 )
  {
    v11 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)a1 & 3) != 2 )
  {
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_35;
  }
  v11 = 0LL;
LABEL_4:
  if ( (_DWORD)v10 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      v12 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v6, v7, v8, v33, *((_QWORD *)&v33 + 1));
      v9 = *a1;
      v13 = *(_QWORD *)(v12 - 16);
    }
    else
    {
      if ( (unsigned int)(v10 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 1LL;
  }
  v14 = v11 + 8 * v13;
  v15 = v9 & 3;
  if ( (v9 & 3) == 0 )
    goto LABEL_40;
  if ( (v9 & 3) == 1 )
  {
    v16 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_10;
  }
  if ( (v9 & 3) != 2 )
  {
    if ( (v9 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_40:
    v16 = (unsigned __int64)a1;
    goto LABEL_10;
  }
  v16 = 0LL;
LABEL_10:
  v17 = (__int64)(v14 - v16) >> 3;
  v18 = v17 - a2;
  if ( (v9 & 3) == 0 )
  {
LABEL_43:
    v19 = (unsigned __int64)a1;
    goto LABEL_13;
  }
  if ( (_DWORD)v15 == 1 )
  {
    v19 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_13;
  }
  if ( (_DWORD)v15 != 2 )
  {
    if ( (_DWORD)v15 != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_43;
  }
  v19 = 0LL;
LABEL_13:
  if ( (v9 & 3) != 0 )
  {
    if ( (_DWORD)v15 == 1 )
    {
      v20 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v6, v7, v8, v33, *((_QWORD *)&v33 + 1));
      v9 = *a1;
      v21 = *(_QWORD *)(v20 - 16);
    }
    else
    {
      if ( (unsigned int)(v15 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v21 = 0LL;
    }
  }
  else
  {
    v21 = 1LL;
  }
  v22 = (_QWORD *)(v19 + 8 * v21);
  if ( (v9 & 3) == 0 )
    goto LABEL_48;
  if ( (v9 & 3) == 1 )
  {
    v23 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_19;
  }
  if ( (v9 & 3) != 2 )
  {
    if ( (v9 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_48:
    v23 = (unsigned __int64)a1;
    goto LABEL_19;
  }
  v23 = 0LL;
LABEL_19:
  *((_QWORD *)&v33 + 1) = a3;
  *(_QWORD *)&v33 = v23 + 8 * v17;
  v24 = a3 < 0;
  if ( a3 )
  {
    if ( !(v23 + 8 * v17) )
      goto LABEL_78;
    v24 = a3 < 0;
  }
  if ( v24 && a3 )
    goto LABEL_78;
  v34 = a3;
  v25 = v18;
  if ( a3 < v18 )
    v25 = a3;
  v35 = v33;
  v26 = 8 * v25;
  v27 = &v22[v26 / 0xFFFFFFFFFFFFFFF8uLL];
  v36 = a3;
  if ( v22 != &v22[v26 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v8 = v35;
    v15 = v36;
    do
    {
      --v22;
      if ( !v8 )
        goto LABEL_78;
      if ( !v15 )
        goto LABEL_78;
      if ( (unsigned __int64)--v15 >= *((_QWORD *)&v35 + 1) )
        goto LABEL_78;
      *(_QWORD *)(v8 + 8 * v15) = *v22;
    }
    while ( v22 != v27 );
  }
  if ( v18 > a3 )
  {
    *(_QWORD *)&v35 = v23;
    *((_QWORD *)&v35 + 1) = v17;
    v31 = v17 < 0;
    if ( !v17 )
    {
LABEL_76:
      if ( !v31 || !v17 )
        goto LABEL_79;
      goto LABEL_78;
    }
    if ( v23 )
    {
      v31 = v17 < 0;
      goto LABEL_76;
    }
LABEL_78:
    _o__invalid_parameter_noinfo_noreturn(v15, v22);
    __debugbreak();
LABEL_79:
    v36 = v17;
    v33 = v35;
    v34 = v17;
    v32 = v23 + 8 * (v17 - a3);
    v28 = a2;
    ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v35,
      v23 + 8 * a2,
      v32,
      &v33);
    goto LABEL_28;
  }
  v28 = a2;
LABEL_28:
  if ( a3 )
  {
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_81;
    if ( (*(_DWORD *)a1 & 3) == 1 )
    {
      v29 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v22, v27, v8, v33, *((_QWORD *)&v33 + 1));
      *(_QWORD *)(v29 - 16) += a3;
      return v23 + 8 * v28;
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
  return v23 + 8 * v28;
}
