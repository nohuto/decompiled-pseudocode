/*
 * XREFs of ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800B34A0
 * Callers:
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085350 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180085884 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18008B19C (-ShouldRealizeCpuClipOnGpu@CDrawingContext@@AEBA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800B34D8 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

double __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(__int64 a1)
{
  __int64 v1; // rcx
  double result; // xmm0_8

  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a1) )
    return 0.0;
  *(_QWORD *)&result = *(unsigned int *)(v1 + 12);
  *(float *)&result = (float)(*(float *)&result - *(float *)(v1 + 4)) * (float)(*(float *)(v1 + 8) - *(float *)v1);
  return result;
}
