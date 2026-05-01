/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18036EB18
 * Callers:
 *     ??1AccessibilityExperienceManager@@EEAA@XZ @ 0x18036EBC8 (--1AccessibilityExperienceManager@@EEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlAdapterOwner@@UIEyeControlManager@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18036F0A8 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveShellComponen_ea_18036F0A8.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076EB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x18013FF9C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,IEyeControlAdapterOwner,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,IEyeControlAdapterOwner,IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = a1[27];
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
      2 * v3,
      a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 25);
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 6));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 1));
}
