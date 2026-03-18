/*
 * XREFs of ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180065EE4
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180065B74 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800D5CA8 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 */

CD2DBitmapCache::CCachedBitmap *__fastcall CD2DBitmapCache::CCachedBitmap::CCachedBitmap(
        CD2DBitmapCache::CCachedBitmap *this,
        struct IDeviceResourceNotify *a2,
        struct CSecondaryD2DBitmap *a3)
{
  _QWORD *v5; // rdx
  struct IDeviceResourceNotify *v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
  {
    CMILRefCountImpl::AddReference((struct CSecondaryD2DBitmap *)((char *)a3 + 8));
    a3 = (struct CSecondaryD2DBitmap *)*((_QWORD *)this + 1);
  }
  v5 = (_QWORD *)*((_QWORD *)a3 + 8);
  v7 = a2;
  if ( v5 == *((_QWORD **)a3 + 9) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>((char *)a3 + 56, v5, &v7);
  }
  else
  {
    *v5 = a2;
    *((_QWORD *)a3 + 8) += 8LL;
  }
  return this;
}
