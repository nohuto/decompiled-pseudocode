/*
 * XREFs of ?ProcessSetSize@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETSIZE@@@Z @ 0x1802432F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewBox::ProcessSetSize(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D23D8)(
           (char *)this + SDWORD2(xmmword_1803D23D8),
           &CViewBox::sc_Size,
           (char *)a3 + 8);
}
