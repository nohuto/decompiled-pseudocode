/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180224304
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180224350 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponen_ea_180224350.c)
 *     ??_EHolographicForegroundAssistant@@UEAAPEAXI@Z @ 0x18022438C (--_EHolographicForegroundAssistant@@UEAAPEAXI@Z.c)
 *     ??1TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ @ 0x180279044 (--1TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAA@XZ.c)
 *     ??1XamlExplorerHostShellComponent@@UEAA@XZ @ 0x1802C75A8 (--1XamlExplorerHostShellComponent@@UEAA@XZ.c)
 *     ??_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z @ 0x1804302D4 (--_EFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x18011BABC (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = a1[22];
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      2 * v3,
      a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 20);
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 6));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 1));
}
