/*
 * XREFs of ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001014C
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000F744 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180212DC4 (-UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA5D0 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
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
  struct IRenderTargetBitmap *v20; // [rsp+30h] [rbp-28h] BYREF
  const char *v21; // [rsp+38h] [rbp-20h] BYREF
  int v22; // [rsp+40h] [rbp-18h]

  v20 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v20);
  v21 = "DWM DropShadow Mask";
  v22 = 19;
  v8 = CDrawingContext::PushOffScreenRenderingLayer(this, &v21, a2, DisplayId::None, 4, &v20);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3C0u, 0LL);
    goto LABEL_6;
  }
  if ( !a3 || (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a3 + 56LL))(a3, 20LL) )
  {
    v11 = (**((__int64 (__fastcall ***)(char *, const struct _D3DCOLORVALUE *))this + 2))(
            (char *)this + 16,
            &stru_1802D2718);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3CAu, 0LL);
      goto LABEL_5;
    }
  }
  else
  {
    v15 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x3CFu, 0LL);
      goto LABEL_5;
    }
    v17 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64;
    v18 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *, _QWORD))(*(_QWORD *)v17 + 16LL))(
            v17,
            this,
            a2,
            0LL);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3D5u, 0LL);
      CDrawingContext::PopTransformInternal(this, 1);
      goto LABEL_5;
    }
    CDrawingContext::PopTransformInternal(this, 1);
  }
  v13 = v20;
  v20 = 0LL;
  *a4 = v13;
LABEL_5:
  CDrawingContext::PopLayer(this);
LABEL_6:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v20);
  return v10;
}
