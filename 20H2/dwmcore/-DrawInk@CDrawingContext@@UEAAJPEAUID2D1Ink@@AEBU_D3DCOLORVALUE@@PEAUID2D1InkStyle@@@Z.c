/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180175620
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C459C (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18004D620 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18004E2D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008AC90 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800979A8 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1801746C4 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180177490 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ??$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ @ 0x18020E180 (--$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180238D70 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // r12
  char v8; // r14
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v10; // rcx
  __int128 v11; // xmm0
  CDrawingContext *v12; // rsi
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  float v22; // xmm1_4
  int v23; // ecx
  enum D2D1_PRIMITIVE_BLEND v24; // eax
  __int64 v25; // r10
  int v26; // eax
  __int64 v27; // rcx
  _OWORD v30[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+D0h] [rbp-30h]
  struct _D3DCOLORVALUE v33; // [rsp+E0h] [rbp-20h] BYREF

  v4 = (unsigned __int64)this + 8;
  v8 = 0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 392));
    if ( !(unsigned __int8)CMILMatrix::Is2DTransformExceptForZTranslation<1>(TopByReference) )
    {
      v18 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, -2147467263, 0x2C6u, 0LL);
      return v18;
    }
    v11 = v10[3];
    v31 = 0;
    v12 = (CDrawingContext *)((char *)this - 16);
    v13 = *v10;
    v14 = v10[1];
    v15 = v10[2];
    v32 = v11;
    DWORD2(v32) = 0;
    v30[3] = v32;
    v30[0] = v13;
    v30[1] = v14;
    v30[2] = v15;
    v16 = CDrawingContext::PushTransformInternal(
            (CDrawingContext *)((char *)this - 16),
            0LL,
            (const struct CMILMatrix *)v30,
            0,
            1);
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2C1u, 0LL);
      return v18;
    }
    v8 = 1;
  }
  else
  {
    v12 = (CDrawingContext *)((char *)this - 16);
  }
  v19 = CDrawingContext::ApplyRenderStateInternal(v12, 0);
  v18 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2CAu, 0LL);
  }
  else
  {
    v21 = *((_DWORD *)this + 804);
    *(struct _D3DCOLORVALUE *)&v33.r = *(struct _D3DCOLORVALUE *)&a3->r;
    if ( v21 )
      v22 = *(float *)(*((_QWORD *)this + 404) + 4LL * (unsigned int)(v21 - 1));
    else
      v22 = *(float *)&FLOAT_1_0;
    v23 = *((_DWORD *)this + 66);
    v33.a = v33.a * v22;
    v24 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(v23);
    v26 = CD2DContext::DrawInk(
            (CD2DContext *)(v25 + 16),
            (const struct ID2DContextOwner *)(v4 & -(__int64)(v12 != 0LL)),
            a2,
            &v33,
            a4,
            (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 65) != 0),
            v24);
    v18 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x2D5u, 0LL);
  }
  if ( v8 )
    CDrawingContext::PopTransformInternal(v12, 1);
  return v18;
}
