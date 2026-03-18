/*
 * XREFs of ?ProcessSetMaxAttenuationCutoff@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETMAXATTENUATIONCUTOFF@@@Z @ 0x1801BF2B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetMaxAttenuationCutoff(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETMAXATTENUATIONCUTOFF *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180347F70)(
           (char *)this + SDWORD2(xmmword_180347F70),
           &CCompositionPointLight::sc_MaxAttenuationCutoff,
           (char *)a3 + 8);
}
