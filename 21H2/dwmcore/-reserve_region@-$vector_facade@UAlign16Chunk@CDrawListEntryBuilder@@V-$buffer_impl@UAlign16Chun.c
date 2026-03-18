/*
 * XREFs of ?reserve_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUAlign16Chunk@CDrawListEntryBuilder@@_K0@Z @ 0x1801E3F6C
 * Callers:
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x1801E3D14 (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180190250 (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801E3A60 (-ensure_extra_capacity@-$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expan.c)
 */

char *__fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v6; // rcx
  _BYTE *v7; // rsi
  char *v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  char *v11; // r9
  unsigned __int64 v12; // rcx
  char *v13; // rax
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // rdi
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-30h]
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    (const void **)a1,
    a3);
  v7 = *(_BYTE **)a1;
  v8 = *(char **)(a1 + 8);
  *((_QWORD *)&v18 + 1) = a3;
  v9 = (v8 - v7) >> 4;
  v10 = v9 - a2;
  v11 = &v7[16 * v9];
  *(_QWORD *)&v18 = v11;
  if ( a3 && (!v11 || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_16:
    _o__invalid_parameter_noinfo_noreturn(v6);
    __debugbreak();
    goto LABEL_17;
  }
  v19 = a3;
  v12 = a3;
  if ( a3 >= v10 )
    v12 = v9 - a2;
  v20 = v18;
  v6 = (char *)(16 * v12);
  v13 = (char *)(v8 - v6);
  v21 = a3;
  if ( v8 != (char *)(v8 - v6) )
  {
    v14 = v21;
    v6 = &v11[16 * a3];
    v15 = a3;
    do
    {
      v8 -= 16;
      if ( !(_QWORD)v20 )
        goto LABEL_16;
      if ( !v15 )
        goto LABEL_16;
      v15 = v14 - 1;
      v6 -= 16;
      v14 = v15;
      if ( v15 >= *((_QWORD *)&v20 + 1) )
        goto LABEL_16;
      *(_OWORD *)v6 = *(_OWORD *)v8;
    }
    while ( v8 != v13 );
  }
  if ( v10 <= a3 )
  {
    v16 = 16 * a2;
    goto LABEL_19;
  }
  *(_QWORD *)&v20 = v7;
  *((_QWORD *)&v20 + 1) = v9;
  if ( v9 && (!v7 || v9 < 0) )
    goto LABEL_16;
LABEL_17:
  v21 = v9;
  v16 = 16 * a2;
  v18 = v20;
  v19 = v9;
  std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
    (__int64)&v20,
    &v7[v16],
    (__int64)&v7[16 * (v9 - a3)],
    &v18);
LABEL_19:
  *(_QWORD *)(a1 + 8) += 16 * a3;
  return &v7[v16];
}
