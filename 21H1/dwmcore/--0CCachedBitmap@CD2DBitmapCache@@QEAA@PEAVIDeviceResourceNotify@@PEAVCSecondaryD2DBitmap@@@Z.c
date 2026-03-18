/*
 * XREFs of ??0CCachedBitmap@CD2DBitmapCache@@QEAA@PEAVIDeviceResourceNotify@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18002BA0C
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18002BA70 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x18002CD68 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
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
    CMILCOMBase::InternalAddRef(a3);
    a3 = (struct CSecondaryD2DBitmap *)*((_QWORD *)this + 1);
  }
  v7 = a2;
  v5 = (_QWORD *)*((_QWORD *)a3 + 8);
  if ( *((_QWORD **)a3 + 9) == v5 )
  {
    std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>((char *)a3 + 56, v5, &v7);
  }
  else
  {
    *v5 = a2;
    *((_QWORD *)a3 + 8) += 8LL;
  }
  return this;
}
