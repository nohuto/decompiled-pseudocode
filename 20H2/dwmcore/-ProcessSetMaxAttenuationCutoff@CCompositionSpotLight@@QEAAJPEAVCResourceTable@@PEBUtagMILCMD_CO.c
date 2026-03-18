/*
 * XREFs of ?ProcessSetMaxAttenuationCutoff@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETMAXATTENUATIONCUTOFF@@@Z @ 0x1801BBFE4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetMaxAttenuationCutoff(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETMAXATTENUATIONCUTOFF *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180342840)(
           (char *)this + SDWORD2(xmmword_180342840),
           &CCompositionSpotLight::sc_MaxAttenuationCutoff,
           (char *)a3 + 8);
}
