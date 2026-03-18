/*
 * XREFs of ?ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@PEBXI@Z @ 0x180200B38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x18001509C (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CCompositionLight::ProcessAddExclusions(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS *a3,
        unsigned int *a4)
{
  __int64 v5; // [rsp+20h] [rbp-18h]

  return CCompositionLight::AddTargets((__int64)this, a2, *((_DWORD *)a3 + 2), a4, v5, 1u);
}
