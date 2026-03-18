/*
 * XREFs of ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x1800E418C
 * Callers:
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@Z @ 0x1800E4068 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@-$vector_f.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800E412C (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@-$vector_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z @ 0x1800E428C (--$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x180202D1C (--$move_backward@V-$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V-$checked_array_iterator@.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x180202E08 (--$uninitialized_move@V-$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V-$checked_array_iter.c)
 */

char *__fastcall detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // r10
  char *v13; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  LPVOID v18; // rax
  __int64 v19; // r8
  void *v20; // rdx
  LPVOID v21; // rbx
  void *v22; // rcx
  bool v23; // zf
  unsigned __int64 v24; // r8
  char *v25; // r9
  __int64 v26; // rax
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]

  v2 = (__int64 *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - (__int64)v2) >> 4) )
  {
    v15 = ((__int64)v2 - *(_QWORD *)a1) >> 4;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 4, v16);
    v18 = operator new(saturated_mul(v17, 0x10uLL));
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(void **)a1;
    *(_QWORD *)&v27 = v18;
    v21 = v18;
    *((_QWORD *)&v27 + 1) = v15;
    v28 = 0LL;
    v29 = v27;
    v30 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>)(
      &v27,
      v20,
      v19,
      &v29);
    detail::destruct_range<CVisualSurface::SourceCVI>(*(void **)a1);
    v22 = *(void **)a1;
    v23 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v21;
    if ( v23 )
      v22 = 0LL;
    DefaultHeap::Free(v22);
    v2 = (__int64 *)(*(_QWORD *)a1 + 16 * v15);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v17;
    *((_QWORD *)a1 + 1) = v2;
  }
  v6 = *(char **)a1;
  v7 = (__int64)v2 - *(_QWORD *)a1;
  *((_QWORD *)&v27 + 1) = 1LL;
  v8 = v7 >> 4;
  v9 = v8 - a2;
  *(_QWORD *)&v27 = &v6[16 * v8];
  if ( !(_QWORD)v27 )
    goto LABEL_23;
  v28 = 1LL;
  v10 = v8 - a2;
  if ( v9 > 1 )
    v10 = 1LL;
  v29 = v27;
  v11 = 16 * v10;
  v12 = &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL];
  v30 = 1LL;
  if ( v2 != &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v24 = v30;
    v25 = &v6[16 * v8 + 16];
    do
    {
      v2 -= 2;
      if ( !(_QWORD)v29 )
        goto LABEL_23;
      if ( !v24 )
        goto LABEL_23;
      --v24;
      v25 -= 16;
      if ( v24 >= *((_QWORD *)&v29 + 1) )
        goto LABEL_23;
      v26 = *v2;
      *v2 = 0LL;
      *(_QWORD *)v25 = v26;
      *((_QWORD *)v25 + 1) = v2[1];
    }
    while ( v2 != v12 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v29 = v6;
    *((_QWORD *)&v29 + 1) = v8;
    if ( !v8 || v6 && v8 >= 0 )
    {
      v30 = v8;
      v27 = v29;
      v28 = v8;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>)(
        &v29,
        &v6[16 * a2],
        &v6[16 * v8 - 16],
        &v27);
      goto LABEL_7;
    }
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x180170401LL);
  }
LABEL_7:
  v13 = &v6[16 * a2];
  detail::destruct_range<CVisualSurface::SourceCVI>(v13);
  *((_QWORD *)a1 + 1) += 16LL;
  return v13;
}
