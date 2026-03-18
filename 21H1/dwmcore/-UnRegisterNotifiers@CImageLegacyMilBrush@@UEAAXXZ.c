/*
 * XREFs of ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x1800B6200
 * Callers:
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800B5FA4 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x1800B5FD0 (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IMAGELEGACYMILBRUSH@.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[17]);
  this[17] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[18]);
  this[18] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[30]);
  this[30] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[25]);
  this[25] = 0LL;
}
