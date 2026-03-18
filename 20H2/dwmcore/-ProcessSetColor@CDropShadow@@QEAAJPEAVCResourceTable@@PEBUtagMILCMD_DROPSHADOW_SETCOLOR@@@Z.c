/*
 * XREFs of ?ProcessSetColor@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETCOLOR@@@Z @ 0x1800DA5A4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropShadow::ProcessSetColor(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180343050)(
           (char *)this + SDWORD2(xmmword_180343050),
           &CDropShadow::sc_Color,
           (char *)a3 + 8);
}
