/*
 * XREFs of ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1801B5D40
 * Callers:
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x1801B52D4 (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADI.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1801B6918 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::UnRegisterNotifiers(struct CResource **this)
{
  struct CResource *v2; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[11]);
  this[11] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  this[12] = 0LL;
  v2 = this[15];
  if ( v2 )
  {
    operator delete(v2);
    this[15] = 0LL;
    *((_DWORD *)this + 29) = 0;
  }
  CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
  this[10] = 0LL;
}
