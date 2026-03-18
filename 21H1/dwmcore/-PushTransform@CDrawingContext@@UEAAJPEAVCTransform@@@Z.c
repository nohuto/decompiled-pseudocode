/*
 * XREFs of ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1800B6620
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800B6888 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushTransform(CDrawingContext *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 )
    Matrix = CTransform3D::GetMatrix(a2, 0LL);
  else
    Matrix = (const struct CMILMatrix *)&CMILMatrix::Identity;
  v4 = CDrawingContext::PushTransformInternal((CDrawingContext *)((char *)this - 16), 0LL, Matrix, 1, 1);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xC13u, 0LL);
  return v6;
}
