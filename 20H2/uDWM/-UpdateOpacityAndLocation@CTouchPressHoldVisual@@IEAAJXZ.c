/*
 * XREFs of ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B80DC
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B7BA4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B7D4C (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B7ED8 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B86C0 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180016EB4 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x1800201C0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x18003641C (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180036564 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateOpacityAndLocation(CTouchPressHoldVisual *this)
{
  float v1; // xmm1_4
  int v3; // ebx
  int v4; // edx
  float v5; // xmm8_4
  int v6; // r8d
  int v7; // eax
  float v8; // xmm7_4
  float v9; // xmm12_4
  float v10; // xmm10_4
  int v11; // eax
  unsigned int v12; // ebx
  CBaseObject *v13; // rdi
  int v14; // eax
  int v15; // eax
  float v16; // xmm13_4
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  CBaseObject *v33; // [rsp+38h] [rbp-D0h] BYREF
  double v34; // [rsp+40h] [rbp-C8h]
  __int128 v35; // [rsp+48h] [rbp-C0h]
  struct _D3DCOLORVALUE v36; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v37; // [rsp+68h] [rbp-A0h] BYREF

  v1 = *((float *)this + 82);
  v33 = 0LL;
  CVisual::SetOpacity(this, v1);
  if ( *((int *)this + 79) < 10 )
    *((_DWORD *)this + 79) = 10;
  if ( *((int *)this + 80) < 10 )
    *((_DWORD *)this + 80) = 10;
  CRenderDataVisual::ClearInstructions(this);
  v3 = *((_DWORD *)this + 79);
  v4 = *((_DWORD *)this + 83);
  v5 = (float)(*((_DWORD *)this + 75) - v3 / 2);
  *(float *)&v35 = v5;
  v6 = MulDiv(-5, v4, 100);
  v7 = *((_DWORD *)this + 80);
  v8 = (float)(*((_DWORD *)this + 76) - *((_DWORD *)this + 81) - v3 / 2 + v6);
  *((float *)&v35 + 2) = (float)v3 + v5;
  *((float *)&v35 + 1) = v8;
  *(struct _D3DCOLORVALUE *)&v37.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
  *(struct _D3DCOLORVALUE *)&v36.r = (struct _D3DCOLORVALUE)_xmm;
  *((float *)&v35 + 3) = (float)v7 + v8;
  if ( v3 <= 4 || v7 <= 4 )
  {
    v29 = CRectangleInstruction::Create(&v33);
    v12 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x137u);
      goto LABEL_39;
    }
    v13 = v33;
    v30 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
    v12 = v30;
    if ( v30 >= 0 )
    {
      *((_OWORD *)v13 + 2) = v35;
      v31 = CRenderDataVisual::AddInstruction(this, v13);
      v12 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x13Au);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x138u);
    }
  }
  else
  {
    v9 = (float)((float)v3 + v5) - v5;
    *(_QWORD *)&v35 = __PAIR64__(LODWORD(v8), LODWORD(v5));
    v10 = (float)((float)v7 + v8) - v8;
    *((float *)&v35 + 3) = v8 + v10;
    *((float *)&v35 + 2) = v5 + 2.0;
    v34 = (float)(v8 + 2.0);
    v11 = CRectangleInstruction::Create(&v33);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x156u);
LABEL_39:
      v13 = v33;
      goto LABEL_44;
    }
    v13 = v33;
    v14 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x157u);
      goto LABEL_44;
    }
    *((_OWORD *)v13 + 2) = v35;
    v15 = CRenderDataVisual::AddInstruction(this, v13);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x159u);
      goto LABEL_44;
    }
    CBaseObject::Release(v13);
    v33 = 0LL;
    v16 = v5 + 2.0;
    *((float *)&v35 + 3) = v8 + 2.0;
    *(float *)&v35 = v16;
    *((float *)&v35 + 2) = (float)(v16 + v9) - 4.0;
    v17 = CRectangleInstruction::Create(&v33);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x161u);
      goto LABEL_39;
    }
    v13 = v33;
    v18 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
    v12 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x162u);
      goto LABEL_44;
    }
    *((_OWORD *)v13 + 2) = v35;
    v19 = CRenderDataVisual::AddInstruction(this, v13);
    v12 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x164u);
      goto LABEL_44;
    }
    CBaseObject::Release(v13);
    v33 = 0LL;
    *((float *)&v35 + 3) = v8 + v10;
    *(float *)&v35 = (float)(v5 + v9) - 2.0;
    *((float *)&v35 + 2) = *(float *)&v35 + 2.0;
    v20 = CRectangleInstruction::Create(&v33);
    v12 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x16Cu);
      goto LABEL_39;
    }
    v13 = v33;
    v21 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
    v12 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x16Du);
      goto LABEL_44;
    }
    *((_OWORD *)v13 + 2) = v35;
    v22 = CRenderDataVisual::AddInstruction(this, v13);
    v12 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x16Fu);
      goto LABEL_44;
    }
    CBaseObject::Release(v13);
    v33 = 0LL;
    *(float *)&v35 = v5 + 2.0;
    *((float *)&v35 + 1) = (float)(v8 + v10) - 2.0;
    *((float *)&v35 + 2) = (float)(v16 + v9) - 4.0;
    *((float *)&v35 + 3) = *((float *)&v35 + 1) + 2.0;
    v23 = CRectangleInstruction::Create(&v33);
    v12 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x177u);
      goto LABEL_39;
    }
    v13 = v33;
    v24 = CRectangleInstruction::SetSolidFill(v33, &v36, 0.949999988079071);
    v12 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x178u);
      goto LABEL_44;
    }
    *((_OWORD *)v13 + 2) = v35;
    v25 = CRenderDataVisual::AddInstruction(this, v13);
    v12 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x17Au);
      goto LABEL_44;
    }
    CBaseObject::Release(v13);
    v33 = 0LL;
    *((float *)&v35 + 1) = v34;
    *((float *)&v35 + 3) = (float)(*((float *)&v35 + 1) + v10) - 4.0;
    v26 = CRectangleInstruction::Create(&v33);
    v12 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x182u);
      goto LABEL_39;
    }
    v13 = v33;
    v27 = CRectangleInstruction::SetSolidFill(v33, &v37, 0.300000011920929);
    v12 = v27;
    if ( v27 >= 0 )
    {
      *((_OWORD *)v13 + 2) = v35;
      v28 = CRenderDataVisual::AddInstruction(this, v13);
      v12 = v28;
      if ( v28 >= 0 )
      {
LABEL_45:
        CBaseObject::Release(v13);
        return v12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x185u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x183u);
    }
  }
LABEL_44:
  if ( v13 )
    goto LABEL_45;
  return v12;
}
