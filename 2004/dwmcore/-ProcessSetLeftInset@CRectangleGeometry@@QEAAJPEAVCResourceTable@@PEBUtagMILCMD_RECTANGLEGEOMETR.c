/*
 * XREFs of ?ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@@Z @ 0x1800CF0B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetLeftInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180342A30)(
           (char *)this + SDWORD2(xmmword_180342A30),
           &CRectangleGeometry::sc_Left,
           (char *)a3 + 8);
}
