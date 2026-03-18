/*
 * XREFs of ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x18001FEA0
 * Callers:
 *     ?GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x18001FC70 (-GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180020D10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18028FB00 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800204D8 (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x180021114 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18005FD84 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802AF868 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DDevice::CopyTexture2D(
        struct CD3DDevice *a1,
        struct ID3D11Texture2D *a2,
        unsigned int a3,
        struct PixelFormatInfo *a4,
        int *a5,
        __int64 a6,
        int a7,
        int a8)
{
  int v12; // edx
  enum DXGI_FORMAT v13; // ecx
  int v14; // edi
  int v15; // r15d
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  int v18; // eax
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, _DWORD *, __int64, _QWORD **); // rdi
  int v27; // eax
  unsigned int v28; // ecx
  void *v29; // rbx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  int v38; // r9d
  int v39; // eax
  unsigned int v40; // ecx
  struct IUnknown *v41; // rbx
  unsigned int v42; // r9d
  int v43; // eax
  unsigned int v44; // ecx
  __int64 v45; // rcx
  struct IBitmapSource *v46; // rsi
  int v47; // eax
  unsigned int v48; // ecx
  char *v49; // rcx
  struct IUnknown *v50; // rcx
  unsigned int v51; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v52; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v55; // [rsp+68h] [rbp-98h] BYREF
  int v56; // [rsp+70h] [rbp-90h]
  unsigned int v57; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v58; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v59[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v62[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-50h] BYREF
  int v64; // [rsp+B8h] [rbp-48h]
  enum DXGI_FORMAT v65; // [rsp+BCh] [rbp-44h]
  _DWORD v66[6]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v67[24]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v68[4]; // [rsp+F0h] [rbp-10h] BYREF
  enum DXGI_FORMAT v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+10Ch] [rbp+Ch]
  __int64 v71; // [rsp+114h] [rbp+14h]
  __int128 v72; // [rsp+120h] [rbp+20h]

  v60 = a6;
  v12 = a5[2] - *a5;
  v13 = a5[3] - a5[1];
  v14 = *((_DWORD *)a1 + 272);
  v62[0] = a7;
  v62[1] = a8;
  v59[0] = "DWM Temp Readback (bitmap1)";
  LODWORD(v59[1]) = 27;
  LODWORD(v52) = a3;
  v55 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v63 = 0LL;
  v64 = v12;
  v65 = v13;
  v62[2] = v12;
  v62[3] = v13;
  LOBYTE(v56) = 0;
  v72 = *(_OWORD *)v59;
  if ( v14 < 0 )
  {
    v51 = 2638;
    goto LABEL_40;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a2->lpVtbl->GetDesc)(a2, v68);
  v13 = v69;
  if ( *(_DWORD *)a4 != v69 )
  {
    v14 = -2147024809;
    v51 = 2643;
LABEL_40:
    v38 = v14;
    goto LABEL_41;
  }
  v15 = GetPixelFormatSize(v69) >> 3;
  if ( *((_QWORD *)a1 + 71) )
  {
    v52 = 0LL;
    v39 = CWarpLockSubresource::Create(a1, a2, a3, (struct CWarpLockSubresource **)&v52);
    v14 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, &dword_1803474D0, 0xAu, v39, 0xAA6u, 0LL);
      v50 = v52;
      if ( !v52 )
        goto LABEL_18;
    }
    else
    {
      v41 = v52;
      v42 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v52[5].lpVtbl, 8));
      v43 = HrCreateBitmapFromMemoryEx(
              a5[2] - *a5,
              a5[3] - a5[1],
              a4,
              v42,
              v42 * (a5[3] - a5[1]) + v15 * (a5[2] - *a5),
              (unsigned __int8 *)v52[5].lpVtbl + v42 * a5[1] + v15 * *a5,
              v52,
              &v55);
      v14 = v43;
      if ( v43 >= 0 )
      {
        CMILRefCountBaseT<IUnknown>::InternalRelease(v41);
        goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v44, &dword_1803474D0, 0xAu, v43, 0xAB8u, 0LL);
      v50 = v41;
    }
    CMILRefCountBaseT<IUnknown>::InternalRelease(v50);
    goto LABEL_18;
  }
  v16 = *((_QWORD *)a1 + 69);
  v68[0] = a5[2] - *a5;
  v68[1] = a5[3] - a5[1];
  v70 = 3LL;
  v71 = 0x20000LL;
  v17 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v16 + 40LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v53);
  v18 = v17(v16, v68, 0LL, &v53);
  v14 = v18;
  if ( v18 < 0 )
  {
    v51 = 2677;
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v53 + 40LL))(
    v53,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v72),
    v72);
  v19 = *a5;
  v20 = (__int64 *)*((_QWORD *)a1 + 70);
  v66[2] = 0;
  v66[0] = v19;
  v66[1] = a5[1];
  v66[3] = a5[2];
  v66[4] = a5[3];
  v66[5] = 1;
  v21 = *v20;
  v56 = 1;
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _DWORD, _DWORD, struct ID3D11Texture2D *, _DWORD, _DWORD *))(v21 + 368))(
    v20,
    v53,
    0LL,
    0LL,
    0,
    0,
    a2,
    (_DWORD)v52,
    v66);
  v22 = *((_QWORD *)a1 + 70);
  *(_OWORD *)v59 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(*(_QWORD *)v22 + 112LL))(
          v22,
          v53,
          0LL,
          1LL,
          0,
          v59);
  v14 = v18;
  if ( v18 < 0 )
  {
    v51 = 2704;
LABEL_23:
    v38 = v18;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1803474D0, 0xAu, v38, v51, 0LL);
    goto LABEL_18;
  }
  v23 = HrCreateBitmapFromMemoryEx(
          a5[2] - *a5,
          a5[3] - a5[1],
          a4,
          (unsigned int)v59[1],
          v15 * (a5[2] - *a5) + LODWORD(v59[1]) * (a5[3] - a5[1]),
          v59[0],
          0LL,
          &v55);
  v14 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, &dword_1803474D0, 0xAu, v23, 0xA9Eu, 0LL);
    goto LABEL_17;
  }
LABEL_7:
  v25 = v60;
  v26 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD **))(*(_QWORD *)v60 + 24LL);
  if ( v54 )
  {
    v45 = (__int64)v54 + *(int *)(v54[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v27 = v26(v25, v62, 2LL, &v54);
  v14 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_1803474D0, 0xAu, v27, 0xABEu, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _BYTE *))*v54)(v54, v67);
    if ( IsEqualPixelFormatInfo(a4, (const struct PixelFormatInfo *)v67) )
    {
      v29 = v55;
    }
    else
    {
      v46 = v55;
      v52 = 0LL;
      v47 = CFormatConverter::HrConvertBitmap(v55, (const struct PixelFormatInfo *)v67, (struct IBitmapSource **)&v52);
      v14 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v48, &dword_1803474D0, 0xAu, v47, 0xAC9u, 0LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v52);
        goto LABEL_16;
      }
      v29 = v52;
      v55 = (struct IBitmapSource *)v52;
      v52 = 0LL;
      if ( v46 )
      {
        v49 = (char *)v46 + *(int *)(*((_QWORD *)v46 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v49 + 16LL))(v49);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v52);
    }
    v30 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, __int64 *))(*v54 + 24LL))(v54, &v57, &v61);
    v14 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, &dword_1803474D0, 0xAu, v30, 0xAD0u, 0LL);
    }
    else
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(*v54 + 16LL))(v54, &v58);
      v14 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1803474D0, 0xAu, v32, 0xAD3u, 0LL);
      }
      else
      {
        v34 = (*(__int64 (__fastcall **)(void *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v29 + 24LL))(
                v29,
                &v63,
                v58,
                v57,
                v61);
        v14 = v34;
        if ( v34 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v35, &dword_1803474D0, 0xAu, v34, 0xAE2u, 0LL);
      }
    }
  }
LABEL_16:
  if ( (_BYTE)v56 )
LABEL_17:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 70) + 120LL))(*((_QWORD *)a1 + 70), v53, 0LL);
LABEL_18:
  v36 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v14, 0LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v54);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v53);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55);
  return v36;
}
