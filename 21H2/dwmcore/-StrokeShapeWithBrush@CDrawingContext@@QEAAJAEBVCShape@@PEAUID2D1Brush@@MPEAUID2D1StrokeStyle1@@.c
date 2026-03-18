/*
 * XREFs of ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1801B42D0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1801B43F8 (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1801AFA34 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180277F70 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 */

__int64 __fastcall CDrawingContext::StrokeShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3,
        float a4,
        struct ID2D1StrokeStyle1 *a5)
{
  __int64 v5; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  enum D2D1_PRIMITIVE_BLEND v13; // eax
  __int64 v14; // r10
  int v15; // eax
  __int64 v16; // rcx
  struct ID2D1Geometry *v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = *(_QWORD *)a2;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, struct ID2D1Geometry **))(v5 + 24))(a2, 0LL, &v18);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x9ECu);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x9EEu);
    }
    else
    {
      v13 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 82));
      v15 = CD2DContext::DrawShape(
              (CD2DContext *)(v14 + 16),
              (CDrawingContext *)((char *)this + 24),
              v18,
              a3,
              a4,
              a5,
              (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 76) != 0),
              v13);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x9F6u);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return v10;
}
