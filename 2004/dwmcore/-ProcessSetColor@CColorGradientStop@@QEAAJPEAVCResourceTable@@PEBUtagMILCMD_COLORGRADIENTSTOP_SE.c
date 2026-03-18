/*
 * XREFs of ?ProcessSetColor@CColorGradientStop@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORGRADIENTSTOP_SETCOLOR@@@Z @ 0x1801B9BD0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorGradientStop::ProcessSetColor(
        CColorGradientStop *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORGRADIENTSTOP_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180343CD0)(
           (char *)this + SDWORD2(xmmword_180343CD0),
           &CColorGradientStop::sc_Color,
           (char *)a3 + 8);
}
