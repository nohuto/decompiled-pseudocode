/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@PEAPEAV1@@Z @ 0x1801D8710
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x1801B3380 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x1801B348C (-PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColo.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA950 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x1800BAA9C (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        __int64 a3,
        CExternalLayer **a4)
{
  void (__fastcall ***v8)(_QWORD, _BYTE *); // rcx
  struct _LUID *v9; // rax
  int Bitmap; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CExternalLayer *v13; // rax
  __int64 v14; // rcx
  CExternalLayer *v15; // rbx
  struct IRenderTargetBitmap *v17; // [rsp+30h] [rbp-50h] BYREF
  const char *v18; // [rsp+38h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-40h]
  char v20[24]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v21[4]; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+64h] [rbp-1Ch]

  *a4 = 0LL;
  v8 = (void (__fastcall ***)(_QWORD, _BYTE *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v8)(v8, v21);
  v17 = 0LL;
  v22 = 1;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v17);
  v9 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, char *))a1)(a1, v20);
  v19 = 48;
  v18 = "DWM Scratch Rendertarget (color transform layer)";
  Bitmap = CExternalLayer::CreateBitmap((CDeviceManager *)&v18, a2, (__int64)v21, v9, 1, (CD3DDevice *)&v17);
  v12 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, Bitmap, 0x1Eu);
  }
  else
  {
    v13 = (CExternalLayer *)operator new(0x80uLL);
    v15 = v13;
    if ( v13 )
    {
      CExternalLayer::CExternalLayer(v13, a2, v17);
      *((_QWORD *)v15 + 15) = a3;
      *(_QWORD *)v15 = &CColorTransformLayer::`vftable';
      *a4 = v15;
    }
    else
    {
      *a4 = 0LL;
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147024882, 0x23u);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  return v12;
}
