/*
 * XREFs of ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B1F34
 * Callers:
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801D6CB8 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1801AFA34 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180278180 (-DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 */

__int64 __fastcall CDrawingContext::DrawTextW(
        CDrawingContext *this,
        unsigned __int16 *a2,
        __int64 a3,
        struct IDWriteTextFormat *a4,
        const struct D2D_RECT_F *a5,
        const struct _D3DCOLORVALUE *a6)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  enum D2D1_PRIMITIVE_BLEND v12; // eax
  __int64 v13; // r10
  int v14; // eax
  __int64 v15; // rcx

  v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x1866u);
  }
  else
  {
    v12 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 82));
    v14 = CD2DContext::DrawTextW(
            (CD2DContext *)(v13 + 16),
            (CDrawingContext *)((char *)this + 24),
            a2,
            3u,
            a4,
            a5,
            a6,
            (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 76) != 0),
            v12,
            D2D1_DRAW_TEXT_OPTIONS_NONE,
            DWRITE_MEASURING_MODE_NATURAL);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x186Fu);
  }
  return v11;
}
