/*
 * XREFs of ?ProcessSetIntensity@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY@@@Z @ 0x1801BDC4C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetIntensity(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180347DE8)(
           (char *)this + SDWORD2(xmmword_180347DE8),
           &CCompositionDistantLight::sc_Intensity,
           (char *)a3 + 8);
}
