/*
 * XREFs of ??$move@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801901A8
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180059CEC (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18005C2C0 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180064698 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x18008B550 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E38A8 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18029C28C (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz_ea_18029C28C.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  __int64 v7; // r10
  bool v8; // cf
  void *v9; // rbx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v7 = (a3 - (__int64)a2) >> 4;
  if ( v7 >= 0 )
  {
    if ( v7 <= 0 )
      goto LABEL_7;
    v8 = a4[1] - a4[2] < (unsigned __int64)v7;
  }
  else
  {
    v8 = a4[2] < (unsigned __int64)-v7;
  }
  if ( v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v9 = (void *)(*a4 + 16LL * a4[2]);
  memmove_0(v9, a2, v5);
  result = a1;
  a4[2] = (__int64)((__int64)v9 + v5 - *a4) >> 4;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
