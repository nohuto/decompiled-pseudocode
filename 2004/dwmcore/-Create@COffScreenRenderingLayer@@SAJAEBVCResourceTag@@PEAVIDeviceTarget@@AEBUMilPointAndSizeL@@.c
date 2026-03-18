/*
 * XREFs of ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIDeviceTarget@@AEBUMilPointAndSizeL@@VDisplayId@@W4Enum@CacheMode@@PEAPEAV1@@Z @ 0x18003C728
 * Callers:
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C5C4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18003C8BC (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C90C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::Create(
        __int64 a1,
        __int64 a2,
        const struct MilPointAndSizeL *a3,
        int a4,
        int a5,
        CExternalLayer **a6)
{
  int v6; // edi
  void (__fastcall ***v11)(_QWORD, _BYTE *); // rcx
  void (__fastcall **v12)(__int64, char *); // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  CExternalLayer *v16; // rax
  __int64 v17; // rcx
  CExternalLayer *v18; // rbx
  struct IRenderTargetBitmap *v20; // [rsp+30h] [rbp-68h] BYREF
  char v21[8]; // [rsp+38h] [rbp-60h] BYREF
  int v22; // [rsp+40h] [rbp-58h]
  _BYTE v23[4]; // [rsp+50h] [rbp-48h] BYREF
  int v24; // [rsp+54h] [rbp-44h]

  v6 = a5;
  if ( a5 == 1 )
  {
    v6 = 2;
  }
  else if ( a5 == 3 )
  {
    v6 = 4;
  }
  *a6 = 0LL;
  v11 = (void (__fastcall ***)(_QWORD, _BYTE *))(a2 + *(int *)(*(_QWORD *)(a2 + 8) + 12LL) + 8LL);
  (**v11)(v11, v23);
  v12 = *(void (__fastcall ***)(__int64, char *))a2;
  v24 = 1;
  (*v12)(a2, v21);
  v20 = 0LL;
  v22 = a4;
  v13 = CExternalLayer::CreateBitmap(a1, a3, v23, v21, v6, &v20);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2Fu, 0LL);
  }
  else
  {
    v16 = (CExternalLayer *)operator new(0x78uLL);
    v18 = v16;
    if ( v16 )
    {
      CExternalLayer::CExternalLayer(v16, a3, v20);
      *(_QWORD *)v18 = &COffScreenRenderingLayer::`vftable';
    }
    else
    {
      v18 = 0LL;
    }
    *a6 = v18;
    if ( !v18 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x33u, 0LL);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20);
  return v15;
}
