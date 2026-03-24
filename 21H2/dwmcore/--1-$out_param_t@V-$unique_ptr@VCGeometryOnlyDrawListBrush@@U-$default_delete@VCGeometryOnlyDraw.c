/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180174770
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180053988 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180051950 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 */

CGeometryOnlyDrawListBrush *__fastcall wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>(
        __int64 a1)
{
  CGeometryOnlyDrawListBrush *result; // rax
  CGeometryOnlyDrawListBrush *v2; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(CGeometryOnlyDrawListBrush **)(a1 + 8);
    v2 = **(CGeometryOnlyDrawListBrush ***)a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return CGeometryOnlyDrawListBrush::`vector deleting destructor'(v2, 1, (unsigned int)v2);
  }
  return result;
}
