/*
 * XREFs of ?GetBounds@CRadialGradientEffect@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x1802ABDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall CRadialGradientEffect::GetBounds(__int64 a1, float *a2, int a3, float *a4)
{
  __int64 v5; // rdx
  __int64 v6; // r11

  *(_OWORD *)a4 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( a3 )
  {
    do
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a4, a2);
      a2 = (float *)(v5 + 16);
    }
    while ( v6 != 1 );
  }
  return 0LL;
}
