/*
 * XREFs of ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18003F0F4
 * Callers:
 *     ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x180021280 (-NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18003F1BC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006B0EC (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@0@@Z @ 0x18003F120 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delet.c)
 */

__int64 __fastcall std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(_QWORD *a1)
{
  __int64 result; // rax

  std::_Destroy_range<std::allocator<std::unique_ptr<CCachedVisualImage::CCachedTarget>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
