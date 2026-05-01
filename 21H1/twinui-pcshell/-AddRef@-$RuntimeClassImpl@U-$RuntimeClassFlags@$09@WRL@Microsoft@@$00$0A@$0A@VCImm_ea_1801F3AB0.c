/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F3AB0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800CEF20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellCo.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UISwitchController@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800CEF30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1800CEF30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIImmersiveShellStressTool@@@Details@WRL@Microsoft@@WFI@EAAKXZ @ 0x1800CEF40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$09@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_1800CEF40.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800D8B00 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSe.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800D8B10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopy_ea_1800D8B10.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x1800D8B20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopy_ea_1800D8B20.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<10>,1,0,0,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::InternalAddRef(a1);
}
