/*
 * XREFs of ?UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z @ 0x180173A88
 * Callers:
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801E6398 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1801E663C (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CResource::UnRegisterNotifierNoNULL(CResource *this, struct CResource *a2)
{
  CResource::UnRegisterNotifierInternal(this, a2);
}
