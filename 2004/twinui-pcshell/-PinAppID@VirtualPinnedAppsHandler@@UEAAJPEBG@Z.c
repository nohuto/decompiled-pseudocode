/*
 * XREFs of ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x1804465D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800B3F4C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A959C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801AAA24 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1801EC3A8 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 *     ??1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1804461D0 (--1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180446CE0 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180447478 (-StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x180447968 (-Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall VirtualPinnedAppsHandler::PinAppID(VirtualPinnedAppsHandler *this, unsigned __int16 *a2)
{
  __int64 v4; // rdx
  const WCHAR *v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rbx
  const WCHAR *v8; // rcx
  const char *v9; // r9
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, unsigned __int16 *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdi
  void (__fastcall *v16)(__int64, struct IVirtualDesktop **); // rbx
  struct IApplicationView *v17; // rbx
  int v18; // eax
  struct IVirtualDesktop *v19; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-1F0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-1E8h] BYREF
  struct IApplicationView *v22; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 *v23; // [rsp+60h] [rbp-1D8h]
  RTL_SRWLOCK *v24; // [rsp+68h] [rbp-1D0h] BYREF
  struct IApplicationView *v25; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v26; // [rsp+78h] [rbp-1C0h] BYREF
  int v27; // [rsp+80h] [rbp-1B8h]
  __int64 v28; // [rsp+88h] [rbp-1B0h]
  unsigned __int16 *v29; // [rsp+90h] [rbp-1A8h]
  __int64 v30; // [rsp+98h] [rbp-1A0h]
  __int64 v31; // [rsp+A0h] [rbp-198h]
  __int64 v32; // [rsp+A8h] [rbp-190h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-188h] BYREF
  __int64 *v34; // [rsp+B8h] [rbp-180h]
  _QWORD v35[40]; // [rsp+D0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  try
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v24);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v35,
      (__int64)"VirtualDesktopPinAppActivity");
    v35[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v35);
    if ( !*((_QWORD *)this + 10) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        140LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)0x80070490LL);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        141LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)0x8007139FLL);
    v5 = a2;
    v29 = a2;
    v6 = *((_QWORD *)this + 13);
    v30 = v6;
    v7 = *((_QWORD *)this + 12);
    v31 = v7;
    v28 = v7;
    while ( v7 != v6 )
    {
      v8 = (const WCHAR *)v7;
      if ( *(_QWORD *)(v7 + 24) >= 8uLL )
        v8 = *(const WCHAR **)v7;
      if ( CompareStringOrdinal(v8, -1, v5, -1, 1) == 2 )
      {
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v35);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v24);
        return 1LL;
      }
      v7 += 32LL;
      v28 = v7;
      v5 = v29;
    }
    LOBYTE(v4) = 1;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, unsigned __int16 *, int, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
            *((_QWORD *)this + 7),
            v4,
            L"PinnedApps",
            a2,
            4,
            0LL,
            0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v11);
    std::wstring::wstring((__int64)&v32, a2);
    std::vector<std::wstring>::emplace_back<std::wstring>((__int64 *)this + 12, (__int64)&v32);
    std::wstring::_Tidy_deallocate(&v32);
    v20 = 0LL;
    v12 = *((_QWORD *)this + 10);
    v13 = *(__int64 (__fastcall **)(__int64, unsigned __int16 *, __int64 *))(*(_QWORD *)v12 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v14 = v13(v12, a2, &v20);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        152LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v14);
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v26,
      v20);
    LODWORD(v21) = 0;
    v22 = 0LL;
    v23 = &v26;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
    LODWORD(v32) = v27;
    v33 = 0LL;
    v34 = &v26;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v32);
    while ( (_DWORD)v21 != (_DWORD)v32 || v23 != v34 )
    {
      v17 = v22;
      v25 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
      v18 = VirtualPinnedAppsHandler::PinViewInternal(this, v17, 1);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9B,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      LODWORD(v21) = v21 + 1;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v19 = 0LL;
    v15 = *((_QWORD *)this + 6);
    v16 = *(void (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v15 + 224LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v16(v15, &v19);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v35,
      a2,
      v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v35);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v24);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA3,
                           (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                           v9);
  }
  return result;
}
