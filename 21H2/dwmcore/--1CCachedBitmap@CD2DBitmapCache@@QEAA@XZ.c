/*
 * XREFs of ??1CCachedBitmap@CD2DBitmapCache@@QEAA@XZ @ 0x180032D30
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180065B74 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U?$default_delete@VCCachedBitmap@CD2DBitmapCache@@@std@@@std@@@0@@Z @ 0x1800DE818 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedBitmap@CD2DBitmapCache@@U-$default_delete@V.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x1800FF28C (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180032D6C (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

void __fastcall CD2DBitmapCache::CCachedBitmap::~CCachedBitmap(CD2DBitmapCache::CCachedBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v2 + 104), *(const struct IDeviceResourceNotify **)this);
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v3);
  }
}
