/*
 * XREFs of ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800C81A0
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EC7F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800ED520 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180053280 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 */

CSurfaceDrawListBrush *__fastcall std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(
        CSurfaceDrawListBrush **a1,
        __int64 a2,
        unsigned int a3)
{
  CSurfaceDrawListBrush *v3; // rcx
  CSurfaceDrawListBrush *result; // rax

  v3 = *a1;
  if ( v3 )
    return CSurfaceDrawListBrush::`vector deleting destructor'(v3, 1, a3);
  return result;
}
