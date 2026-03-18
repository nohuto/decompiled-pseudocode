/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18005C2C0
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x180059E48 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x180059DE0 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801901A8 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180190250 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
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
  LPVOID v18; // rax
  void *v19; // r8
  void *v20; // rdx
  LPVOID v21; // rbx
  void *v22; // rcx
  bool v23; // zf
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+50h] BYREF

  v29 = a3;
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
    *(_QWORD *)&v24 = v18;
    v21 = v18;
    *((_QWORD *)&v24 + 1) = v15;
    v25 = 0LL;
    v26 = v24;
    v27 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>)(
      &v24,
      v20,
      v19,
      &v26);
    v22 = *a1;
    v23 = *a1 == a1 + 3;
    *a1 = v21;
    if ( v23 )
      v22 = 0LL;
    DefaultHeap::Free(v22);
    v7 = 1LL;
    v3 = (__int64)*a1 + 16 * v15;
    a1[2] = (char *)*a1 + 16 * v17;
    a1[1] = (void *)v3;
  }
  v8 = (char *)*a1;
  v9 = v3 - (_QWORD)*a1;
  *((_QWORD *)&v24 + 1) = 1LL;
  v10 = v9 >> 4;
  v11 = v10 - a2;
  *(_QWORD *)&v24 = &v8[16 * v10];
  if ( !(_QWORD)v24 )
    goto LABEL_17;
  v25 = 1LL;
  v29 = v3;
  v12 = v10 - a2;
  v26 = v24;
  if ( v11 > 1 )
    v12 = 1LL;
  v27 = 1LL;
  v28 = v3 - 16 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v28,
    &v29,
    (__int64 *)&v26);
  if ( v11 > 1 )
  {
    *(_QWORD *)&v24 = v8;
    *((_QWORD *)&v24 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
    {
      v13 = 16 * a2;
      v25 = v10;
      v26 = v24;
      v27 = v10;
      std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
        &v24,
        &v8[v13],
        &v8[16 * v10 - 16],
        &v26);
      goto LABEL_7;
    }
LABEL_17:
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x180137DCELL);
  }
  v13 = 16 * a2;
LABEL_7:
  a1[1] = (char *)a1[1] + 16;
  return &v8[v13];
}
