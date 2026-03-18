/*
 * XREFs of ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1801742B8
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x180060688 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18005E650 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 */

CGeometryOnlyDrawListBrush *__fastcall std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(
        CGeometryOnlyDrawListBrush **a1,
        __int64 a2,
        unsigned int a3)
{
  CGeometryOnlyDrawListBrush *v3; // rcx
  CGeometryOnlyDrawListBrush *result; // rax

  v3 = *a1;
  if ( v3 )
    return CGeometryOnlyDrawListBrush::`vector deleting destructor'(v3, 1, a3);
  return result;
}
