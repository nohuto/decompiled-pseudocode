/*
 * XREFs of ?ProcessSetColor@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR@@@Z @ 0x1801BA990
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetColor(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180342E20)(
           (char *)this + SDWORD2(xmmword_180342E20),
           &CCompositionPointLight::sc_Color,
           (char *)a3 + 8);
}
