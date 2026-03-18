/*
 * XREFs of ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C4C10
 * Callers:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000F390 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014C90 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001AB00 (-ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x18004F084 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 *     ?TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z @ 0x180054DCC (-TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800643E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007F1B0 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800C0E40 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801A3A20 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C5880 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETINTERPOLATIONMODE@@@Z @ 0x1801EFE24 (-ProcessSetInterpolationMode@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DInterpolationModeFromMilInterpolationMode(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 1 )
    return 1LL;
  if ( a1 > 1 )
  {
    if ( a1 <= 3 )
    {
      return 2LL;
    }
    else if ( a1 == 6 || a1 == 4 )
    {
      return 3LL;
    }
    else if ( a1 == 5 )
    {
      return 4LL;
    }
  }
  return result;
}
