/*
 * XREFs of ?ProcessSetOuterConeColor@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR@@@Z @ 0x1800DA97C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetOuterConeColor(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONECOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180343A38)(
           (char *)this + SDWORD2(xmmword_180343A38),
           &CCompositionSpotLight::sc_OuterConeColor,
           (char *)a3 + 8);
}
