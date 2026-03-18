/*
 * XREFs of ?GetWorldTransform4x4@CDrawingContext@@UEBAXPEAUD2D_MATRIX_4X4_F@@@Z @ 0x18017BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800DB84C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 */

void __fastcall CDrawingContext::GetWorldTransform4x4(CDrawingContext *this, struct D2D_MATRIX_4X4_F *a2)
{
  struct _D3DMATRIX *TopByReference; // rax
  struct _D3DMATRIX *D3DMatrix; // rax
  struct _D3DMATRIX *v4; // r8
  struct _D3DMATRIX v5; // [rsp+20h] [rbp-48h] BYREF

  TopByReference = (struct _D3DMATRIX *)CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 384));
  D3DMatrix = CMILMatrix::GetD3DMatrix(TopByReference, &v5);
  *v4 = *D3DMatrix;
}
