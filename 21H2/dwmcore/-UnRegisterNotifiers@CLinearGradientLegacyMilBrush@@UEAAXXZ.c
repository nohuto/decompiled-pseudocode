/*
 * XREFs of ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1802070F0
 * Callers:
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x180206690 (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADI.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180208144 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  struct CResource *v2; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  this[13] = 0LL;
  v2 = this[16];
  if ( v2 )
  {
    DefaultHeap::Free(v2);
    this[16] = 0LL;
    *((_DWORD *)this + 31) = 0;
  }
  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
}
