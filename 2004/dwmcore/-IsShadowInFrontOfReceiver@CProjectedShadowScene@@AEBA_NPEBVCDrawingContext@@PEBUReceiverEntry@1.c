/*
 * XREFs of ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x18000C550
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x18000C3D4 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x18000DA2C (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18002273C (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D2324 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowScene::IsShadowInFrontOfReceiver(
        CProjectedShadowScene *this,
        ShadowHelpers **a2,
        const struct CProjectedShadowScene::ReceiverEntry *a3)
{
  const struct CVisualTree *v3; // rdi
  const struct CCompositionLight *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm3_4
  struct D2D_VECTOR_3F *v16; // [rsp+28h] [rbp-49h] BYREF
  float v17; // [rsp+30h] [rbp-41h]
  _OWORD v18[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v19; // [rsp+58h] [rbp-19h]
  __int128 v20; // [rsp+68h] [rbp-9h]
  int v21; // [rsp+78h] [rbp+7h]

  v3 = (const struct CVisualTree *)*((_QWORD *)this + 11);
  v6 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 216LL))(v3);
  ShadowHelpers::GetLightPosition(a2[741], v3, v6, (struct CVisual *)&v16, v16);
  v7 = *((_OWORD *)a3 + 2);
  v8 = *((_OWORD *)a3 + 3);
  v21 = *((_DWORD *)a3 + 24);
  v18[0] = v7;
  v9 = *((_OWORD *)a3 + 4);
  v18[1] = v8;
  v10 = *((_OWORD *)a3 + 5);
  v19 = v9;
  v20 = v10;
  CMILMatrix::Invert((CMILMatrix *)v18);
  CMILMatrix::Transpose((CMILMatrix *)v18);
  v11 = *(float *)&v16;
  v12 = *((float *)&v16 + 1);
  v13 = v17;
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 232LL))(v3) == 2 )
  {
    v11 = v11 - (float)(*((float *)a3 + 20) / *((float *)a3 + 23));
    v12 = v12 - (float)(*((float *)a3 + 21) / *((float *)a3 + 23));
    v13 = v13 - (float)(*((float *)a3 + 22) / *((float *)a3 + 23));
  }
  v14 = *((float *)&v19 + 2);
  if ( (float)((float)((float)(*((float *)&v19 + 1) * v12) + (float)(*(float *)&v19 * v11))
             + (float)(*((float *)&v19 + 2) * v13)) <= 0.0 )
    LODWORD(v14) = DWORD2(v19) ^ _xmm;
  return v14 > 0.0;
}
