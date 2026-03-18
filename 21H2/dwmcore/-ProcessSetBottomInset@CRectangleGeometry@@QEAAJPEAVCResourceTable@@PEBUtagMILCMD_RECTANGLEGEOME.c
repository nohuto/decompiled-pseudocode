/*
 * XREFs of ?ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@@Z @ 0x1800E996C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetBottomInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D0590)(
           (char *)this + SDWORD2(xmmword_1803D0590),
           &CRectangleGeometry::sc_Bottom,
           (char *)a3 + 8);
}
