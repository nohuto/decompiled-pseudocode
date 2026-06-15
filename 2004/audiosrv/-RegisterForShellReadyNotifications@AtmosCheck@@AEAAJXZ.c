/*
 * XREFs of ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x1800743B4
 * Callers:
 *     _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073C54 (_lambda_e0385c1b3dccbc375408929e287d16bb_--operator().c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18000A258 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D48 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z @ 0x180052B78 (--$AsWeak@UIAudioSessionStore@@@WRL@Microsoft@@YAJPEAUIAudioSessionStore@@PEAVWeakRef@01@@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180052DBC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072424 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_ @ 0x1800735F0 (wistd--__function--__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_--__func_.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800CE528 (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180134C9C (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x180134FB0 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180138AD8 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180138D24 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 */

__int64 __fastcall AtmosCheck::RegisterForShellReadyNotifications(AtmosCheck *this)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // edi
  char IsRunningOnXbox; // al
  __int64 v6; // rcx
  __int64 **v7; // rdi
  bool v8; // zf
  __int64 v9; // r8
  int v10; // eax
  struct wil::details::wnf_subscription_state_base *v11; // rdx
  wil::details *v12; // rcx
  __int64 *v14[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v18[13]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v19; // [rsp+B0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v14[0] = (__int64 *)this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v14);
  v15 = 0LL;
  v14[0] = &v15;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v14);
  v3 = Microsoft::WRL::AsWeak<IAudioSessionStore>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, v2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    IsRunningOnXbox = AtmosCheck::IsRunningOnXbox(this);
    v6 = WNF_SHEL_LOGON_COMPLETE;
    v7 = (__int64 **)((char *)this + 240);
    if ( IsRunningOnXbox )
      v6 = WNF_XBOX_SYSTEM_USER_CONTEXT_CHANGED;
    v8 = *v7 == 0LL;
    v16 = v6;
    if ( v8 )
    {
      ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(v14, &v15);
      v19 = 0LL;
      v14[1] = (__int64 *)this;
      v19 = wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl_void__::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl_void__(
              v18,
              v14);
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)v14);
      v10 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(&v16, v17, v9, v14);
      v12 = 0LL;
      if ( v10 >= 0 )
        v12 = (wil::details *)v14[0];
      if ( v7 != v14 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
          (char *)this + 240,
          v12);
        v12 = 0LL;
      }
      if ( v12 )
        wil::details::delete_wnf_subscription_state(v12, v11);
      wistd::function<void (void)>::~function<void (void)>(v17);
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB16,
      (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v15);
  if ( this )
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 16LL))(this);
  return v4;
}
