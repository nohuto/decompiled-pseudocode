/*
 * XREFs of ??$make_unique@VCVisualTreePath@@AEAPEBVCVisualTree@@$0A@@std@@YA?AV?$unique_ptr@VCVisualTreePath@@U?$default_delete@VCVisualTreePath@@@std@@@0@AEAPEBVCVisualTree@@@Z @ 0x180087C20
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 */

_QWORD *__fastcall std::make_unique<CVisualTreePath,CVisualTree const * &,0>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  char *v6; // rax
  _QWORD *result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h]

  v4 = operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    v6 = (char *)(v4 + 3);
    *(_QWORD *)&v8 = 0LL;
    *((_QWORD *)&v8 + 1) = *a2;
    *v5 = v6;
    v5[1] = v6;
    v5[2] = v5 + 7;
    *(_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 v5,
                 0LL,
                 1LL) = v8;
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *a1 = v5;
  return result;
}
