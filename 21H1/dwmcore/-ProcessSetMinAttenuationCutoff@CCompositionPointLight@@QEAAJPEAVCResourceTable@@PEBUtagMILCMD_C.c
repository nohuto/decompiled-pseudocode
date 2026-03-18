/*
 * XREFs of ?ProcessSetMinAttenuationCutoff@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF@@@Z @ 0x1801BF2E0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetMinAttenuationCutoff(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180347F38)(
           (char *)this + SDWORD2(xmmword_180347F38),
           &CCompositionPointLight::sc_MinAttenuationCutoff,
           (char *)a3 + 8);
}
