/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@UIViewProvider@Core@ComposableShell@89@U?$CloakedIid@UIHolographicViewHostItemLedgerPrivate@Holographic@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18011B93C
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@UIViewProvider@Core@ComposableShell@89@U?$CloakedIid@UIHolographicViewHostItemLedgerPrivate@Holographic@Shell@Internal@Windows@@@23@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18011BE54 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@.c)
 *     ??_GAcrylicPolicyManager@@UEAAPEAXI@Z @ 0x18011BF1C (--_GAcrylicPolicyManager@@UEAAPEAXI@Z.c)
 *     ??1RetailDemoExperienceManager@@EEAA@XZ @ 0x1801C8BD8 (--1RetailDemoExperienceManager@@EEAA@XZ.c)
 *     ??_EHolographicViewHostItemLedger@@UEAAPEAXI@Z @ 0x180225354 (--_EHolographicViewHostItemLedger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x18011BABC (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::ComposableShell::Core::IViewProvider,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Windows::Internal::ComposableShell::Core::IViewProvider,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = a1[23];
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      2 * v3,
      a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 21);
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 6));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 1));
}
