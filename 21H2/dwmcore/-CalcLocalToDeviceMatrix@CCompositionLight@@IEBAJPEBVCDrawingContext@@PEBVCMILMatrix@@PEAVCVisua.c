/*
 * XREFs of ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x18020046C
 * Callers:
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18020C590 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18020DAB0 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18020F720 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

__int64 __fastcall CCompositionLight::CalcLocalToDeviceMatrix(
        CCompositionLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CVisual *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  const struct CVisualTree *v6; // rdx
  int WorldTransform; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  struct Windows::Foundation::Numerics::float4x4 *v13; // r8
  __int64 v14; // rdx
  int v15; // r8d
  __int128 v17; // [rsp+30h] [rbp-59h] BYREF
  __int128 v18; // [rsp+40h] [rbp-49h]
  __int128 v19; // [rsp+50h] [rbp-39h]
  __int128 v20; // [rsp+60h] [rbp-29h]
  unsigned int v21; // [rsp+70h] [rbp-19h]
  _OWORD v22[4]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+37h]

  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 991);
  v23 = 0;
  WorldTransform = CVisual::GetWorldTransform(a4, v6, 3, (__int64)v22, 0LL, 0LL);
  v12 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, WorldTransform, 0xC1u);
  }
  else
  {
    v17 = v22[0];
    v21 = v23;
    v18 = v22[1];
    v19 = v22[2];
    v20 = v22[3];
    CMILMatrix::Multiply((CMILMatrix *)&v17, a3, v10, v11);
    v13 = (struct Windows::Foundation::Numerics::float4x4 *)v21;
    *(_OWORD *)a5 = v17;
    *((_OWORD *)a5 + 1) = v18;
    *((_OWORD *)a5 + 2) = v19;
    *((_OWORD *)a5 + 3) = v20;
    *((_DWORD *)a5 + 16) = (_DWORD)v13;
    CMILMatrix::Invert(a5, v14, v13);
    *(_OWORD *)a6 = v17;
    *((_OWORD *)a6 + 1) = v18;
    *((_OWORD *)a6 + 2) = v19;
    *((_OWORD *)a6 + 3) = v20;
    *((_DWORD *)a6 + 16) = v15;
  }
  return v12;
}
