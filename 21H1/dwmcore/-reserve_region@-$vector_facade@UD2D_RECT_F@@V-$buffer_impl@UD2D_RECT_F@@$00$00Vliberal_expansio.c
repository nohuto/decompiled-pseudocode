/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180010AEC
 * Callers:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180010A84 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x180010BE4 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800ACBE8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x1801A059C (--$uninitialized_copy@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_R.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801A07BC (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  char *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // r13
  char *v12; // rcx
  bool v13; // sf
  __int64 v14; // rax
  __int64 v15; // r15
  char *result; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  void *v20; // rax
  __int64 v21; // r8
  char *v22; // rdx
  void *v23; // rbx
  char *v24; // rcx
  bool v25; // zf
  bool v26; // sf
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 4 < (unsigned __int64)a3 )
  {
    v17 = (v3 - *(_QWORD *)a1) >> 4;
    v18 = v17 + a3;
    if ( v17 + a3 < v17 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v19 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 4, v18);
    v20 = operator new(saturated_mul(v19, 0x10uLL));
    v21 = *((_QWORD *)a1 + 1);
    v22 = *(char **)a1;
    *(_QWORD *)&v27 = v20;
    *((_QWORD *)&v27 + 1) = v17;
    v23 = v20;
    v28 = 0LL;
    v29 = v27;
    v30 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>)(
      &v27,
      v22,
      v21,
      &v29);
    v24 = *(char **)a1;
    v25 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v23;
    if ( v25 )
      v24 = 0LL;
    operator delete(v24);
    v3 = *(_QWORD *)a1 + 16 * v17;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v19;
    *((_QWORD *)a1 + 1) = v3;
  }
  v8 = *(char **)a1;
  v9 = v3 - *(_QWORD *)a1;
  *((_QWORD *)&v27 + 1) = a3;
  v10 = v9 >> 4;
  v11 = v10 - a2;
  v12 = &v8[16 * v10];
  *(_QWORD *)&v27 = v12;
  v13 = a3 < 0;
  if ( a3 )
  {
    if ( !v12 )
      goto LABEL_23;
    v13 = a3 < 0;
  }
  if ( v13 && a3 )
    goto LABEL_23;
  v31 = v3;
  v28 = a3;
  v14 = a3;
  v29 = v27;
  if ( a3 >= v11 )
    v14 = v10 - a2;
  v30 = a3;
  v32 = v3 - 16 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v32,
    &v31,
    &v29);
  if ( v11 > a3 )
  {
    *(_QWORD *)&v27 = v8;
    *((_QWORD *)&v27 + 1) = v10;
    v26 = v10 < 0;
    if ( !v10 )
    {
LABEL_21:
      if ( !v26 || !v10 )
        goto LABEL_24;
      goto LABEL_23;
    }
    if ( v8 )
    {
      v26 = v10 < 0;
      goto LABEL_21;
    }
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v12, v5);
    __debugbreak();
LABEL_24:
    v28 = v10;
    v15 = 16 * a2;
    v29 = v27;
    v30 = v10;
    std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
      &v27,
      &v8[v15],
      &v8[16 * (v10 - a3)],
      &v29);
    goto LABEL_8;
  }
  v15 = 16 * a2;
LABEL_8:
  result = &v8[v15];
  *((_QWORD *)a1 + 1) += 16 * a3;
  return result;
}
