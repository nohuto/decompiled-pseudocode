/*
 * XREFs of ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x180050DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180050CE0 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ??1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800523D4 (--1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180052400 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180053750 (-StartActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180053A38 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??B?$ComPtr@VTabTipAdapter@KeyboardHosting@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800A308C (--B-$ComPtr@VTabTipAdapter@KeyboardHosting@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::Hide(SearchAppDesktopExperienceView *this)
{
  _QWORD *v2; // rcx
  _QWORD v4[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v4);
  v4[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_Hide::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_Hide *)v4);
  *((_BYTE *)this + 184) = 0;
  if ( (unsigned int)Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapter>::operator int Microsoft::WRL::Details::BoolStruct::*((char *)this + 128) != -1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 96LL))(*v2);
  SearchAppDesktopExperienceView::UnregisterGlobalBackButton((SearchAppDesktopExperienceView *)((char *)this - 24));
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v4);
  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::~CortanaExperienceManager_Hide((CortanaProactiveTelemetry::CortanaExperienceManager_Hide *)v4);
  return 0LL;
}
