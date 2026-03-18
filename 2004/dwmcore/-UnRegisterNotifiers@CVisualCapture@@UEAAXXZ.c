/*
 * XREFs of ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x1801B5E30
 * Callers:
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1801F2BC8 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualCapture::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[235]);
  this[235] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[236]);
  this[236] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[237]);
  this[237] = 0LL;
}
