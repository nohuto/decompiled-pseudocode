/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180042F24
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800F3F84 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x180007B04 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180061594 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x18019C7AC (--$uninitialized_copy@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_R.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18019C9CC (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  void *v18; // rax
  void *v19; // r8
  void *v20; // rdx
  void *v21; // rbx
  void *v22; // rcx
  bool v23; // zf
  bool v24; // sf
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+50h] BYREF

  v30 = a3;
  v3 = (__int64)a1[1];
  v6 = a1[2];
  v7 = 1LL;
  if ( !((__int64)&v6[-v3] >> 4) )
  {
    v15 = (v3 - (__int64)*a1) >> 4;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v7,
            (v6 - (_BYTE *)*a1) >> 4,
            v16);
    v18 = operator new(saturated_mul(v17, 0x10uLL));
    v19 = a1[1];
    v20 = *a1;
    *(_QWORD *)&v25 = v18;
    v21 = v18;
    *((_QWORD *)&v25 + 1) = v15;
    v26 = 0LL;
    v27 = v25;
    v28 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_copy<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>)(
      &v25,
      v20,
      v19,
      &v27);
    v22 = *a1;
    v23 = *a1 == a1 + 3;
    *a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v7 = 1LL;
    v3 = (__int64)*a1 + 16 * v15;
    a1[2] = (char *)*a1 + 16 * v17;
    a1[1] = (void *)v3;
  }
  v8 = (char *)*a1;
  v9 = v3 - (_QWORD)*a1;
  *((_QWORD *)&v25 + 1) = 1LL;
  v10 = v9 >> 4;
  v11 = v10 - a2;
  *(_QWORD *)&v25 = &v8[16 * v10];
  if ( !(_QWORD)v25 )
    goto LABEL_19;
  v26 = 1LL;
  v30 = v3;
  v12 = v10 - a2;
  v27 = v25;
  if ( v11 > 1 )
    v12 = 1LL;
  v28 = 1LL;
  v29 = v3 - 16 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v29,
    &v30,
    (__int64 *)&v27);
  if ( v11 > 1 )
  {
    *(_QWORD *)&v25 = v8;
    *((_QWORD *)&v25 + 1) = v10;
    v24 = v10 < 0;
    if ( v10 )
    {
      if ( !v8 )
        goto LABEL_19;
      v24 = v10 < 0;
    }
    if ( !v24 || !v10 )
    {
      v13 = 16 * a2;
      v26 = v10;
      v27 = v25;
      v28 = v10;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
        &v25,
        &v8[v13],
        &v8[16 * v10 - 16],
        &v27);
      goto LABEL_7;
    }
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v7, v6);
    __debugbreak();
    JUMPOUT(0x18010EDE2LL);
  }
  v13 = 16 * a2;
LABEL_7:
  a1[1] = (char *)a1[1] + 16;
  return &v8[v13];
}
