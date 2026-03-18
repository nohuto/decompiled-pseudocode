/*
 * XREFs of ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180236744
 * Callers:
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180237684 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18000DE4C (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1802A9FAC (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
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
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm3_4
  struct D2D_VECTOR_3F *v18; // [rsp+28h] [rbp-49h] BYREF
  float v19; // [rsp+30h] [rbp-41h]
  _OWORD v20[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v21; // [rsp+58h] [rbp-19h]
  __int128 v22; // [rsp+68h] [rbp-9h]
  int v23; // [rsp+78h] [rbp+7h]

  v3 = (const struct CVisualTree *)*((_QWORD *)this + 12);
  v6 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 200LL))(v3);
  ShadowHelpers::GetLightPosition(a2[991], v3, v6, (struct CVisual *)&v18, v18);
  v7 = *((_OWORD *)a3 + 2);
  v8 = *((_OWORD *)a3 + 3);
  v23 = *((_DWORD *)a3 + 24);
  v20[0] = v7;
  v9 = *((_OWORD *)a3 + 4);
  v20[1] = v8;
  v10 = *((_OWORD *)a3 + 5);
  v21 = v9;
  v22 = v10;
  CMILMatrix::Invert((CMILMatrix *)v20, v11, v12);
  CMILMatrix::Transpose((CMILMatrix *)v20);
  v13 = *(float *)&v18;
  v14 = *((float *)&v18 + 1);
  v15 = v19;
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 216LL))(v3) == 2 )
  {
    v13 = v13 - (float)(*((float *)a3 + 20) / *((float *)a3 + 23));
    v14 = v14 - (float)(*((float *)a3 + 21) / *((float *)a3 + 23));
    v15 = v15 - (float)(*((float *)a3 + 22) / *((float *)a3 + 23));
  }
  v16 = *((float *)&v21 + 2);
  if ( (float)((float)((float)(*((float *)&v21 + 1) * v14) + (float)(*(float *)&v21 * v13))
             + (float)(*((float *)&v21 + 2) * v15)) <= 0.0 )
    LODWORD(v16) = DWORD2(v21) ^ _xmm;
  return v16 > 0.0;
}
