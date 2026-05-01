/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180096330
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800F2BF0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInd_ea_1800F2BF0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@UICompositeExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800F2C00 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInd_ea_1800F2C00.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18015D240 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_18015D240.c)
 *     ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x180381224 (--$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1804129F0 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?InternalAddRef@?$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEBAXXZ @ 0x180412F90 (-InternalAddRef@-$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18048168C (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,ICompositeExperienceManagerFactory,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 52), a2);
}
