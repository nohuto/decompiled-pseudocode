/*
 * XREFs of ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1802364F8
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180236944 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800E8734 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x18025A290 (--0CVisualDepthGeometry@@QEAA@AEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z @ 0x18025A2EC (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEBVCMILMatrix@@@Z.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x18025A904 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 */

bool __fastcall CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        const struct CProjectedShadowScene::CasterEntry *a3,
        const struct CProjectedShadowScene::ReceiverEntry *a4,
        unsigned int a5)
{
  __int64 v7; // r9
  int v8; // eax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r9
  float v17; // [rsp+28h] [rbp-E0h] BYREF
  float v18[13]; // [rsp+2Ch] [rbp-DCh] BYREF
  __int128 v19; // [rsp+68h] [rbp-A0h]
  int v20; // [rsp+78h] [rbp-90h]
  _OWORD v21[4]; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+C8h] [rbp-40h]
  _OWORD v23[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v24; // [rsp+118h] [rbp+10h]
  _BYTE v25[32]; // [rsp+128h] [rbp+20h] BYREF
  int v26; // [rsp+148h] [rbp+40h]
  _BYTE v27[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v28; // [rsp+1F8h] [rbp+F0h]

  CVisual::GetEffectiveSize(*(CVisual **)(*(_QWORD *)a3 + 64LL), &v17, v18);
  v20 = 5888;
  v8 = *(_DWORD *)(v7 + 96);
  LODWORD(v19) = a5 ^ _xmm;
  *(_QWORD *)((char *)&v19 + 4) = a5 ^ (unsigned __int64)(unsigned int)_xmm;
  v17 = v17 + (float)(*(float *)&a5 + *(float *)&a5);
  v18[0] = v18[0] + (float)(*(float *)&a5 + *(float *)&a5);
  v9 = *(_OWORD *)(v7 + 32);
  LOBYTE(v20) = 84;
  HIDWORD(v19) = (_DWORD)FLOAT_1_0;
  v10 = *(_OWORD *)(v7 + 48);
  v22 = v8;
  v21[0] = v9;
  v11 = *(_OWORD *)(v7 + 64);
  v21[1] = v10;
  v12 = *(_OWORD *)(v7 + 80);
  v21[2] = v11;
  v21[3] = v12;
  CMILMatrix::Multiply((CMILMatrix *)v21, (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84), v13, v7);
  v23[3] = v19;
  v23[0] = _xmm;
  v23[1] = _xmm;
  v23[2] = _xmm;
  v24 = v20;
  CMILMatrix::Multiply(
    (CMILMatrix *)v23,
    (const struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 16),
    v14,
    v15);
  CVisualDepthGeometry::CVisualDepthGeometry(
    (CVisualDepthGeometry *)v25,
    *(struct CVisual **)(*(_QWORD *)a4 + 64LL),
    (const struct CMILMatrix *)v21);
  CVisualDepthGeometry::CVisualDepthGeometry(
    (CVisualDepthGeometry *)v27,
    (const struct Windows::Foundation::Numerics::float2 *)&v17,
    (const struct CMILMatrix *)v23);
  v26 = 2;
  v28 = 1;
  return (unsigned int)CVisualDepthGeometry::GetRelativeOrder(v27, v25) == 0;
}
