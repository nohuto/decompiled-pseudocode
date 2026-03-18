/*
 * XREFs of ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x18029C450
 * Callers:
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x18029B1A4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180190250 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@detail@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@detail@@YAXV?$basic_iterator@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@Z @ 0x1801902E0 (--$move_backward_uninitialized@V-$basic_iterator@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18029C338 (-ensure_extra_capacity@-$buffer_impl@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF

  v18 = a3;
  detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v6 = *a1;
  v7 = a1[1];
  *((_QWORD *)&v13 + 1) = 1LL;
  v8 = (v7 - v6) >> 4;
  v9 = v8 - a2;
  *(_QWORD *)&v13 = v6 + 16 * v8;
  if ( !(_QWORD)v13 )
    goto LABEL_11;
  v18 = v7;
  v14 = 1LL;
  v10 = v8 - a2;
  v15 = v13;
  if ( v9 > 1 )
    v10 = 1LL;
  v16 = 1LL;
  v17 = v7 - 16 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
    &v17,
    &v18,
    (__int64 *)&v15);
  if ( v9 <= 1 )
  {
    v11 = 16 * a2;
    goto LABEL_10;
  }
  *(_QWORD *)&v13 = v6;
  *((_QWORD *)&v13 + 1) = v8;
  if ( v8 )
  {
    if ( !v6 || v8 < 0 )
    {
LABEL_11:
      _o__invalid_parameter_noinfo_noreturn(v5);
      __debugbreak();
      JUMPOUT(0x18029C577LL);
    }
  }
  v11 = 16 * a2;
  v14 = v8;
  v15 = v13;
  v16 = v8;
  std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
    (__int64)&v13,
    (const void *)(v11 + v6),
    v6 + 16 * v8 - 16,
    &v15);
LABEL_10:
  a1[1] += 16LL;
  return v11 + v6;
}
