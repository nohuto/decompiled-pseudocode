/*
 * XREFs of ?ProcessSetAttenuation2@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2@@@Z @ 0x1801BDE20
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation2(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180343990)(
           (char *)this + SDWORD2(xmmword_180343990),
           &CCompositionSpotLight::sc_Attenuation2,
           (char *)a3 + 8);
}
