/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003C2A8
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18003E6BC (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F35C (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800927B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180092DEC (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180092E3C (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x1800CF248 (-UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801558AC (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x18019CDD4 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x18019D1F0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x18019D408 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryD2DBitmap *this, __int64 a2, __int64 *a3)
{
  char *v3; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagRECT *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  enum DXGI_FORMAT v13; // esi
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rcx
  struct IBitmapLock *v18; // rdx
  struct IBitmapLock *v19; // rax
  __int64 v20; // rcx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v22; // [rsp+20h] [rbp-49h]
  struct IBitmapLock *v23; // [rsp+30h] [rbp-39h] BYREF
  struct ID3D11Resource *v24; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v26[4]; // [rsp+44h] [rbp-25h] BYREF
  void *v27; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-19h] BYREF
  struct tagRECT v29; // [rsp+60h] [rbp-9h] BYREF
  struct IBitmapLock *v30[2]; // [rsp+70h] [rbp+7h] BYREF

  v3 = (char *)this + 248;
  *(_QWORD *)&v29.left = 0LL;
  *(_QWORD *)&v29.right = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain((char *)this + 248)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v12 = -2147024809;
    v15 = -2147024809;
    v22 = 57;
    goto LABEL_30;
  }
  if ( *((float *)this + 52) == 96.0 && *((float *)this + 53) == 96.0 )
  {
    v10 = *a3;
    v29 = *v9;
    v11 = (*(__int64 (__fastcall **)(__int64 *, struct tagRECT *, struct IBitmapLock **))(v10 + 32))(a3, &v29, &v23);
    v12 = v11;
    if ( v11 >= 0 )
      goto LABEL_6;
    v22 = 64;
LABEL_18:
    v15 = v11;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v15, v22, 0LL);
    goto LABEL_15;
  }
  *(struct tagRECT *)v30 = *v9;
  v29 = *(struct tagRECT *)CSecondaryD2DBitmap::GetPrefilteredRect(this, v28, v30);
  v11 = CSecondaryD2DBitmap::CreateScaledLock(this, &v29, a3, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    v22 = 70;
    goto LABEL_18;
  }
LABEL_6:
  v13 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct IBitmapLock *, struct IBitmapLock **))v23)(v23, v30);
  if ( v13 != *((_DWORD *)this + 42) )
  {
    v30[0] = 0LL;
    v16 = CSecondaryD2DBitmap::FormatConvertLock(this, v23, v30);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x50u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v30);
      goto LABEL_15;
    }
    v18 = v23;
    v19 = v30[0];
    v30[0] = 0LL;
    v23 = v19;
    if ( v18 )
    {
      v20 = (__int64)v18 + *(int *)(*((_QWORD *)v18 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v30);
  }
  v11 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v23 + 16LL))(v23, &v25);
  v12 = v11;
  if ( v11 < 0 )
  {
    v22 = 86;
    goto LABEL_18;
  }
  v11 = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v23 + 24LL))(v23, v26, &v27);
  v12 = v11;
  if ( v11 < 0 )
  {
    v22 = 90;
    goto LABEL_18;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v13);
    McTemplateU0qqqq_EventWriteTransfer(
      PixelFormatSize >> 3,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v29.right - v29.left,
      v29.bottom - v29.top,
      v13,
      PixelFormatSize >> 3);
  }
  if ( v24 )
    ((void (__fastcall *)(struct ID3D11Resource *))v24->lpVtbl->Release)(v24);
  v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this + 15))(
          *((_QWORD *)this + 15),
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    v22 = 97;
    goto LABEL_18;
  }
  CD3DDevice::UpdateSubresource(
    (CD3DDevice *)((*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) - 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 3)
                                                                                             + 24LL) != 0LL)),
    v24,
    &v29,
    v27,
    v25,
    0);
  CSecondaryBitmap::AddValidRect(v3, a2);
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
  return v12;
}
