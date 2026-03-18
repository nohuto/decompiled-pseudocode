/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1801B09B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1801AFA34 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180277EA0 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // r14
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  float v14; // xmm1_4
  int v15; // ecx
  enum D2D1_PRIMITIVE_BLEND v16; // eax
  __int64 v17; // r10
  unsigned int v19; // [rsp+20h] [rbp-78h]
  struct _D3DCOLORVALUE v20; // [rsp+40h] [rbp-58h] BYREF

  v4 = (unsigned __int64)this + 8;
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 1))((char *)this + 8) )
  {
    v10 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147467263, 0x2C8u);
    return v10;
  }
  v11 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)this + 112LL))(this);
  v10 = v11;
  if ( v11 < 0 )
  {
    v19 = 715;
    goto LABEL_10;
  }
  v13 = *((_DWORD *)this + 772);
  *(struct _D3DCOLORVALUE *)&v20.r = *(struct _D3DCOLORVALUE *)&a3->r;
  if ( v13 )
    v14 = *(float *)(*((_QWORD *)this + 388) + 4LL * (unsigned int)(v13 - 1));
  else
    v14 = *(float *)&FLOAT_1_0;
  v15 = *((_DWORD *)this + 73);
  v20.a = v20.a * v14;
  v16 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(v15);
  v11 = CD2DContext::DrawInk(
          (CD2DContext *)(v17 + 16),
          (const struct ID2DContextOwner *)(v4 & -(__int64)(this != (CDrawingContext *)16)),
          a2,
          &v20,
          a4,
          (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 72) != 0),
          v16);
  v10 = v11;
  if ( v11 < 0 )
  {
    v19 = 726;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, v19);
  }
  return v10;
}
