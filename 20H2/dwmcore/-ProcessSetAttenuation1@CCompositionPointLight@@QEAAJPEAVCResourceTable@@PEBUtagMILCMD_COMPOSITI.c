/*
 * XREFs of ?ProcessSetAttenuation1@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1@@@Z @ 0x1801BA938
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation1(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180342EC8)(
           (char *)this + SDWORD2(xmmword_180342EC8),
           &CCompositionPointLight::sc_Attenuation1,
           (char *)a3 + 8);
}
