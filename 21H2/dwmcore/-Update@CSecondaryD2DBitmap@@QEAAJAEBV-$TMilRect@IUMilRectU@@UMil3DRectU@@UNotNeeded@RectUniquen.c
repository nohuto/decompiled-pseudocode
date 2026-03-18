/*
 * XREFs of ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18006A054
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800686F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A26C (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z @ 0x18006A2C8 (-UpdateSubresource@CD3DDevice@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006A370 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006A3C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801121E8 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1802A6ADC (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x1802A6F68 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x1802A71B4 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Update(CSecondaryD2DBitmap *this, __int64 a2, __int64 *a3)
{
  char *v3; // r15
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagRECT *v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  enum DXGI_FORMAT v15; // r14d
  int v17; // r9d
  int v18; // eax
  unsigned int v19; // ecx
  struct IBitmapLock *v20; // rdx
  struct IBitmapLock *v21; // rax
  __int64 v22; // rcx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v24; // [rsp+20h] [rbp-49h]
  struct IBitmapLock *v25; // [rsp+30h] [rbp-39h] BYREF
  struct ID3D11Resource *v26; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v28[4]; // [rsp+44h] [rbp-25h] BYREF
  void *v29; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-19h] BYREF
  struct tagRECT v31; // [rsp+60h] [rbp-9h] BYREF
  struct IBitmapLock *v32[2]; // [rsp+70h] [rbp+7h] BYREF

  v3 = (char *)this + 248;
  *(_QWORD *)&v31.left = 0LL;
  *(_QWORD *)&v31.right = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(
                           (char *)this + 248,
                           a2)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7, v7, v9, v10) )
  {
    v14 = -2147024809;
    v17 = -2147024809;
    v24 = 57;
    goto LABEL_30;
  }
  if ( *((float *)this + 52) == 96.0 && *((float *)this + 53) == 96.0 )
  {
    v12 = *a3;
    v31 = *v11;
    v13 = (*(__int64 (__fastcall **)(__int64 *, struct tagRECT *, struct IBitmapLock **))(v12 + 32))(a3, &v31, &v25);
    v14 = v13;
    if ( v13 >= 0 )
      goto LABEL_6;
    v24 = 64;
LABEL_18:
    v17 = v13;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v17, v24, 0LL);
    goto LABEL_15;
  }
  *(struct tagRECT *)v32 = *v11;
  v31 = *(struct tagRECT *)CSecondaryD2DBitmap::GetPrefilteredRect(this, v30, v32);
  v13 = CSecondaryD2DBitmap::CreateScaledLock(this, &v31, a3, &v25);
  v14 = v13;
  if ( v13 < 0 )
  {
    v24 = 70;
    goto LABEL_18;
  }
LABEL_6:
  v15 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct IBitmapLock *, struct IBitmapLock **))v25)(v25, v32);
  if ( v15 != *((_DWORD *)this + 42) )
  {
    v32[0] = 0LL;
    v18 = CSecondaryD2DBitmap::FormatConvertLock(this, v25, v32);
    v14 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x50u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v32);
      goto LABEL_15;
    }
    v20 = v25;
    v21 = v32[0];
    v32[0] = 0LL;
    v25 = v21;
    if ( v20 )
    {
      v22 = (__int64)v20 + *(int *)(*((_QWORD *)v20 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v32);
  }
  v13 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)v25 + 16LL))(v25, &v27);
  v14 = v13;
  if ( v13 < 0 )
  {
    v24 = 86;
    goto LABEL_18;
  }
  v13 = (*(__int64 (__fastcall **)(struct IBitmapLock *, _BYTE *, void **))(*(_QWORD *)v25 + 24LL))(v25, v28, &v29);
  v14 = v13;
  if ( v13 < 0 )
  {
    v24 = 90;
    goto LABEL_18;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    PixelFormatSize = GetPixelFormatSize(v15);
    McTemplateU0qqqq_EventWriteTransfer(
      PixelFormatSize >> 3,
      (unsigned int)&EVTDESC_ETWGUID_BITMAPCOPYEVENT,
      v31.right - v31.left,
      v31.bottom - v31.top,
      v15,
      PixelFormatSize >> 3);
  }
  if ( v26 )
    ((void (__fastcall *)(struct ID3D11Resource *))v26->lpVtbl->Release)(v26);
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Resource **))this + 15))(
          *((_QWORD *)this + 15),
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v26);
  v14 = v13;
  if ( v13 < 0 )
  {
    v24 = 97;
    goto LABEL_18;
  }
  CD3DDevice::UpdateSubresource(
    (CD3DDevice *)((*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) - 16LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 3)
                                                                                             + 24LL) != 0LL)),
    v26,
    &v31,
    v29,
    v27,
    0);
  CSecondaryBitmap::AddValidRect(v3, a2);
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v25);
  return v14;
}
