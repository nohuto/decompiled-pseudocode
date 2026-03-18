/*
 * XREFs of ?ProcessSetInnerConeColor@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR@@@Z @ 0x1800D2948
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeColor(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONECOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180347A70)(
           (char *)this + SDWORD2(xmmword_180347A70),
           &CCompositionSpotLight::sc_InnerConeColor,
           (char *)a3 + 8);
}
