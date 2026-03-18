/*
 * XREFs of ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x18008EDE0
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x18008D33C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18008E8AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18008EE3C (-ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCachedVisualImage::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(this + 22);
}
