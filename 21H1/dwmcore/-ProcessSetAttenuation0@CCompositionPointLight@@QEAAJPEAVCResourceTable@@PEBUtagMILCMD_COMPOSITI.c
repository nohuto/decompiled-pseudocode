/*
 * XREFs of ?ProcessSetAttenuation0@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0@@@Z @ 0x1801BF11C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation0(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180347E90)(
           (char *)this + SDWORD2(xmmword_180347E90),
           &CCompositionPointLight::sc_Attenuation0,
           (char *)a3 + 8);
}
