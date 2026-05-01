/*
 * XREFs of ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x180074948
 * Callers:
 *     ??_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z @ 0x180074910 (--_GCLaunchActivatedEventArgs@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CThreadRefTaker@@UEAA@XZ @ 0x180074C20 (--1CThreadRefTaker@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLaunchActivatedEventArgs::~CLaunchActivatedEventArgs(CLaunchActivatedEventArgs *this)
{
  CThreadRefTaker *v2; // rdi
  __int64 v3; // rcx
  HSTRING v4; // rcx
  HSTRING v5; // rcx

  *(_QWORD *)this = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::Selector<CActivatedEventArgsBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>>'};
  v2 = (CLaunchActivatedEventArgs *)((char *)this + 256);
  *((_QWORD *)this + 1) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser'};
  *((_QWORD *)this + 2) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 3) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>'};
  *((_QWORD *)this + 4) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 16) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>>'};
  *((_QWORD *)this + 17) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::IViewSwitcherProvider'};
  *((_QWORD *)this + 18) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>'};
  *((_QWORD *)this + 24) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::RuntimeClass<CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>'};
  *((_QWORD *)this + 26) = &CLaunchActivatedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 27) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>'};
  *((_QWORD *)this + 28) = &CLaunchActivatedEventArgs::`vftable'{for `Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2'};
  *((_QWORD *)this + 29) = &CLaunchActivatedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>'};
  *((_QWORD *)this + 32) = &CLaunchActivatedEventArgs::`vftable'{for `CThreadRefTaker'};
  v3 = *((_QWORD *)this + 36);
  if ( v3 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (HSTRING)*((_QWORD *)this + 35);
  if ( v4 )
    WindowsDeleteString(v4);
  v5 = (HSTRING)*((_QWORD *)this + 34);
  if ( v5 )
    WindowsDeleteString(v5);
  CThreadRefTaker::~CThreadRefTaker(v2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>(this);
}
