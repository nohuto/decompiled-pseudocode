/*
 * XREFs of ?ProcessSetAttenuation0@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0@@@Z @ 0x1801BA90C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation0(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180342E90)(
           (char *)this + SDWORD2(xmmword_180342E90),
           &CCompositionPointLight::sc_Attenuation0,
           (char *)a3 + 8);
}
