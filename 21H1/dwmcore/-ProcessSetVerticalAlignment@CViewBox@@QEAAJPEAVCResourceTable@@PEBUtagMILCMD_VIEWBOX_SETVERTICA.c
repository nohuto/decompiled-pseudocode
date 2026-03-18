/*
 * XREFs of ?ProcessSetVerticalAlignment@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETVERTICALALIGNMENT@@@Z @ 0x1801F5318
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewBox::ProcessSetVerticalAlignment(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETVERTICALALIGNMENT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180348520)(
           (char *)this + SDWORD2(xmmword_180348520),
           &CViewBox::sc_VerticalAlignment,
           (char *)a3 + 8);
}
