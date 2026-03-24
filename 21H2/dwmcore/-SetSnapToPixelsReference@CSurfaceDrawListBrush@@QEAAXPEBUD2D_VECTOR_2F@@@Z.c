/*
 * XREFs of ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801EEE20
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800F2D00 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800F3A10 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 * Callees:
 *     <none>
 */

void __fastcall CSurfaceDrawListBrush::SetSnapToPixelsReference(
        CSurfaceDrawListBrush *this,
        const struct D2D_VECTOR_2F *a2)
{
  *((_BYTE *)this + 170) = a2 != 0LL;
  if ( a2 )
    *((struct D2D_VECTOR_2F *)this + 20) = *a2;
}
