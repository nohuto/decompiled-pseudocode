/*
 * XREFs of ??$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18009BBA4
 * Callers:
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009A590 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009B130 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009BC10 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ??$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180260228 (--$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180260278 (--$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsAffine<0>(__int64 a1, char a2)
{
  char v3; // dl
  char result; // al

  v3 = 1;
  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) == 1.0 )
  {
    *(_BYTE *)(a1 + 65) &= ~0x20u;
    result = 1;
    *(_BYTE *)(a1 + 65) |= 0x10u;
  }
  else
  {
    result = 0;
  }
  if ( !a2 )
  {
    if ( (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) != 0.0 )
      v3 = 0;
    return v3 & result;
  }
  return result;
}
