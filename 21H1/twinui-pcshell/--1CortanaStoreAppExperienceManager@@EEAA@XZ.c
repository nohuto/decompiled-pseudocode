/*
 * XREFs of ??1CortanaStoreAppExperienceManager@@EEAA@XZ @ 0x1801CEBA4
 * Callers:
 *     ??_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z @ 0x1801CEE9C (--_ECortanaStoreAppExperienceManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x18011DCC0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1801C5870 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CortanaStoreAppExperienceManager::~CortanaStoreAppExperienceManager(
        CortanaStoreAppExperienceManager *this)
{
  HWND v2; // rcx
  HWND v3; // rcx
  Concurrency::details::_RefCounter *v4; // rcx
  Concurrency::details::_RefCounter *v5; // rcx
  Concurrency::details::_RefCounter *v6; // rcx
  Concurrency::details::_RefCounter *v7; // rcx
  Concurrency::details::_RefCounter *v8; // rcx
  __int64 v9; // rcx
  volatile int *v10; // rdx

  *(_QWORD *)this = &CortanaStoreAppExperienceManager::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>'};
  *((_QWORD *)this + 6) = &CortanaStoreAppExperienceManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 14) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>>'};
  *((_QWORD *)this + 15) = &CortanaStoreAppExperienceManager::`vftable'{for `ICortanaStoreAppExperienceManager'};
  *((_QWORD *)this + 16) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>'};
  *((_QWORD *)this + 17) = &CortanaStoreAppExperienceManager::`vftable'{for `IInputHostLayoutChanges'};
  *((_QWORD *)this + 18) = &CortanaStoreAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPrivilegedOperationsConsumer>'};
  v2 = (HWND)*((_QWORD *)this + 48);
  if ( v2 )
    DestroyWindow(v2);
  v3 = (HWND)*((_QWORD *)this + 47);
  if ( v3 )
    DestroyWindow(v3);
  v4 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 46);
  if ( v4 )
    Concurrency::details::_RefCounter::_Destroy(v4);
  v5 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 45);
  if ( v5 )
    Concurrency::details::_RefCounter::_Destroy(v5);
  v6 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 44);
  if ( v6 )
    Concurrency::details::_RefCounter::_Destroy(v6);
  v7 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 43);
  if ( v7 )
    Concurrency::details::_RefCounter::_Destroy(v7);
  v8 = (Concurrency::details::_RefCounter *)*((_QWORD *)this + 42);
  if ( v8 )
    Concurrency::details::_RefCounter::_Destroy(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  v9 = *((_QWORD *)this + 36);
  if ( v9 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>(
    this,
    v10);
}
