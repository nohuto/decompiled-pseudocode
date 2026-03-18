/*
 * XREFs of ?ProcessSetAttenuation0@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0@@@Z @ 0x1801C0714
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation0(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180347A00)(
           (char *)this + SDWORD2(xmmword_180347A00),
           &CCompositionSpotLight::sc_Attenuation0,
           (char *)a3 + 8);
}
