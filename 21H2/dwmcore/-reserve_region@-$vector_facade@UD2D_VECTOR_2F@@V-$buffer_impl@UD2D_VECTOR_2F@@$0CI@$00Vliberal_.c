/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_VECTOR_2F@@_K0@Z @ 0x1800D2114
 * Callers:
 *     ?insert@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_VECTOR_2F@@@2@V?$basic_iterator@$$CBUD2D_VECTOR_2F@@@2@_KAEBUD2D_VECTOR_2F@@@Z @ 0x1800D2098 (-insert@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$0CI@$00Vliberal_expansio.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_VECTOR_2F@@@detail@@V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_VECTOR_2F@@@0@0V?$checked_array_iterator@PEAUD2D_VECTOR_2F@@@stdext@@@Z @ 0x1800D2200 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_VECTOR_2F@@@detail@@V-$checked_array_itera.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

char *__fastcall detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,40,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdx
  char *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  LPVOID v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  LPVOID v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-10h]
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 3 < a3 )
  {
    v14 = (v3 - *(_QWORD *)a1) >> 3;
    v15 = v14 + a3;
    if ( v15 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 3, v15);
    v17 = operator new(saturated_mul(v16, 8uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    *(_QWORD *)&v24 = v17;
    *((_QWORD *)&v24 + 1) = v14;
    v20 = v17;
    v25 = 0LL;
    v26 = v24;
    v27 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      &v24,
      v19,
      v18,
      &v26);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    DefaultHeap::Free(v21);
    v3 = *(_QWORD *)a1 + 8 * v14;
    v23 = *(_QWORD *)a1 + 8 * v16;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v23;
  }
  v8 = *(char **)a1;
  v9 = v3 - *(_QWORD *)a1;
  *((_QWORD *)&v24 + 1) = a3;
  v10 = v9 >> 3;
  v11 = v10 - a2;
  *(_QWORD *)&v24 = &v8[8 * v10];
  if ( a3 && (!&v8[8 * v10] || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_18:
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
LABEL_19:
    v25 = v10;
    v26 = v24;
    v27 = v10;
    ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v24,
      &v8[8 * a2],
      &v8[8 * (v10 - a3)],
      &v26);
    goto LABEL_8;
  }
  v28 = v3;
  v25 = a3;
  v12 = a3;
  v26 = v24;
  if ( a3 >= v11 )
    v12 = v10 - a2;
  v27 = a3;
  v29 = v3 - 8 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_VECTOR_2F>,stdext::checked_array_iterator<D2D_VECTOR_2F *>>(
    &v29,
    &v28,
    &v26);
  if ( v11 > a3 )
  {
    *(_QWORD *)&v24 = v8;
    *((_QWORD *)&v24 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
LABEL_8:
  *((_QWORD *)a1 + 1) += 8 * a3;
  return &v8[8 * a2];
}
