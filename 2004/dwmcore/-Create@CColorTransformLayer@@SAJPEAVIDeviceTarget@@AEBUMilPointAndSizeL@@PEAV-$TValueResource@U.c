/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@PEAPEAV1@@Z @ 0x1801914BC
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x1801797EC (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x1801798F8 (-PushColorTransformLayerForNode@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColo.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18003C8BC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C90C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        __int64 a1,
        const struct MilPointAndSizeL *a2,
        __int64 a3,
        CExternalLayer **a4)
{
  __int64 (__fastcall **v5)(__int64, char *); // rax
  struct _LUID *v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, char *); // rcx
  __int64 v11; // rax
  int Bitmap; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  CExternalLayer *v15; // rax
  __int64 v16; // rcx
  CExternalLayer *v17; // rbx
  struct IRenderTargetBitmap *v19; // [rsp+30h] [rbp-78h] BYREF
  const char *v20; // [rsp+38h] [rbp-70h] BYREF
  int v21; // [rsp+40h] [rbp-68h]
  char v22[24]; // [rsp+48h] [rbp-60h] BYREF
  char v23[16]; // [rsp+60h] [rbp-48h] BYREF

  *a4 = 0LL;
  v5 = *(__int64 (__fastcall ***)(__int64, char *))a1;
  v19 = 0LL;
  v9 = (struct _LUID *)(*v5)(a1, v22);
  v10 = (__int64 (__fastcall ***)(_QWORD, char *))(*(int *)(*(_QWORD *)(a1 + 8) + 12LL) + a1 + 8);
  v11 = (**v10)(v10, v23);
  v21 = 48;
  v20 = "DWM Scratch Rendertarget (color transform layer)";
  Bitmap = CExternalLayer::CreateBitmap((__int64)&v20, a2, v11, v9, 1, (CD3DDevice *)&v19);
  v14 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Bitmap, 0x1Bu, 0LL);
  }
  else
  {
    v15 = (CExternalLayer *)operator new(0x80uLL);
    v17 = v15;
    if ( v15 )
    {
      CExternalLayer::CExternalLayer(v15, a2, v19);
      *((_QWORD *)v17 + 15) = a3;
      *(_QWORD *)v17 = &CColorTransformLayer::`vftable';
    }
    else
    {
      v17 = 0LL;
    }
    *a4 = v17;
    if ( !v17 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x20u, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v19);
  return v14;
}
