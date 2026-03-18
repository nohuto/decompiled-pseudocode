/*
 * XREFs of ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x1800430E0
 * Callers:
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x180043188 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SOLIDCOLORLEGAC.c)
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800C7824 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSolidColorLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
  this[8] = 0LL;
}
