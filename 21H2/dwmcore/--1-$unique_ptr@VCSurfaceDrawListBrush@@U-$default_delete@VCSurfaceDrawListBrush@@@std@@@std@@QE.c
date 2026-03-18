/*
 * XREFs of ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B0AC4
 * Callers:
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBVMILMatrix3x2@@@Z @ 0x1800B05F8 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUMil.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(CSurfaceDrawListBrush **a1)
{
  CSurfaceDrawListBrush *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return CSurfaceDrawListBrush::`vector deleting destructor'(v1, 1u);
  return result;
}
