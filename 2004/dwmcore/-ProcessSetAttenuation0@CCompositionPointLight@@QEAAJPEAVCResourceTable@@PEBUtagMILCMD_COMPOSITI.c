/*
 * XREFs of ?ProcessSetAttenuation0@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0@@@Z @ 0x1801BC7FC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation0(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION0 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180343E90)(
           (char *)this + SDWORD2(xmmword_180343E90),
           &CCompositionPointLight::sc_Attenuation0,
           (char *)a3 + 8);
}
