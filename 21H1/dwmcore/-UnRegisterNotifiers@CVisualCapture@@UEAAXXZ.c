/*
 * XREFs of ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x1801B87A0
 * Callers:
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1801F5548 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
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
