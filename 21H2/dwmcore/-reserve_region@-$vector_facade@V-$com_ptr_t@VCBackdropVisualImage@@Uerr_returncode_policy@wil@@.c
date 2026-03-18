/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800DB7E4
 * Callers:
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1800DB714 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800DB8D8 (--$destruct_range@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801B4808 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801B4998 (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_po.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  LPVOID v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  LPVOID v23; // rbx
  void *v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rax
  __int128 v30; // [rsp+20h] [rbp-40h] BYREF
  __int64 v31; // [rsp+30h] [rbp-30h]
  __int128 v32; // [rsp+40h] [rbp-20h] BYREF
  __int64 v33; // [rsp+50h] [rbp-10h]

  v2 = (__int64 *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - (__int64)v2) >> 3) )
  {
    v17 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
    v18 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 3, v18);
    v20 = operator new(saturated_mul(v19, 8uLL));
    v21 = *((_QWORD *)a1 + 1);
    v22 = *(_QWORD *)a1;
    *(_QWORD *)&v30 = v20;
    v23 = v20;
    *((_QWORD *)&v30 + 1) = v17;
    v31 = 0LL;
    v32 = v30;
    v33 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>>)(
      &v30,
      v22,
      v21,
      &v32);
    detail::destruct_range<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>>(
      *(_QWORD *)a1,
      *((_QWORD *)a1 + 1));
    v24 = *(void **)a1;
    v25 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v23;
    if ( v25 )
      v24 = 0LL;
    DefaultHeap::Free(v24);
    v2 = (__int64 *)(*(_QWORD *)a1 + 8 * v17);
    v26 = *(_QWORD *)a1 + 8 * v19;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v26;
  }
  v6 = *(_QWORD *)a1;
  v7 = (__int64)v2 - *(_QWORD *)a1;
  *((_QWORD *)&v30 + 1) = 1LL;
  v8 = v7 >> 3;
  v9 = v8 - a2;
  v10 = v6 + 8 * v8;
  *(_QWORD *)&v30 = v10;
  if ( !v10 )
    goto LABEL_25;
  v31 = 1LL;
  v11 = v8 - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v32 = v30;
  v12 = 8 * v11;
  v13 = &v2[v12 / 0xFFFFFFFFFFFFFFF8uLL];
  v33 = 1LL;
  if ( v2 != &v2[v12 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v27 = v32;
    v28 = v33;
    do
    {
      --v2;
      if ( !v27 )
        goto LABEL_25;
      if ( !v28 )
        goto LABEL_25;
      if ( (unsigned __int64)--v28 >= *((_QWORD *)&v32 + 1) )
        goto LABEL_25;
      v29 = *v2;
      *v2 = 0LL;
      *(_QWORD *)(v27 + 8 * v28) = v29;
    }
    while ( v2 != v13 );
  }
  if ( v9 <= 1 )
    goto LABEL_7;
  *(_QWORD *)&v32 = v6;
  *((_QWORD *)&v32 + 1) = v8;
  if ( v8 && (!v6 || v8 < 0) )
  {
LABEL_25:
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x18016DD42LL);
  }
  v33 = v8;
  v30 = v32;
  v31 = v8;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>>)(
    &v32,
    v6 + 8 * a2,
    v6 + 8 * (v8 - 1),
    &v30);
LABEL_7:
  v14 = v6 + 8 * (a2 + 1);
  v15 = v6 + 8 * a2;
  if ( v10 < v14 )
    v14 = v10;
  detail::destruct_range<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>>(v15, v14);
  *((_QWORD *)a1 + 1) += 8LL;
  return v15;
}
