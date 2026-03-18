/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18003E2AC
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x18003FC68 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18003E3A0 (--$destruct_range@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV-$c.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801B4998 (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_po.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18023A63C (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

char *__fastcall detail::vector_facade<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r9
  char *v13; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  void *v18; // rax
  __int64 v19; // r8
  void *v20; // rdx
  void *v21; // rbx
  void *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  v2 = (__int64 *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - (__int64)v2) >> 3) )
  {
    v15 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 3, v16);
    v18 = operator new(saturated_mul(v17, 8uLL));
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(void **)a1;
    *(_QWORD *)&v28 = v18;
    v21 = v18;
    *((_QWORD *)&v28 + 1) = v15;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>>)(
      &v28,
      v20,
      v19,
      &v30);
    detail::destruct_range<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>(*(void **)a1);
    v22 = *(void **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v21;
    if ( v23 )
      v22 = 0LL;
    DefaultHeap::Free(v22);
    v2 = (__int64 *)(*(_QWORD *)a1 + 8 * v15);
    v24 = *(_QWORD *)a1 + 8 * v17;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v24;
  }
  v6 = *(char **)a1;
  v7 = (__int64)v2 - *(_QWORD *)a1;
  *((_QWORD *)&v28 + 1) = 1LL;
  v8 = v7 >> 3;
  v9 = v8 - a2;
  *(_QWORD *)&v28 = &v6[8 * v8];
  if ( !(_QWORD)v28 )
    goto LABEL_23;
  v29 = 1LL;
  v10 = v8 - a2;
  if ( v9 > 1 )
    v10 = 1LL;
  v30 = v28;
  v11 = 8 * v10;
  v12 = &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL];
  v31 = 1LL;
  if ( v2 != &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v25 = v30;
    v26 = v31;
    do
    {
      --v2;
      if ( !v25 )
        goto LABEL_23;
      if ( !v26 )
        goto LABEL_23;
      if ( (unsigned __int64)--v26 >= *((_QWORD *)&v30 + 1) )
        goto LABEL_23;
      v27 = *v2;
      *v2 = 0LL;
      *(_QWORD *)(v25 + 8 * v26) = v27;
    }
    while ( v2 != v12 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v30 = v6;
    *((_QWORD *)&v30 + 1) = v8;
    if ( !v8 || v6 && v8 >= 0 )
    {
      v31 = v8;
      v28 = v30;
      v29 = v8;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>)(
        &v30,
        &v6[8 * a2],
        &v6[8 * v8 - 8],
        &v28);
      goto LABEL_7;
    }
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x18012E500LL);
  }
LABEL_7:
  v13 = &v6[8 * a2];
  detail::destruct_range<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>(v13);
  *((_QWORD *)a1 + 1) += 8LL;
  return v13;
}
