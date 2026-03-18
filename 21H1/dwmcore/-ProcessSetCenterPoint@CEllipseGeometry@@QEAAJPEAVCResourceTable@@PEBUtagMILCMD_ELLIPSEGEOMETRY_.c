/*
 * XREFs of ?ProcessSetCenterPoint@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT@@@Z @ 0x1801C4214
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEllipseGeometry::ProcessSetCenterPoint(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180348130)(
           (char *)this + SDWORD2(xmmword_180348130),
           &CEllipseGeometry::sc_CenterPoint,
           (char *)a3 + 8);
}
