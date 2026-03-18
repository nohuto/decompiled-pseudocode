/*
 * XREFs of ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x18018C120
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800B6888 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___ @ 0x1800E6D34 (CComposition--ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderAdditionalTopmostContent(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  CTransform3D *v5; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  float v10; // xmm2_4
  float v11; // xmm1_4
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  CDrawingContext *v18[2]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v19; // [rsp+48h] [rbp+7h] BYREF
  __int128 v20; // [rsp+58h] [rbp+17h]
  __int128 v21; // [rsp+68h] [rbp+27h]
  __int128 v22; // [rsp+78h] [rbp+37h]
  int v23; // [rsp+88h] [rbp+47h]

  v2 = 0;
  if ( *((_DWORD *)this + 442) == 1 )
  {
    v23 = 0;
    v5 = (CTransform3D *)*((_QWORD *)this + 18);
    if ( v5 )
    {
      Matrix = CTransform3D::GetMatrix(v5, 0LL);
      v7 = *((_OWORD *)Matrix + 1);
      v19 = *(_OWORD *)Matrix;
      v8 = *((_OWORD *)Matrix + 2);
      v20 = v7;
      v9 = *((_OWORD *)Matrix + 3);
      v23 = *((_DWORD *)Matrix + 16);
    }
    else
    {
      v19 = _xmm;
      v8 = _xmm;
      v20 = _xmm;
      v9 = _xmm;
      LOWORD(v23) = 32085;
    }
    LODWORD(v10) = *((_DWORD *)this + 521) ^ _xmm;
    v22 = v9;
    LODWORD(v11) = *((_DWORD *)this + 520) ^ _xmm;
    v21 = v8;
    CMILMatrix::Translate((CMILMatrix *)&v19, v11, v10);
    v12 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v19, 1, 1);
    v2 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xFAu, 0LL);
    }
    else
    {
      v14 = *((_QWORD *)this + 2);
      v18[0] = this;
      v18[1] = a2;
      v15 = CComposition::ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___(v14, v18);
      v2 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x112u, 0LL);
      CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  return v2;
}
