/*
 * XREFs of ?ProcessSetEndPoint@CLineGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEGEOMETRY_SETENDPOINT@@@Z @ 0x1801D4AE8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLineGeometry::ProcessSetEndPoint(
        CLineGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEGEOMETRY_SETENDPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180344248)(
           (char *)this + SDWORD2(xmmword_180344248),
           &CLineGeometry::sc_EndPoint,
           (char *)a3 + 8);
}
