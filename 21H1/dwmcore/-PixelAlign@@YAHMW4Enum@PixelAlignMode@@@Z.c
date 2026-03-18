/*
 * XREFs of ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x18004ED44
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180033C94 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPointAndSizeL@@@Z @ 0x180213E24 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PixelAlign(float a1, int a2)
{
  __int64 result; // rax
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // rt1
  __m128 v8; // xmm0
  float v9; // [rsp+8h] [rbp+8h]

  if ( (LODWORD(a1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6 = 0LL;
    v6.m128_f32[0] = (float)(int)a1 - a1;
    v7.m128_f32[0] = FLOAT_N0_5;
    result = (int)a1 - _mm_cmple_ss(v6, v7).m128_u32[0];
  }
  else
  {
    v9 = a1 + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v9) << 10) >> 11);
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - (float)(int)result) & _xmm) > 0.00390625 )
  {
    v4 = 0LL;
    v4.m128_f32[0] = a1;
    if ( a2 )
    {
      v8 = 0LL;
      v8.m128_f32[0] = (float)(int)a1;
      return (int)a1 - _mm_cmplt_ss(v8, v4).m128_u32[0];
    }
    else
    {
      v5.m128_f32[0] = (float)(int)a1;
      return (int)a1 + _mm_cmplt_ss(v4, v5).m128_u32[0];
    }
  }
  return result;
}
