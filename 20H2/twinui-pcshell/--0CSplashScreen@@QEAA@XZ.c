/*
 * XREFs of ??0CSplashScreen@@QEAA@XZ @ 0x180064320
 * Callers:
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x1800641DC (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180030DD4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

CSplashScreen *__fastcall CSplashScreen::CSplashScreen(CSplashScreen *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::FtmBase::FtmBase((CSplashScreen *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::ApplicationModel::Activation::ISplashScreen'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ISplashScreen,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::`vftable'{for `ISplashScreen'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CSplashScreen::`vftable'{for `Windows::ApplicationModel::Activation::ISplashScreen'};
  *((_QWORD *)this + 1) = &CSplashScreen::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ISplashScreen,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &CSplashScreen::`vftable'{for `ISplashScreen'};
  *v1 = &CSplashScreen::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 10);
  InitializeSRWLock((PSRWLOCK)this + 11);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_WORD *)this + 64) = 1;
  *(_QWORD *)((char *)this + 132) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  return this;
}
