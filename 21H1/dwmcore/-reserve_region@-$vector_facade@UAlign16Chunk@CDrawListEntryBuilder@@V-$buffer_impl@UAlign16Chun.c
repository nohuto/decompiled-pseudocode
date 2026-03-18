/*
 * XREFs of ?reserve_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUAlign16Chunk@CDrawListEntryBuilder@@_K0@Z @ 0x1801A1844
 * Callers:
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x1801A16AC (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801A07BC (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801A1594 (-ensure_extra_capacity@-$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expan.c)
 */

char *__fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2,
        signed __int64 a3)
{
  char *v6; // rcx
  _BYTE *v7; // rsi
  char *v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  char *v11; // r9
  bool v12; // sf
  signed __int64 v13; // rcx
  char *v14; // rax
  unsigned __int64 v15; // r9
  bool v16; // sf
  __int64 v17; // rdi
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  signed __int64 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v22; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (const void **)a1,
    a3);
  v7 = *(_BYTE **)a1;
  v8 = *(char **)(a1 + 8);
  *((_QWORD *)&v19 + 1) = a3;
  v9 = (v8 - v7) >> 4;
  v10 = v9 - a2;
  v11 = &v7[16 * v9];
  *(_QWORD *)&v19 = v11;
  v12 = a3 < 0;
  if ( a3 )
  {
    if ( !v11 )
      goto LABEL_20;
    v12 = a3 < 0;
  }
  if ( !v12 || !a3 )
  {
    v20 = a3;
    v13 = a3;
    if ( a3 >= v10 )
      v13 = v9 - a2;
    v21 = v19;
    v6 = (char *)(16 * v13);
    v14 = (char *)(v8 - v6);
    v22 = a3;
    if ( v8 != (char *)(v8 - v6) )
    {
      v6 = &v11[16 * a3];
      v15 = v22;
      do
      {
        v8 -= 16;
        if ( !(_QWORD)v21 )
          goto LABEL_20;
        if ( !v15 )
          goto LABEL_20;
        --v15;
        v6 -= 16;
        if ( v15 >= *((_QWORD *)&v21 + 1) )
          goto LABEL_20;
        *(_OWORD *)v6 = *(_OWORD *)v8;
      }
      while ( v8 != v14 );
    }
    if ( v10 <= a3 )
    {
      v17 = 16 * a2;
      goto LABEL_23;
    }
    *(_QWORD *)&v21 = v7;
    *((_QWORD *)&v21 + 1) = v9;
    v16 = v9 < 0;
    if ( !v9 )
    {
LABEL_18:
      if ( !v16 || !v9 )
        goto LABEL_21;
      goto LABEL_20;
    }
    if ( v7 )
    {
      v16 = v9 < 0;
      goto LABEL_18;
    }
  }
LABEL_20:
  _o__invalid_parameter_noinfo_noreturn(v6, v8);
  __debugbreak();
LABEL_21:
  v22 = v9;
  v17 = 16 * a2;
  v19 = v21;
  v20 = v9;
  std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
    (__int64)&v21,
    &v7[v17],
    (__int64)&v7[16 * (v9 - a3)],
    &v19);
LABEL_23:
  *(_QWORD *)(a1 + 8) += 16 * a3;
  return &v7[v17];
}
