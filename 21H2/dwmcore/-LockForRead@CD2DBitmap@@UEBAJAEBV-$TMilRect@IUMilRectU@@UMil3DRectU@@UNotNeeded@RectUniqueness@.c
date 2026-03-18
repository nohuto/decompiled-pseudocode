/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180020D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x18001FEA0 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180020FBC (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006A370 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006A3C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@VCBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapLock@@@Z @ 0x18006D308 (--4-$com_ptr_t@VCBitmapLock@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapLock@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18006EA24 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18006F31C (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1802900FC (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, int *a2, CBitmapLock **a3)
{
  int v4; // eax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 PixelFormatSize; // al
  unsigned int v12; // r13d
  __int64 v13; // rax
  CBitmapLock *v14; // rax
  unsigned int v15; // ecx
  CBitmapLock *v16; // rbx
  __int64 (__fastcall ***v17)(_QWORD, CBitmapLock **); // rcx
  const struct PixelFormatInfo *v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edi
  char *v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, __int64 *); // rcx
  const struct PixelFormatInfo *v25; // rax
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rcx
  struct CD3DDevice *v29; // rdi
  struct IBitmapDest *v30; // rbx
  __int64 (__fastcall ***v31)(_QWORD, __int64 *); // rcx
  struct PixelFormatInfo *v32; // rax
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  struct IBitmapDest *v37; // [rsp+60h] [rbp-29h] BYREF
  void *v38; // [rsp+68h] [rbp-21h] BYREF
  struct IUnknown *v39; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int8 *v40; // [rsp+78h] [rbp-11h] BYREF
  __int64 v41; // [rsp+80h] [rbp-9h] BYREF
  int v42; // [rsp+88h] [rbp-1h]
  int v43; // [rsp+8Ch] [rbp+3h]
  CBitmapLock *v44[2]; // [rsp+90h] [rbp+7h] BYREF

  v42 = *(_DWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 60);
  v39 = 0LL;
  v41 = 0LL;
  v43 = v4;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(&v41, a2)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7, v7, v9, v10) )
  {
    v21 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x105u, 0LL);
  }
  else if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 96), &v40, (unsigned int *)&v38, (unsigned int *)&v37, &v39) )
  {
    PixelFormatSize = GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 72));
    v12 = (unsigned int)v38;
    v44[0] = 0LL;
    v13 = *a2 * (PixelFormatSize >> 3) + (int)v38 * a2[1];
    LODWORD(v38) = v13;
    v41 = v13;
    v14 = (CBitmapLock *)DefaultHeap::Alloc(0xA0uLL);
    if ( v14 )
      v14 = CBitmapLock::CBitmapLock(v14);
    wil::com_ptr_t<CBitmapLock,wil::err_returncode_policy>::operator=(v44, v14);
    v16 = v44[0];
    if ( v44[0] )
    {
      v17 = (__int64 (__fastcall ***)(_QWORD, CBitmapLock **))(a1 + *(int *)(*(_QWORD *)(a1 - 80) + 12LL) - 80LL);
      v18 = (const struct PixelFormatInfo *)(**v17)(v17, v44);
      v19 = CBitmapLock::HrInit(
              v16,
              (struct IBitmapUnlock *)((a1 + 16) & -(__int64)(a1 != 96)),
              a2[2] - *a2,
              a2[3] - a2[1],
              v18,
              v12,
              (int)v37 - (int)v38,
              &v40[v41],
              WICBitmapLockRead,
              0,
              v39);
      v21 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x125u, 0LL);
        v23 = (char *)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      else
      {
        *a3 = v16;
      }
    }
    else
    {
      v21 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x119u, 0LL);
    }
  }
  else
  {
    v37 = 0LL;
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v37);
    v24 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(a1 + *(int *)(*(_QWORD *)(a1 - 80) + 12LL) - 80LL);
    v25 = (const struct PixelFormatInfo *)(**v24)(v24, &v41);
    v26 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], v25, &v37);
    v21 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x130u, 0LL);
    }
    else
    {
      v28 = a1 + *(int *)(*(_QWORD *)(a1 - 80) + 8LL) - 80LL;
      v29 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v30 = v37;
      v31 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(*(int *)(*(_QWORD *)(a1 - 80) + 12LL) + a1 - 80);
      v32 = (struct PixelFormatInfo *)(**v31)(v31, &v41);
      v33 = CD3DDevice::CopyTexture2D(
              v29,
              *(struct ID3D11Texture2D **)(a1 + 24),
              *(_DWORD *)(a1 + 144),
              v32,
              a2,
              (__int64)v30,
              0,
              0);
      v21 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x137u, 0LL);
      }
      else
      {
        v35 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, CBitmapLock **))(*(_QWORD *)v37 + 24LL))(
                v37,
                0LL,
                1LL,
                a3);
        v21 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x13Cu, 0LL);
      }
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v37);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v39);
  return v21;
}
