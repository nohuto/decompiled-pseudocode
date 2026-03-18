/*
 * XREFs of ?UnRegisterNotifierNoNULL@CResource@@QEAAXPEAV1@@Z @ 0x1801A5FAC
 * Callers:
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1800CF5F4 (--1CProxyGeometry@@MEAA@XZ.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x18023A004 (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CResource::UnRegisterNotifierNoNULL(CResource *this, struct CResource *a2)
{
  CResource::UnRegisterNotifierInternal(this, a2);
}
