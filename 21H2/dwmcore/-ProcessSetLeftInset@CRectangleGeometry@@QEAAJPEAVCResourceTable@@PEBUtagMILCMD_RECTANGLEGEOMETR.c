/*
 * XREFs of ?ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@@Z @ 0x1800E99A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetLeftInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D0638)(
           (char *)this + SDWORD2(xmmword_1803D0638),
           &CRectangleGeometry::sc_Left,
           (char *)a3 + 8);
}
