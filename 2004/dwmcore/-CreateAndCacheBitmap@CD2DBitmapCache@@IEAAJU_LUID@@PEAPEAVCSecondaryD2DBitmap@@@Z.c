/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180092F94
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x18003E430 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18003CA70 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18003CAA0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003F0EC (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800931C8 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedB.c)
 *     ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180093330 (--0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180093394 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800B9A18 (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E31B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3218 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache *this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  CRenderTargetBitmap *v3; // rsi
  struct CSecondaryD2DBitmap *v7; // rdi
  CDeviceManager *v8; // rcx
  int Device; // eax
  __int64 v10; // rcx
  CD3DDevice *v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // rsi
  __int64 (__fastcall ***v14)(_QWORD, _BYTE *); // rcx
  const struct PixelFormatInfo *v15; // rsi
  const struct D2D_SIZE_U *v16; // rax
  const struct CResourceTag *v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  CD2DBitmapCache::CCachedBitmap *v20; // rax
  __int64 v21; // rcx
  CD2DBitmapCache::CCachedBitmap **v22; // rdx
  struct CSecondaryD2DBitmap *v23; // rax
  __int64 v25; // rcx
  CRenderTargetBitmap *v26; // rcx
  struct CSecondaryD2DBitmap *v27; // [rsp+30h] [rbp-30h] BYREF
  CD3DDevice *v28; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v28);
  Device = CDeviceManager::GetDevice(v8, a2, &v28);
  v11 = v28;
  v12 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Device, 0xCFu, 0LL);
  }
  else
  {
    v13 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( dword_180349280 > *(_DWORD *)(v13 + 4) )
    {
      Init_thread_header(&dword_180349280);
      if ( dword_180349280 == -1 )
      {
        dword_180349290 = 24;
        qword_180349288 = (__int64)"DWM Sysmem Source Bitmap";
        Init_thread_footer(&dword_180349280);
      }
    }
    if ( dword_180349298 > *(_DWORD *)(v13 + 4) )
    {
      Init_thread_header(&dword_180349298);
      if ( dword_180349298 == -1 )
      {
        dword_1803492A8 = 23;
        qword_1803492A0 = (__int64)"DWM Cross-Device Bitmap";
        Init_thread_footer(&dword_180349298);
      }
    }
    v14 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 3)
                                                    + 8LL
                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 8LL));
    v15 = (const struct PixelFormatInfo *)(**v14)(v14, v29);
    v16 = (const struct D2D_SIZE_U *)(***((__int64 (__fastcall ****)(_QWORD, CD3DDevice **))this + 3))(
                                       *((_QWORD *)this + 3),
                                       &v28);
    v17 = (const struct CResourceTag *)off_1803429D0[0];
    if ( *((_QWORD *)this + 4) )
      v17 = off_1803429D8;
    v18 = CD3DDevice::CreateSecondaryD2DBitmap(v11, v17, v16, v15, &v27);
    v12 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xD7u, 0LL);
      v3 = v27;
    }
    else
    {
      v20 = (CD2DBitmapCache::CCachedBitmap *)DefaultHeap::Alloc(0x10uLL);
      v3 = v27;
      if ( v20 )
        v20 = (CD2DBitmapCache::CCachedBitmap *)CD2DBitmapCache::CCachedBitmap::CCachedBitmap(
                                                  v20,
                                                  (CD2DBitmapCache *)((char *)this
                                                                    + *(int *)(*((_QWORD *)this + 2) + 4LL)
                                                                    + 16),
                                                  v27);
      v27 = v20;
      v7 = v20;
      if ( v20 )
      {
        v22 = (CD2DBitmapCache::CCachedBitmap **)*((_QWORD *)this + 7);
        if ( *((CD2DBitmapCache::CCachedBitmap ***)this + 8) == v22 )
        {
          std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::_Emplace_reallocate<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>(
            (char *)this + 48,
            v22,
            &v27);
          v7 = v27;
        }
        else
        {
          v7 = 0LL;
          *v22 = v20;
          *((_QWORD *)this + 7) += 8LL;
        }
        v23 = v3;
        v3 = 0LL;
        *a3 = v23;
      }
      else
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0xDAu, 0LL);
      }
    }
  }
  if ( v11 )
    CD3DDevice::Release(v11);
  if ( v7 )
  {
    v25 = *((_QWORD *)v7 + 1);
    if ( v25 )
    {
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v25 + 104), *(const struct IDeviceResourceNotify **)v7);
      v26 = (CRenderTargetBitmap *)*((_QWORD *)v7 + 1);
      if ( v26 )
        CRenderTargetBitmap::Release(v26);
    }
    operator delete(v7);
  }
  if ( v3 )
    CRenderTargetBitmap::Release(v3);
  return v12;
}
