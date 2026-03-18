/*
 * XREFs of ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x1801B5C60
 * Callers:
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x1801B4ED8 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801B9D10 (--1CCombinedGeometry@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCombinedGeometry::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
  this[21] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
  this[22] = 0LL;
}
