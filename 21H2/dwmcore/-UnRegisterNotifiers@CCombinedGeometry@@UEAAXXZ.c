/*
 * XREFs of ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x1800CF570
 * Callers:
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1800CE0D4 (--1CCombinedGeometry@@MEAA@XZ.c)
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x1800CE1C4 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCombinedGeometry::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[23]);
  this[23] = 0LL;
}
