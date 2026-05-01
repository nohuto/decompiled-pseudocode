/*
 * XREFs of ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x18001DAF8
 * Callers:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18001DA30 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039C74 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
CFrameApplicationPresentation *__fastcall CFrameApplicationPresentation::CFrameApplicationPresentation(
        CFrameApplicationPresentation *this)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((CFrameApplicationPresentation *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationPresentationLayer'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CFrameApplicationPresentation::`vftable'{for `IApplicationPresentationLayer'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 12) = SHTaskPoolGetUniqueContext();
  *((_WORD *)this + 26) = 0;
  *((_BYTE *)this + 54) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 88;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 1;
  *((_QWORD *)this + 13) = *((_QWORD *)this + 8);
  *((_QWORD *)this + 14) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *(_OWORD *)((char *)this + 152) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = (char *)this + 232;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = (char *)this + 328;
  *((_QWORD *)this + 35) = (char *)this + 288;
  *((_DWORD *)this + 72) = 0;
  *((_BYTE *)this + 292) = 0;
  *((_BYTE *)this + 352) = 0;
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 42) = "SplashScreenSuppressed";
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 45) = 1LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  memset_0((char *)this + 368, 0, 0x90uLL);
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 29) = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  *((_BYTE *)this + 544) = 1;
  *((_QWORD *)this + 69) = 1LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_WORD *)this + 292) = 0;
  *((_DWORD *)this + 147) = 0;
  *((_BYTE *)this + 592) = 1;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  SetRectEmpty((LPRECT)((char *)this + 136));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 3LL;
  *((_DWORD *)this + 52) = 0;
  return this;
}
