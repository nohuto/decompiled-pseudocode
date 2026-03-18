/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180059CEC
 * Callers:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180059C84 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x180059DE0 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801901A8 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180190250 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  char *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // r13
  char *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  char *result; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  __int64 v20; // r8
  char *v21; // rdx
  LPVOID v22; // rbx
  char *v23; // rcx
  bool v24; // zf
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( (v5 - v3) >> 4 < a3 )
  {
    v16 = (v3 - *(_QWORD *)a1) >> 4;
    v17 = v16 + a3;
    if ( v16 + a3 < v16 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v18 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 4, v17);
    v19 = operator new(saturated_mul(v18, 0x10uLL));
    v20 = *((_QWORD *)a1 + 1);
    v21 = *(char **)a1;
    *(_QWORD *)&v25 = v19;
    *((_QWORD *)&v25 + 1) = v16;
    v22 = v19;
    v26 = 0LL;
    v27 = v25;
    v28 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
      &v25,
      v21,
      v20,
      &v27);
    v23 = *(char **)a1;
    v24 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v22;
    if ( v24 )
      v23 = 0LL;
    DefaultHeap::Free(v23);
    v3 = *(_QWORD *)a1 + 16 * v16;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v18;
    *((_QWORD *)a1 + 1) = v3;
  }
  v8 = *(char **)a1;
  v9 = v3 - *(_QWORD *)a1;
  *((_QWORD *)&v25 + 1) = a3;
  v10 = v9 >> 4;
  v11 = v10 - a2;
  v12 = &v8[16 * v10];
  *(_QWORD *)&v25 = v12;
  if ( a3 && (!v12 || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v12);
    __debugbreak();
LABEL_20:
    v26 = v10;
    v14 = 16 * a2;
    v27 = v25;
    v28 = v10;
    std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
      &v25,
      &v8[v14],
      &v8[16 * (v10 - a3)],
      &v27);
    goto LABEL_9;
  }
  v29 = v3;
  v26 = a3;
  v13 = a3;
  v27 = v25;
  if ( a3 >= v11 )
    v13 = v10 - a2;
  v28 = a3;
  v30 = v3 - 16 * v13;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v30,
    &v29,
    &v27);
  if ( v11 > a3 )
  {
    *(_QWORD *)&v25 = v8;
    *((_QWORD *)&v25 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v14 = 16 * a2;
LABEL_9:
  result = &v8[v14];
  *((_QWORD *)a1 + 1) += 16 * a3;
  return result;
}
