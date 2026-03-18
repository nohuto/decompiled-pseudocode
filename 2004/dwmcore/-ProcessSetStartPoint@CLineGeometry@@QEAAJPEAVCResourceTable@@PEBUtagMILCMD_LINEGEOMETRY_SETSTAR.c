/*
 * XREFs of ?ProcessSetStartPoint@CLineGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEGEOMETRY_SETSTARTPOINT@@@Z @ 0x1801D4B14
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLineGeometry::ProcessSetStartPoint(
        CLineGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEGEOMETRY_SETSTARTPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180344210)(
           (char *)this + SDWORD2(xmmword_180344210),
           &CLineGeometry::sc_StartPoint,
           (char *)a3 + 8);
}
