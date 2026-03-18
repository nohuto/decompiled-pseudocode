/*
 * XREFs of ?ProcessSetOpacity@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETOPACITY@@@Z @ 0x1800DA578
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropShadow::ProcessSetOpacity(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETOPACITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803430C0)(
           (char *)this + SDWORD2(xmmword_1803430C0),
           &CDropShadow::sc_Opacity,
           (char *)a3 + 8);
}
