/*
 * XREFs of ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180021040
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000F484 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C3700 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002F7B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180030220 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18007059C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
        struct CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct CBrush *a3,
        struct IRenderTargetBitmap **a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  struct IRenderTargetBitmap *v13; // rax
  int v15; // eax
  unsigned int v16; // ecx
  char *v17; // rcx
  int v18; // eax
  unsigned int v19; // ecx
  char v20; // [rsp+20h] [rbp-38h]
  struct IRenderTargetBitmap *v21; // [rsp+30h] [rbp-28h] BYREF
  const char *v22; // [rsp+38h] [rbp-20h] BYREF
  int v23; // [rsp+40h] [rbp-18h]

  v21 = 0LL;
  v22 = "DWM DropShadow Mask";
  v23 = 19;
  v20 = 0;
  v8 = CDrawingContext::PushOffScreenRenderingLayer(this, &v22, a2, DisplayId::None, v20, &v21);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x391u, 0LL);
    goto LABEL_6;
  }
  if ( !a3 || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 20LL) )
  {
    v11 = CDrawingContext::Clear((struct CDrawingContext *)((char *)this + 16), &stru_1802ADAD8);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x39Bu, 0LL);
      goto LABEL_5;
    }
  }
  else
  {
    v15 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3A0u, 0LL);
      goto LABEL_5;
    }
    v17 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 7) + 8LL) + 56;
    v18 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *, _QWORD))(*(_QWORD *)v17 + 16LL))(
            v17,
            this,
            a2,
            0LL);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3A6u, 0LL);
      CDrawingContext::PopTransformInternal(this, 1);
      goto LABEL_5;
    }
    CDrawingContext::PopTransformInternal(this, 1);
  }
  v13 = v21;
  v21 = 0LL;
  *a4 = v13;
LABEL_5:
  CDrawingContext::PopLayer(this);
LABEL_6:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
  return v10;
}
