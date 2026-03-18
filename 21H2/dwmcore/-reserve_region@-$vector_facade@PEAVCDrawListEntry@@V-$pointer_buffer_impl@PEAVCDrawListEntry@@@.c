/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18008750C
 * Callers:
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18008721C (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800AF3A8 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800DF734 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r14
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rdx
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // rax
  int v32; // ecx
  unsigned __int64 v33; // r14
  _QWORD *v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  unsigned int v37; // eax
  void *v38; // rax
  __int64 v39; // r9
  __int128 v40; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v41; // [rsp+30h] [rbp-30h]
  __int128 v42; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  v4 = *a1;
  v6 = v4 & 3;
  if ( (v4 & 3) != 0 )
  {
    if ( v6 == 1 )
    {
      v7 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      v4 = *a1;
      v8 = *(_QWORD *)(v7 - 16);
    }
    else
    {
      if ( (unsigned int)(v6 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v8 = 0LL;
    }
  }
  else
  {
    v8 = 1LL;
  }
  v9 = v4 & 3;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      v11 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 8);
      goto LABEL_7;
    }
    v32 = v10 - 1;
    if ( !v32 )
    {
      v11 = 0LL;
      goto LABEL_7;
    }
    if ( v32 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v11 = 1LL;
LABEL_7:
  if ( v11 - v8 >= a3 )
    goto LABEL_8;
  v33 = v8 + a3;
  if ( v8 + a3 < v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_81;
  }
  if ( v33 == 1 )
  {
    *a1 = 3LL;
    goto LABEL_8;
  }
  v34 = operator new(8 * v33 + 16);
  *((_QWORD *)&v40 + 1) = v8;
  v41 = 0LL;
  v35 = (unsigned __int64)(v34 + 2);
  *v34 = 0LL;
  *(_QWORD *)&v40 = v34 + 2;
  v34[1] = 0LL;
  v36 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
  v42 = v40;
  v43 = v41;
  std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>(
    &v40,
    v36,
    v36 + 8 * v8,
    &v42);
  v37 = *(_DWORD *)a1 & 3;
  if ( v37 )
  {
    if ( v37 == 1 )
    {
      v38 = (void *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16);
      goto LABEL_69;
    }
    if ( v37 <= 1 )
LABEL_81:
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v38 = 0LL;
LABEL_69:
  *a1 = v35 | 1;
  DefaultHeap::Free(v38);
  *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 16) = v8;
  *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1) - 8) = v33;
LABEL_8:
  v12 = *a1;
  v13 = *a1 & 3;
  if ( (*a1 & 3) == 0 )
  {
LABEL_47:
    v14 = (unsigned __int64)a1;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)a1 & 3) == 1 )
  {
    v14 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)a1 & 3) != 2 )
  {
    if ( (*(_DWORD *)a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_47;
  }
  v14 = 0LL;
LABEL_11:
  if ( (_DWORD)v13 )
  {
    if ( (_DWORD)v13 == 1 )
    {
      v15 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      v12 = *a1;
      v16 = *(_QWORD *)(v15 - 16);
    }
    else
    {
      if ( (unsigned int)(v13 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v16 = 0LL;
    }
  }
  else
  {
    v16 = 1LL;
  }
  v17 = v12 & 3;
  if ( (v12 & 3) == 0 )
    goto LABEL_52;
  if ( (v12 & 3) == 1 )
  {
    v18 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_17;
  }
  if ( (v12 & 3) != 2 )
  {
    if ( (v12 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_52:
    v18 = (unsigned __int64)a1;
    goto LABEL_17;
  }
  v18 = 0LL;
LABEL_17:
  v19 = a2;
  v20 = (__int64)(v14 + 8 * v16 - v18) >> 3;
  v21 = v20 - a2;
  if ( (v12 & 3) == 0 )
  {
LABEL_55:
    v22 = (unsigned __int64)a1;
    goto LABEL_20;
  }
  if ( (_DWORD)v17 == 1 )
  {
    v22 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_20;
  }
  if ( (_DWORD)v17 != 2 )
  {
    if ( (_DWORD)v17 != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_55;
  }
  v22 = 0LL;
LABEL_20:
  if ( (v12 & 3) != 0 )
  {
    if ( (_DWORD)v17 == 1 )
    {
      v23 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      v12 = *a1;
      v19 = a2;
      v24 = *(_QWORD *)(v23 - 16);
    }
    else
    {
      if ( (unsigned int)(v17 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v24 = 0LL;
    }
  }
  else
  {
    v24 = 1LL;
  }
  v25 = (_QWORD *)(v22 + 8 * v24);
  if ( (v12 & 3) == 0 )
  {
LABEL_60:
    v26 = (unsigned __int64)a1;
    goto LABEL_26;
  }
  if ( (v12 & 3) != 1 )
  {
    if ( (v12 & 3) == 2 )
    {
      v26 = 0LL;
      goto LABEL_26;
    }
    if ( (v12 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    goto LABEL_60;
  }
  v26 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_26:
  *((_QWORD *)&v40 + 1) = a3;
  *(_QWORD *)&v40 = v26 + 8 * v20;
  if ( a3 && (!(v26 + 8 * v20) || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_100:
    _o__invalid_parameter_noinfo_noreturn(v17);
    __debugbreak();
LABEL_101:
    v43 = v20;
    v40 = v42;
    v41 = v20;
    ((void (__fastcall *)(__int128 *, unsigned __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v42,
      v26 + 8 * v19,
      v26 + 8 * (v20 - a3),
      &v40);
    goto LABEL_33;
  }
  v41 = a3;
  v27 = v20 - a2;
  if ( a3 < v21 )
    v27 = a3;
  v42 = v40;
  v28 = 8 * v27;
  v29 = &v25[v28 / 0xFFFFFFFFFFFFFFF8uLL];
  v43 = a3;
  if ( v25 != &v25[v28 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v39 = v42;
    v17 = v43;
    do
    {
      --v25;
      if ( !v39 )
        goto LABEL_100;
      if ( !v17 )
        goto LABEL_100;
      if ( --v17 >= *((_QWORD *)&v42 + 1) )
        goto LABEL_100;
      *(_QWORD *)(v39 + 8 * v17) = *v25;
    }
    while ( v25 != v29 );
  }
  if ( v21 > a3 )
  {
    *(_QWORD *)&v42 = v26;
    *((_QWORD *)&v42 + 1) = v20;
    if ( !v20 || v26 && v20 >= 0 )
      goto LABEL_101;
    goto LABEL_100;
  }
LABEL_33:
  if ( a3 )
  {
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_103;
    if ( (*(_DWORD *)a1 & 3) == 1 )
    {
      v30 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1);
      *(_QWORD *)(v30 - 16) += a3;
      return v26 + 8 * a2;
    }
    if ( (*(_DWORD *)a1 & 3) != 2 )
    {
      if ( (*(_DWORD *)a1 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      if ( a3 != 1 )
LABEL_103:
        *a1 = 2LL;
    }
  }
  return v26 + 8 * a2;
}
