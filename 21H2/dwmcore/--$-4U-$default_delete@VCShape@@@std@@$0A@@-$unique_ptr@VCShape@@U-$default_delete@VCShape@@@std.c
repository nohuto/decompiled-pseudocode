/*
 * XREFs of ??$?4U?$default_delete@VCShape@@@std@@$0A@@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062834
 * Callers:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000EBAC (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801E5378 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CShape>::operator=<std::default_delete<CShape>,0>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<CShape>::operator()();
  }
  return a1;
}
