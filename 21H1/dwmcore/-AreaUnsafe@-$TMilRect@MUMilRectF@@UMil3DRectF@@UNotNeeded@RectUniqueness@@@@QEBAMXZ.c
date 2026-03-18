/*
 * XREFs of ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180075148
 * Callers:
 *     ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800680D0 (-Add@CMergedDirtyRect@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180074A08 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0E70 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     <none>
 */

double __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(__int64 a1)
{
  float v1; // xmm1_4
  double result; // xmm0_8

  v1 = *(float *)(a1 + 8);
  if ( v1 <= *(float *)a1 )
    return 0.0;
  *(_QWORD *)&result = *(unsigned int *)(a1 + 12);
  if ( *(float *)&result <= *(float *)(a1 + 4) )
    return 0.0;
  *(float *)&result = (float)(*(float *)&result - *(float *)(a1 + 4)) * (float)(v1 - *(float *)a1);
  return result;
}
