/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x180193558
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x180179B4C (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18003C90C (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     floor @ 0x1800E3A38 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@2@Z @ 0x180193290 (--0CResampleLayer@@IEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTarg.c)
 */

__int64 __fastcall CResampleLayer::Create(__int64 a1, __int64 a2, float a3, float a4, int a5, __int64 *a6)
{
  __int64 v7; // rbx
  void (__fastcall ***v9)(_QWORD, _DWORD *); // rcx
  int v10; // eax
  float v11; // xmm0_4
  int v12; // edi
  int v13; // eax
  struct _LUID *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // eax
  struct _LUID *v19; // rax
  int v20; // eax
  struct _LUID *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v25; // [rsp+28h] [rbp-B9h]
  __int64 v26; // [rsp+48h] [rbp-99h] BYREF
  __int128 v27; // [rsp+58h] [rbp-89h] BYREF
  struct IRenderTargetBitmap *v28[2]; // [rsp+68h] [rbp-79h] BYREF
  __int128 v29; // [rsp+78h] [rbp-69h] BYREF
  const char *v30; // [rsp+88h] [rbp-59h] BYREF
  int v31; // [rsp+90h] [rbp-51h]
  _BYTE v32[24]; // [rsp+A0h] [rbp-41h] BYREF
  _DWORD v33[4]; // [rsp+B8h] [rbp-29h] BYREF

  v7 = 0LL;
  v26 = 0LL;
  *a6 = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, _DWORD *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v9)(v9, v33);
  v10 = v33[0];
  v11 = (float)*(int *)(a2 + 8);
  if ( CCommonRegistryData::m_fResampleInLinearSpace )
    v10 = 91;
  v33[1] = 1;
  v33[0] = v10;
  *(_QWORD *)&v29 = *(_QWORD *)a2;
  v12 = (int)floor((float)(v11 / a3) + 0.5);
  v13 = (int)floor((float)((float)*(int *)(a2 + 12) / a4) + 0.5);
  if ( v12 < 1 )
    v12 = 1;
  DWORD2(v29) = v12;
  if ( v13 < 1 )
    v13 = 1;
  v28[0] = 0LL;
  HIDWORD(v29) = v13;
  v14 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, const char **))a1)(a1, &v30);
  DWORD2(v27) = 40;
  *(_QWORD *)&v27 = "DWM Scratch Rendertarget (ResampleLayer)";
  v15 = CExternalLayer::CreateBitmap((__int64)&v27, &v29, (__int64)v33, v14, 2, (CD3DDevice *)v28);
  v17 = v15;
  if ( v15 < 0 )
  {
    v25 = 186;
    goto LABEL_22;
  }
  v18 = a5;
  if ( CCommonRegistryData::m_dwResampleModeOverride )
    v18 = CCommonRegistryData::m_dwResampleModeOverride;
  if ( v18 == 2 )
  {
    v19 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, const char **))a1)(a1, &v30);
    DWORD2(v27) = 47;
    *(_QWORD *)&v27 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
    v15 = CExternalLayer::CreateBitmap((__int64)&v27, &v29, (__int64)v33, v19, 2, (CD3DDevice *)&v26);
    v17 = v15;
    if ( v15 < 0 )
    {
      v25 = 202;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v25, 0LL);
      goto LABEL_23;
    }
LABEL_16:
    v7 = v26;
    goto LABEL_17;
  }
  if ( v18 == 3 )
  {
    v20 = *(_DWORD *)(a2 + 8);
    v27 = v29;
    DWORD2(v27) = v20;
    v21 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, _BYTE *))a1)(a1, v32);
    v31 = 47;
    v30 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
    v15 = CExternalLayer::CreateBitmap((__int64)&v30, &v27, (__int64)v33, v21, 2, (CD3DDevice *)&v26);
    v17 = v15;
    if ( v15 < 0 )
    {
      v25 = 215;
      goto LABEL_22;
    }
    goto LABEL_16;
  }
LABEL_17:
  v22 = (__int64)DefaultHeap::Alloc(0xA0uLL);
  if ( v22 )
    v22 = CResampleLayer::CResampleLayer(
            v22,
            (__int128 *)a2,
            (const struct MilPointAndSizeL *)&v29,
            a3,
            a4,
            a5,
            v28[0],
            v7);
  *a6 = v22;
  if ( !v22 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024882, 0xE1u, 0LL);
  }
LABEL_23:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v28);
  return v17;
}
