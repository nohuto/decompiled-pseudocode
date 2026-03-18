/*
 * XREFs of ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180178AC0
 * Callers:
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x180178BAC (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18025FB2C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006BEB0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x180176394 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18023ABA0 (-FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3)
{
  __int64 v3; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  enum D2D1_PRIMITIVE_BLEND v11; // eax
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // rcx
  struct ID2D1Geometry *v16; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v16 = 0LL;
  v6 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, struct ID2D1Geometry **))(v3 + 24))(a2, 0LL, &v16);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x942u, 0LL);
  }
  else
  {
    v9 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x944u, 0LL);
    }
    else
    {
      v11 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 75));
      v13 = CD2DContext::FillShape(
              (CD2DContext *)(v12 + 16),
              (CDrawingContext *)((char *)this + 24),
              v16,
              a3,
              (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 69) != 0),
              v11);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x94Au, 0LL);
    }
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v16);
  return v8;
}
