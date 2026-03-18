/*
 * XREFs of ?ProcessSetMinAttenuationCutoff@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETMINATTENUATIONCUTOFF@@@Z @ 0x1801BDF00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetMinAttenuationCutoff(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETMINATTENUATIONCUTOFF *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180343878)(
           (char *)this + SDWORD2(xmmword_180343878),
           &CCompositionSpotLight::sc_MinAttenuationCutoff,
           (char *)a3 + 8);
}
