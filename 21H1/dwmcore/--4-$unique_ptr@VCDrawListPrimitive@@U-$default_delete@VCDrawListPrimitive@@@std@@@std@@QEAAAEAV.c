/*
 * XREFs of ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18006FBF0
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180010030 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18006F82C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180074A08 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180075530 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CDrawListPrimitive>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<CShape>::operator()((__int64)a1, v4);
  }
  return a1;
}
