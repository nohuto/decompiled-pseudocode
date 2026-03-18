/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x1801DD0C0
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x1801B3C80 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA950 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     floor @ 0x1801018EC (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CResampleLayer@@AEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@2@Z @ 0x1801DCDE8 (--0CResampleLayer@@AEAA@AEBUMilPointAndSizeL@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTarg.c)
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
  LPVOID v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v26; // [rsp+28h] [rbp-A9h]
  __int64 v27; // [rsp+48h] [rbp-89h] BYREF
  struct IRenderTargetBitmap *v28; // [rsp+50h] [rbp-81h] BYREF
  __int128 v29; // [rsp+58h] [rbp-79h] BYREF
  __int128 v30; // [rsp+68h] [rbp-69h] BYREF
  const char *v31; // [rsp+78h] [rbp-59h] BYREF
  int v32; // [rsp+80h] [rbp-51h]
  _BYTE v33[24]; // [rsp+90h] [rbp-41h] BYREF
  _DWORD v34[4]; // [rsp+A8h] [rbp-29h] BYREF

  v28 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  *a6 = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, _DWORD *))(a1 + *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + 8LL);
  (**v9)(v9, v34);
  v10 = v34[0];
  v11 = (float)*(int *)(a2 + 8);
  if ( CCommonRegistryData::m_fResampleInLinearSpace )
    v10 = 91;
  v34[1] = 1;
  v34[0] = v10;
  *(_QWORD *)&v30 = *(_QWORD *)a2;
  v12 = (int)floor((float)(v11 / a3) + 0.5);
  v13 = (int)floor((float)((float)*(int *)(a2 + 12) / a4) + 0.5);
  if ( v12 < 1 )
    v12 = 1;
  DWORD2(v30) = v12;
  if ( v13 < 1 )
    v13 = 1;
  HIDWORD(v30) = v13;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v28);
  v14 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, const char **))a1)(a1, &v31);
  DWORD2(v29) = 40;
  *(_QWORD *)&v29 = "DWM Scratch Rendertarget (ResampleLayer)";
  v15 = CExternalLayer::CreateBitmap((CDeviceManager *)&v29, &v30, (__int64)v34, v14, 2, (CD3DDevice *)&v28);
  v17 = v15;
  if ( v15 < 0 )
  {
    v26 = 186;
    goto LABEL_23;
  }
  v18 = a5;
  if ( CCommonRegistryData::m_dwResampleModeOverride )
    v18 = CCommonRegistryData::m_dwResampleModeOverride;
  if ( v18 == 2 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v27);
    v19 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, const char **))a1)(a1, &v31);
    DWORD2(v29) = 47;
    *(_QWORD *)&v29 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
    v15 = CExternalLayer::CreateBitmap((CDeviceManager *)&v29, &v30, (__int64)v34, v19, 2, (CD3DDevice *)&v27);
    v17 = v15;
    if ( v15 < 0 )
    {
      v26 = 202;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, v26);
      goto LABEL_24;
    }
  }
  else
  {
    if ( v18 != 3 )
      goto LABEL_17;
    v20 = *(_DWORD *)(a2 + 8);
    v29 = v30;
    DWORD2(v29) = v20;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v27);
    v21 = (struct _LUID *)(**(__int64 (__fastcall ***)(__int64, _BYTE *))a1)(a1, v33);
    v32 = 47;
    v31 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
    v15 = CExternalLayer::CreateBitmap((CDeviceManager *)&v31, &v29, (__int64)v34, v21, 2, (CD3DDevice *)&v27);
    v17 = v15;
    if ( v15 < 0 )
    {
      v26 = 215;
      goto LABEL_23;
    }
  }
  v7 = v27;
LABEL_17:
  v22 = DefaultHeap::Alloc(0xA0uLL);
  if ( !v22 )
  {
    *a6 = 0LL;
LABEL_21:
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, -2147024882, 0xE1u);
    goto LABEL_24;
  }
  v24 = CResampleLayer::CResampleLayer(
          (__int64)v22,
          (__int128 *)a2,
          (const struct MilPointAndSizeL *)&v30,
          a3,
          a4,
          a5,
          v28,
          v7);
  *a6 = v24;
  if ( !v24 )
    goto LABEL_21;
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v27);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
  return v17;
}
