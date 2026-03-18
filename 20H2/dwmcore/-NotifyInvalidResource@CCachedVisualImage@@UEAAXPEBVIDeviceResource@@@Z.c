/*
 * XREFs of ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x180021280
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18003F0F4 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

void __fastcall CCachedVisualImage::NotifyInvalidResource(CCachedVisualImage *this, const struct IDeviceResource *a2)
{
  std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((char *)this + 104, a2);
  CResource::NotifyOnChanged((char *)this - 80, 0LL, 0LL);
}
