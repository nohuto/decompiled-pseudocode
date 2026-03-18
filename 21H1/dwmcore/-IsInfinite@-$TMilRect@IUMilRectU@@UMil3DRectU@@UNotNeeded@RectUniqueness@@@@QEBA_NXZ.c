/*
 * XREFs of ?IsInfinite@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180180CDC
 * Callers:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800C64A8 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(_DWORD *a1)
{
  return *a1 <= (unsigned int)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::sc_rcInfinite
      && a1[2] >= (unsigned int)dword_1803487B8
      || a1[1] <= (unsigned int)dword_1803487B4 && a1[3] >= (unsigned int)dword_1803487BC;
}
