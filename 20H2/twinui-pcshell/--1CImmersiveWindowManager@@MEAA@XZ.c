/*
 * XREFs of ??1CImmersiveWindowManager@@MEAA@XZ @ 0x18015E398
 * Callers:
 *     ??_GCImmersiveWindowManager@@MEAAPEAXI@Z @ 0x18015E934 (--_GCImmersiveWindowManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800814F4 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x18013FF9C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18013FFD8 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

void __fastcall CImmersiveWindowManager::~CImmersiveWindowManager(CImmersiveWindowManager *this)
{
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>>'};
  *((_QWORD *)this + 9) = &CImmersiveWindowManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationActivationHistory,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 17) = &CImmersiveWindowManager::`vftable'{for `IApplicationActivationHistory'};
  *((_QWORD *)this + 18) = &CImmersiveWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveWindowManager,IImmersiveMonitorNotification,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>'};
  *((_QWORD *)this + 19) = &CImmersiveWindowManager::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)this + 20) = &CImmersiveWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveWindowManagerInternal,IObjectProvider,IPresentedWindowOverride>'};
  *((_QWORD *)this + 21) = &CImmersiveWindowManager::`vftable'{for `IObjectProvider'};
  *((_QWORD *)this + 22) = &CImmersiveWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPresentedWindowOverride>'};
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 32);
  *((_QWORD *)this + 26) = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::`vftable';
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll((__int64)this + 216);
  *((_DWORD *)this + 51) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveWindowManager *)((char *)this + 72));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CImmersiveWindowManager *)((char *)this + 32));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
}
