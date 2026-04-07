/*
 * XREFs of ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8574
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8290 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x180001CA0 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180002130 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180008AB0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z @ 0x1800A77B4 (-PerspectiveProjection@Matrix4x4F@D2D1@@SA-AV12@M@Z.c)
 *     ?SetProduct@Matrix4x4F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800A7BD0 (-SetProduct@Matrix4x4F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800BE3F0 (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z @ 0x1800BE4CC (-Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Update3DResources(CAnimatedTransitionVisual *this)
{
  float v2; // xmm7_4
  float v3; // xmm6_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm5_4
  const struct D2D1::Matrix4x4F *v7; // rax
  CMatrixTransform3dProxy *v8; // rcx
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  CTransform3dGroupProxy *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  _D3DMATRIX v18; // [rsp+38h] [rbp-D0h] BYREF
  _D3DMATRIX v19; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v20; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v21; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v22; // [rsp+D8h] [rbp-30h]
  __int128 v23; // [rsp+E8h] [rbp-20h]
  float v24; // [rsp+F8h] [rbp-10h]
  float v25; // [rsp+FCh] [rbp-Ch]
  int v26; // [rsp+100h] [rbp-8h]
  int v27; // [rsp+104h] [rbp-4h]
  _D3DMATRIX v28; // [rsp+108h] [rbp+0h] BYREF

  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)this + 53, &v20);
  v26 = 0;
  v27 = 1065353216;
  *(_OWORD *)&v19._21 = _xmm;
  *(_OWORD *)&v19._41 = _xmm;
  v22 = _xmm;
  v2 = (float)((float)((float)v20.right - (float)v20.left) * 0.5) + (float)v20.left;
  *(_OWORD *)&v19._11 = _xmm;
  *(_OWORD *)&v19._31 = _xmm;
  v3 = (float)((float)((float)v20.bottom - (float)v20.top) * 0.5) + (float)v20.top;
  v21 = _xmm;
  v23 = _xmm;
  LODWORD(v24) = LODWORD(v2) ^ _xmm;
  LODWORD(v25) = LODWORD(v3) ^ _xmm;
  *(_OWORD *)&v18._11 = _xmm;
  *(_OWORD *)&v18._21 = _xmm;
  *(_OWORD *)&v18._31 = _xmm;
  *(_OWORD *)&v18._41 = _xmm;
  D2D1::Matrix4x4F::SetProduct(
    (D2D1::Matrix4x4F *)&v18,
    (const struct D2D1::Matrix4x4F *)&v19,
    (const struct D2D1::Matrix4x4F *)&v21);
  *(_OWORD *)&v19._11 = *(_OWORD *)&v18._11;
  *(_OWORD *)&v19._21 = *(_OWORD *)&v18._21;
  v6 = fmaxf(v5, v4) * *((float *)this + 232);
  *(_OWORD *)&v19._31 = *(_OWORD *)&v18._31;
  *(_OWORD *)&v19._41 = *(_OWORD *)&v18._41;
  v7 = (const struct D2D1::Matrix4x4F *)D2D1::Matrix4x4F::PerspectiveProjection((__int64)&v21, v6);
  *(_OWORD *)&v18._11 = _xmm;
  *(_OWORD *)&v18._21 = _xmm;
  *(_OWORD *)&v18._31 = _xmm;
  *(_OWORD *)&v18._41 = _xmm;
  D2D1::Matrix4x4F::SetProduct((D2D1::Matrix4x4F *)&v18, (const struct D2D1::Matrix4x4F *)&v19, v7);
  v19 = v18;
  v26 = 0;
  v21 = _xmm;
  v23 = _xmm;
  *(_OWORD *)&v18._11 = _xmm;
  v22 = _xmm;
  *(_OWORD *)&v18._21 = _xmm;
  *(_OWORD *)&v18._31 = _xmm;
  v24 = v2;
  v25 = v3;
  v27 = 1065353216;
  *(_OWORD *)&v18._41 = _xmm;
  D2D1::Matrix4x4F::SetProduct(
    (D2D1::Matrix4x4F *)&v18,
    (const struct D2D1::Matrix4x4F *)&v19,
    (const struct D2D1::Matrix4x4F *)&v21);
  v8 = (CMatrixTransform3dProxy *)*((_QWORD *)this + 37);
  v19 = v18;
  v28 = v18;
  v9 = CMatrixTransform3dProxy::Update(v8, &v28);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = (CTransform3dGroupProxy *)*((_QWORD *)this + 38);
    v20 = (struct tagRECT)*((_OWORD *)this + 18);
    v13 = CTransform3dGroupProxy::Update(v12, (struct CMatrixTransform3dProxy **)&v20, v10);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v15 = CEffectGroupProxy::Update(
              *((CEffectGroupProxy **)this + 39),
              *((float *)this + 184),
              v14,
              *((const struct CTransform3dGroupProxy **)this + 38));
      v11 = v15;
      if ( v15 >= 0 )
      {
        v16 = CVisualProxy::SetEffect(*((CVisualProxy **)this + 3), *((struct CResourceProxy **)this + 39));
        v11 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x708u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x706u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x702u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x6F9u);
  }
  return v11;
}
