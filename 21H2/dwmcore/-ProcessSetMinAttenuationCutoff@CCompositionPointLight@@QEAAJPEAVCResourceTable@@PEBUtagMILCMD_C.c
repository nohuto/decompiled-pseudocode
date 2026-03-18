/*
 * XREFs of ?ProcessSetMinAttenuationCutoff@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF@@@Z @ 0x18020E084
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetMinAttenuationCutoff(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803D1E28)(
           (char *)this + SDWORD2(xmmword_1803D1E28),
           &CCompositionPointLight::sc_MinAttenuationCutoff,
           (char *)a3 + 8);
}
