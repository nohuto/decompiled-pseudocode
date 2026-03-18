/*
 * XREFs of ??1CD2DBitmapCache@@MEAA@XZ @ 0x180068058
 * Callers:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18005DE1C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800659A4 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??_GCWICBitmapRealization@@UEAAPEAXI@Z @ 0x180065FC0 (--_GCWICBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180066264 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802A1890 (--_ECBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x1802A18F0 (--_ECD2DBitmapCache@@MEAAPEAXI@Z.c)
 *     ??_ECColorKeyBitmapRealization@@UEAAPEAXI@Z @ 0x1802A1B00 (--_ECColorKeyBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802A468C (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802A50A8 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1800DE818 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ @ 0x1800EB140 (-InternalRelease@-$CMILRefCountBaseT@VID2DBitmapCacheSource@@@@IEAAKXZ.c)
 */

void __fastcall CD2DBitmapCache::~CD2DBitmapCache(CD2DBitmapCache *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx

  *(_QWORD *)this = &CD2DBitmapCache::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DBitmapCache::`vftable'{for `IDeviceResourceNotify'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 72;
  std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(
    *((_QWORD *)this + 6),
    *((_QWORD *)this + 7));
  v3 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 7) = v3;
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CD2DBitmapCache::CCachedBitmap>>>(v4, v3);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 6),
      (*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 5) )
    CMILRefCountBaseT<ID2DBitmapCacheSource>::InternalRelease();
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)this + 32);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 24);
}
