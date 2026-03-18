/*
 * XREFs of ?GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ @ 0x180262050
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802623C8 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18002FAF8 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B8CBC (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

const struct CMILMatrix *__fastcall CShapeDrawingContext::GetShapeToWorldTransform(CShapeDrawingContext *this)
{
  struct CMILMatrix *v1; // rdi
  const struct CMILMatrix *v3; // rax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (CShapeDrawingContext *)((char *)this + 428);
  if ( *((_BYTE *)this + 529) )
  {
    v3 = CMILMatrix::CMILMatrix((CMILMatrix *)v5, (const struct D2D_MATRIX_3X2_F *)(*((_QWORD *)this + 9) - 24LL));
    CMILMatrix::Multiply(v3, (CShapeDrawingContext *)((char *)this + 360), v1);
    *((_BYTE *)this + 529) = 0;
  }
  return v1;
}
