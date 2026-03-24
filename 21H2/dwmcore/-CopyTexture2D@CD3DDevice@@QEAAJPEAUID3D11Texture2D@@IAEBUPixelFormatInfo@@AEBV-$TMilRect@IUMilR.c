/*
 * XREFs of ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180044B60
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18003B5E0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180044980 (-GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180248CB0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025290 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180032238 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x18003B9E0 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003C1AC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x18004511C (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078248 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D09C8 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802197F8 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
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
  unsigned int v13; // ecx
  int v14; // edi
  int v15; // r15d
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, _DWORD *, __int64, _QWORD **); // rbx
  int v28; // eax
  void *v29; // rbx
  unsigned int v30; // ebx
  int v32; // eax
  unsigned int v33; // ecx
  struct IUnknown *v34; // rbx
  unsigned int v35; // r9d
  int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  struct IBitmapSource *v39; // rsi
  int v40; // eax
  unsigned int v41; // ecx
  char *v42; // rcx
  int v43; // r9d
  struct IUnknown *v44; // rcx
  unsigned int v45; // [rsp+20h] [rbp-E0h]
  unsigned int v46; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v47; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v49; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v50; // [rsp+68h] [rbp-98h] BYREF
  int v51; // [rsp+70h] [rbp-90h]
  unsigned int v52; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v53; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v54[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v57[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h] BYREF
  int v59; // [rsp+B8h] [rbp-48h]
  unsigned int v60; // [rsp+BCh] [rbp-44h]
  _DWORD v61[6]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v62[24]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v63[4]; // [rsp+F0h] [rbp-10h] BYREF
  enum DXGI_FORMAT v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+10Ch] [rbp+Ch]
  __int64 v66; // [rsp+114h] [rbp+14h]
  __int128 v67; // [rsp+120h] [rbp+20h]

  v55 = a6;
  v12 = a5[2] - *a5;
  v13 = a5[3] - a5[1];
  v14 = *((_DWORD *)a1 + 282);
  v57[0] = a7;
  v57[1] = a8;
  v54[0] = "DWM Temp Readback (bitmap1)";
  LODWORD(v54[1]) = 27;
  LODWORD(v47) = a3;
  v50 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v58 = 0LL;
  v59 = v12;
  v60 = v13;
  v57[2] = v12;
  v57[3] = v13;
  LOBYTE(v51) = 0;
  v67 = *(_OWORD *)v54;
  if ( v14 < 0 )
  {
    v43 = v14;
    v46 = 3241;
    goto LABEL_41;
  }
  ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a2->lpVtbl->GetDesc)(a2, v63);
  if ( *(_DWORD *)a4 != v64 )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v64, &dword_1802DD0B8, 0xAu, -2147024809, 0xCAEu, 0LL);
    goto LABEL_17;
  }
  v15 = GetPixelFormatSize(v64) >> 3;
  if ( !*((_QWORD *)a1 + 76) )
  {
    v16 = *((_QWORD *)a1 + 74);
    v63[0] = a5[2] - *a5;
    v63[1] = a5[3] - a5[1];
    v65 = 3LL;
    v66 = 0x20000LL;
    v17 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v16 + 40LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v48);
    v18 = v17(v16, v63, 0LL, &v48);
    v14 = v18;
    if ( v18 < 0 )
    {
      v45 = 3280;
    }
    else
    {
      (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v48 + 40LL))(
        v48,
        &WKPDID_D3DDebugObjectName,
        DWORD2(v67),
        v67);
      v20 = *a5;
      v21 = (__int64 *)*((_QWORD *)a1 + 75);
      v61[2] = 0;
      v61[0] = v20;
      v61[1] = a5[1];
      v61[3] = a5[2];
      v61[4] = a5[3];
      v61[5] = 1;
      v22 = *v21;
      v51 = 1;
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, _DWORD, _DWORD, struct ID3D11Texture2D *, _DWORD, _DWORD *))(v22 + 368))(
        v21,
        v48,
        0LL,
        0LL,
        0,
        0,
        a2,
        (_DWORD)v47,
        v61);
      v23 = *((_QWORD *)a1 + 75);
      *(_OWORD *)v54 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(*(_QWORD *)v23 + 112LL))(
              v23,
              v48,
              0LL,
              1LL,
              0,
              v54);
      v14 = v18;
      if ( v18 >= 0 )
      {
        v24 = HrCreateBitmapFromMemoryEx(
                a5[2] - *a5,
                a5[3] - a5[1],
                a4,
                (unsigned int)v54[1],
                v15 * (a5[2] - *a5) + LODWORD(v54[1]) * (a5[3] - a5[1]),
                v54[0],
                0LL,
                &v50);
        v14 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_1802DD0B8, 0xAu, v24, 0xCF9u, 0LL);
          goto LABEL_16;
        }
        goto LABEL_7;
      }
      v45 = 3307;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802DD0B8, 0xAu, v18, v45, 0LL);
    goto LABEL_17;
  }
  v47 = 0LL;
  v32 = CWarpLockSubresource::Create(a1, a2, a3, (struct CWarpLockSubresource **)&v47);
  v14 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_1802DD0B8, 0xAu, v32, 0xD01u, 0LL);
    v44 = v47;
    if ( !v47 )
      goto LABEL_17;
    goto LABEL_37;
  }
  v34 = v47;
  v35 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&v47[5].lpVtbl, 8));
  v36 = HrCreateBitmapFromMemoryEx(
          a5[2] - *a5,
          a5[3] - a5[1],
          a4,
          v35,
          v35 * (a5[3] - a5[1]) + v15 * (a5[2] - *a5),
          (unsigned __int8 *)v47[5].lpVtbl + v35 * a5[1] + v15 * *a5,
          v47,
          &v50);
  v14 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v37, &dword_1802DD0B8, 0xAu, v36, 0xD13u, 0LL);
    v44 = v34;
LABEL_37:
    CRenderTargetBitmap::Release((CRenderTargetBitmap *)v44);
    goto LABEL_17;
  }
  CRenderTargetBitmap::Release((CRenderTargetBitmap *)v34);
LABEL_7:
  v26 = v55;
  v27 = *(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD **))(*(_QWORD *)v55 + 24LL);
  if ( v49 )
  {
    v38 = *(int *)(v49[1] + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)((char *)v49 + v38 + 8) + 16LL))((__int64)v49 + v38 + 8);
  }
  v28 = v27(v26, v57, 2LL, &v49);
  v14 = v28;
  if ( v28 < 0 )
  {
    v46 = 3353;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _BYTE *))*v49)(v49, v62);
    if ( IsEqualPixelFormatInfo(a4, (const struct PixelFormatInfo *)v62) )
    {
      v29 = v50;
    }
    else
    {
      v39 = v50;
      v47 = 0LL;
      v40 = CFormatConverter::HrConvertBitmap(v50, (const struct PixelFormatInfo *)v62, (struct IBitmapSource **)&v47);
      v14 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, &dword_1802DD0B8, 0xAu, v40, 0xD24u, 0LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v47);
        goto LABEL_15;
      }
      v29 = v47;
      v50 = (struct IBitmapSource *)v47;
      v47 = 0LL;
      if ( v39 )
      {
        v42 = (char *)v39 + *(int *)(*((_QWORD *)v39 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v42 + 16LL))(v42);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v47);
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, __int64 *))(*v49 + 24LL))(v49, &v52, &v56);
    v14 = v28;
    if ( v28 < 0 )
    {
      v46 = 3371;
    }
    else
    {
      v28 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(*v49 + 16LL))(v49, &v53);
      v14 = v28;
      if ( v28 < 0 )
      {
        v46 = 3374;
      }
      else
      {
        v28 = (*(__int64 (__fastcall **)(void *, __int64 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v29 + 24LL))(
                v29,
                &v58,
                v53,
                v52,
                v56);
        v14 = v28;
        if ( v28 >= 0 )
          goto LABEL_15;
        v46 = 3389;
      }
    }
  }
  v43 = v28;
LABEL_41:
  MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802DD0B8, 0xAu, v43, v46, 0LL);
LABEL_15:
  if ( (_BYTE)v51 )
LABEL_16:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 75) + 120LL))(*((_QWORD *)a1 + 75), v48, 0LL);
LABEL_17:
  v30 = CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v14, 0LL);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v49);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v48);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v50);
  return v30;
}
