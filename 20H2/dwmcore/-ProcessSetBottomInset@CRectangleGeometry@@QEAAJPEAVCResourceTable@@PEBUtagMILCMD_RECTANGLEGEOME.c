/*
 * XREFs of ?ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@@Z @ 0x1800CE0D0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetBottomInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180341B10)(
           (char *)this + SDWORD2(xmmword_180341B10),
           &CRectangleGeometry::sc_Bottom,
           (char *)a3 + 8);
}
