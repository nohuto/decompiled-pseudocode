/*
 * XREFs of ?UnRegisterNotifiers@CCachedVisualImage@@MEAAXXZ @ 0x180093B80
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x180033DFC (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18003623C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x180093BDC (-ProcessUpdate@CCachedVisualImage@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
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
