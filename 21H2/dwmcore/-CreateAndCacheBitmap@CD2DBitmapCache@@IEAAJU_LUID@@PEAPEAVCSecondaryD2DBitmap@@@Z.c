/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180065B74
 * Callers:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x1800686F0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 * Callees:
 *     ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x180032D30 (--1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180065DB8 (--$_Emplace_reallocate@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@VCCachedB.c)
 *     ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180065EE4 (--0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180067D24 (-CreateSecondaryD2DBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x180101100 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180101168 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache::CCachedBitmap ***this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  CD2DBitmapCache::CCachedBitmap *v3; // rbx
  CD2DBitmapCache::CCachedBitmap *v6; // rdi
  int Device; // eax
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(CD2DBitmapCache::CCachedBitmap **, char *); // rcx
  const struct PixelFormatInfo *v12; // rbx
  const struct D2D_SIZE_U *v13; // rax
  const struct CResourceTag *v14; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  CD2DBitmapCache::CCachedBitmap *v17; // rax
  unsigned int v18; // ecx
  CD2DBitmapCache::CCachedBitmap *v19; // rax
  CD2DBitmapCache::CCachedBitmap **v20; // rdx
  struct CSecondaryD2DBitmap *v21; // rax
  CD2DBitmapCache::CCachedBitmap *v23; // [rsp+30h] [rbp-30h] BYREF
  CD3DDevice *v24; // [rsp+38h] [rbp-28h] BYREF
  char v25[8]; // [rsp+40h] [rbp-20h] BYREF
  char v26[16]; // [rsp+48h] [rbp-18h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v6 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)this, a2, &v24);
  v9 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Device, 0xCFu, 0LL);
  }
  else
  {
    v10 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
    if ( dword_1803D7538 > *(_DWORD *)(v10 + 4) )
    {
      Init_thread_header(&dword_1803D7538);
      if ( dword_1803D7538 == -1 )
      {
        dword_1803D7548 = 24;
        qword_1803D7540 = (__int64)"DWM Sysmem Source Bitmap";
        Init_thread_footer(&dword_1803D7538);
      }
    }
    if ( dword_1803D7550 > *(_DWORD *)(v10 + 4) )
    {
      Init_thread_header(&dword_1803D7550);
      if ( dword_1803D7550 == -1 )
      {
        dword_1803D7560 = 23;
        qword_1803D7558 = (__int64)"DWM Cross-Device Bitmap";
        Init_thread_footer(&dword_1803D7550);
      }
    }
    v11 = (__int64 (__fastcall ***)(CD2DBitmapCache::CCachedBitmap **, char *))((char *)this[3]
                                                                              + *((int *)this[3][1] + 2)
                                                                              + 8);
    v12 = (const struct PixelFormatInfo *)(**v11)((CD2DBitmapCache::CCachedBitmap **)v11, v26);
    v13 = (const struct D2D_SIZE_U *)(*(__int64 (__fastcall **)(CD2DBitmapCache::CCachedBitmap **, char *))*this[3])(
                                       this[3],
                                       v25);
    v14 = (const struct CResourceTag *)off_1803D0E40[0];
    if ( this[4] )
      v14 = off_1803D0E48;
    v15 = CD3DDevice::CreateSecondaryD2DBitmap(v24, v14, v13, v12, &v23);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xD7u, 0LL);
      v3 = v23;
    }
    else
    {
      v17 = (CD2DBitmapCache::CCachedBitmap *)DefaultHeap::Alloc(0x10uLL);
      v3 = v23;
      if ( v17
        && (v19 = (CD2DBitmapCache::CCachedBitmap *)CD2DBitmapCache::CCachedBitmap::CCachedBitmap(
                                                      v17,
                                                      (struct IDeviceResourceNotify *)((char *)this
                                                                                     + *((int *)this[2] + 1)
                                                                                     + 16),
                                                      v23),
            v23 = v19,
            (v6 = v19) != 0LL) )
      {
        v20 = this[7];
        if ( v20 == this[8] )
        {
          std::vector<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>::_Emplace_reallocate<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>(
            this + 6,
            v20,
            &v23);
          v6 = v23;
        }
        else
        {
          v6 = 0LL;
          *v20 = v19;
          ++this[7];
        }
        v21 = v3;
        v3 = 0LL;
        *a3 = v21;
      }
      else
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0xDAu, 0LL);
      }
    }
  }
  if ( v24 )
    CD3DDevice::Release(v24);
  if ( v6 )
  {
    CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(v6);
    operator delete(v6, 0x10uLL);
  }
  if ( v3 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v3);
  return v9;
}
