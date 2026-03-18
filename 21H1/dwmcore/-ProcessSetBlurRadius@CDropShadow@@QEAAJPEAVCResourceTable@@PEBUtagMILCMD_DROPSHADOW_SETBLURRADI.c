/*
 * XREFs of ?ProcessSetBlurRadius@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETBLURRADIUS@@@Z @ 0x1800D2AD8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropShadow::ProcessSetBlurRadius(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETBLURRADIUS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180348088)(
           (char *)this + SDWORD2(xmmword_180348088),
           &CDropShadow::sc_BlurRadius,
           (char *)a3 + 8);
}
