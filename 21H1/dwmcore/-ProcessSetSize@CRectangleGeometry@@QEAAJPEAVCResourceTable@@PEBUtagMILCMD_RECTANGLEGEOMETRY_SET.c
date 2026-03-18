/*
 * XREFs of ?ProcessSetSize@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETSIZE@@@Z @ 0x1801EC1AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetSize(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180346AA0)(
           (char *)this + SDWORD2(xmmword_180346AA0),
           &CRectangleGeometry::sc_Size,
           (char *)a3 + 8);
}
