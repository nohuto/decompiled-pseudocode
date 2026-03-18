/*
 * XREFs of ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802499C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800269E8 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180027CA8 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180028DF0 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800292F8 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180029704 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180029B2C (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180029B7C (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CopyPixels(__int64 a1, int *a2, unsigned int a3, unsigned int a4, unsigned __int8 *a5)
{
  int v7; // eax
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 PixelFormatSize; // al
  int v13; // r10d
  enum DXGI_FORMAT v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 (__fastcall ***v19)(_QWORD, unsigned __int8 **); // rcx
  const struct PixelFormatInfo *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  char *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct CD3DDevice *v27; // rdi
  __int64 v28; // rbx
  __int64 (__fastcall ***v29)(_QWORD, unsigned __int8 **); // rcx
  struct PixelFormatInfo *v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  struct IBitmapSource *v34; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v35[2]; // [rsp+58h] [rbp-28h] BYREF
  struct IUnknown *v36; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 *v37; // [rsp+68h] [rbp-18h] BYREF
  int v38; // [rsp+70h] [rbp-10h]
  int v39; // [rsp+74h] [rbp-Ch]

  v38 = *(_DWORD *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 60);
  v36 = 0LL;
  v37 = 0LL;
  v39 = v7;
  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v37, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v10) )
  {
    v17 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024809, 0xBBu, 0LL);
  }
  else if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 96), &v37, (unsigned int *)&v34, v35, &v36) )
  {
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
    v13 = (_DWORD)v34 * a2[1] + *a2 * (PixelFormatSize >> 3);
    v15 = CBitmap::CopyPixelsHelper(
            v14,
            a2[2] - *a2,
            a2[3] - a2[1],
            (unsigned int)v34,
            v35[0] - v13,
            &v37[v13],
            a3,
            a4,
            a5);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xD9u, 0LL);
  }
  else
  {
    v18 = *(_QWORD *)(a1 - 80);
    v34 = 0LL;
    v19 = (__int64 (__fastcall ***)(_QWORD, unsigned __int8 **))(a1 + *(int *)(v18 + 12) - 80LL);
    v20 = (const struct PixelFormatInfo *)(**v19)(v19, &v37);
    v21 = HrCreateBitmapFromMemoryEx(a2[2] - *a2, a2[3] - a2[1], v20, a3, a4, a5, 0LL, &v34);
    v17 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xE5u, 0LL);
    }
    else
    {
      *(_QWORD *)v35 = 0LL;
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)v35);
      v23 = (char *)v34 + *(int *)(*((_QWORD *)v34 + 1) + 4LL) + 8;
      v24 = (**(__int64 (__fastcall ***)(char *, GUID *, unsigned int *))v23)(
              v23,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              v35);
      v17 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xE8u, 0LL);
      }
      else
      {
        v26 = a1 + *(int *)(*(_QWORD *)(a1 - 80) + 8LL) - 80LL;
        v27 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        v28 = *(_QWORD *)v35;
        v29 = (__int64 (__fastcall ***)(_QWORD, unsigned __int8 **))(*(int *)(*(_QWORD *)(a1 - 80) + 12LL) + a1 - 80);
        v30 = (struct PixelFormatInfo *)(**v29)(v29, &v37);
        v31 = CD3DDevice::CopyTexture2D(
                v27,
                *(struct ID3D11Texture2D **)(a1 + 24),
                *(_DWORD *)(a1 + 144),
                v30,
                a2,
                v28,
                0,
                0);
        v17 = v31;
        if ( v31 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xEFu, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v35);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
  }
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v36);
  return v17;
}
