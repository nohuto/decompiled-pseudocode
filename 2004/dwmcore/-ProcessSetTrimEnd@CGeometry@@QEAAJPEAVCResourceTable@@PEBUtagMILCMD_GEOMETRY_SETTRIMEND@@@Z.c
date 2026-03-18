/*
 * XREFs of ?ProcessSetTrimEnd@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRIMEND@@@Z @ 0x1801B7564
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::ProcessSetTrimEnd(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRY_SETTRIMEND *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180343C28)(
           (char *)this + SDWORD2(xmmword_180343C28),
           &CGeometry::sc_TrimEnd,
           (char *)a3 + 8);
}
