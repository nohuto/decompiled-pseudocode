/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180138C90
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800CB660 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExt.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIServiceProvider@@UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800CB670 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIServiceProvider@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800D2EF0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIAppL.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithGITSite@@UIDefaultLaunchPositionOverride@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800D2F00 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_1800D2F00.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800D7C00 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_1800D7C00.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1803EF890 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IAppResizeView,ITabletModeInputCallback,IApplicationViewChangeListener>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::AddRef(
           a1,
           a2);
}
