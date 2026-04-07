/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180017074
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180016DA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18000BFC4 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001528C (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180016160 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x18003D5E4 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x18003EE84 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003FB24 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z @ 0x1800BE57C (-SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CTopLevelWindow3D *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rsi
  struct CPopInstruction *v3; // r14
  __int64 v6; // rcx
  char ShouldFreezeAnimationCVI; // r12
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  float v14; // xmm2_4
  float v15; // xmm1_4
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  CBaseObject *v20; // r12
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  CBaseObject *v26; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *CVIForAnimation; // [rsp+38h] [rbp-10h]
  CBaseObject *v28; // [rsp+80h] [rbp+38h] BYREF
  CBaseObject *v29; // [rsp+88h] [rbp+40h] BYREF
  CBaseObject *v30; // [rsp+90h] [rbp+48h] BYREF
  struct CPopInstruction *v31; // [rsp+98h] [rbp+50h] BYREF

  v1 = 0;
  v2 = 0LL;
  v26 = 0LL;
  v3 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( *((_DWORD *)this + 68) )
    return v1;
  ShouldFreezeAnimationCVI = CTopLevelWindow3D::ShouldFreezeAnimationCVI(this);
  v8 = CPushTransformInstruction::Create(*(struct CBaseTransformProxy **)(v6 + 344), &v28);
  v1 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2B7u);
  }
  else
  {
    v9 = CRenderDataVisual::AddInstruction(this, v28);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x2B8u);
    }
    else
    {
      v10 = (_DWORD *)*((_QWORD *)this + 42);
      v11 = 0;
      if ( v10[20] - v10[23] - v10[22] >= 0 )
        v11 = v10[20] - v10[23] - v10[22];
      v12 = v10[21] - v10[25] - v10[24];
      v13 = 0;
      if ( v12 >= 0 )
        v13 = v12;
      if ( v13 <= 0 )
        v14 = FLOAT_0_1;
      else
        v14 = 1.0 / (float)v13;
      if ( v11 <= 0 )
        v15 = FLOAT_0_1;
      else
        v15 = 1.0 / (float)v11;
      v16 = CScaleTransformProxy::Update(*((CScaleTransformProxy **)this + 44), v15, v14, 0.0, 0.0);
      v1 = v16;
      if ( v16 >= 0 )
      {
        v17 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 44), &v29);
        v1 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x2C5u);
        }
        else
        {
          v18 = CRenderDataVisual::AddInstruction(this, v29);
          v1 = v18;
          if ( v18 >= 0 )
          {
            CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                *((CSecondaryWindowRepresentation **)this + 42),
                                ShouldFreezeAnimationCVI);
            v19 = CDrawBitmapInstruction::Create(CVIForAnimation, &v26);
            v20 = v26;
            v1 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x2CBu);
            }
            else
            {
              v21 = CRenderDataVisual::AddInstruction(this, v26);
              v1 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x2CCu);
              }
              else
              {
                v22 = CPopInstruction::Create(&v30);
                v1 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x2CFu);
                  v2 = v30;
                }
                else
                {
                  v2 = v30;
                  v23 = CRenderDataVisual::AddInstruction(this, v30);
                  v1 = v23;
                  if ( v23 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x2D0u);
                  }
                  else
                  {
                    if ( !v28 )
                      goto LABEL_23;
                    v24 = CPopInstruction::Create(&v31);
                    v1 = v24;
                    if ( v24 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x2D4u);
                      v3 = v31;
                    }
                    else
                    {
                      v3 = v31;
                      v25 = CRenderDataVisual::AddInstruction(this, v31);
                      v1 = v25;
                      if ( v25 >= 0 )
                      {
LABEL_23:
                        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 41) + 384LL) + 241LL) & 0x40) != 0 )
                          CVisualProxy::SetVisualProtectContent(*((CVisualProxy **)this + 2), 1);
                        goto LABEL_25;
                      }
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x2D5u);
                    }
                  }
                }
              }
            }
LABEL_25:
            if ( CVIForAnimation )
              CBaseObject::Release(CVIForAnimation);
            if ( v20 )
              CBaseObject::Release(v20);
            goto LABEL_29;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x2C6u);
        }
LABEL_29:
        if ( v29 )
          CBaseObject::Release(v29);
        if ( v2 )
          CBaseObject::Release(v2);
        goto LABEL_33;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x2C3u);
    }
  }
LABEL_33:
  if ( v28 )
    CBaseObject::Release(v28);
  if ( v3 )
    CBaseObject::Release(v3);
  return v1;
}
