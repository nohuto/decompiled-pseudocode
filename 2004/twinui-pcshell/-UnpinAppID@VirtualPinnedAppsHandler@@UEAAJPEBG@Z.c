/*
 * XREFs of ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x1804496A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800B3F4C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A959C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801AAA24 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??$_Move_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x180446034 (--$_Move_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@@std@.c)
 *     ??1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180446228 (--1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1804476F0 (-StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x180448184 (-Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtu.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualPinnedAppsHandler::UnpinAppID(VirtualPinnedAppsHandler *this, const unsigned __int16 *a2)
{
  __int64 v3; // rdx
  const WCHAR *v4; // rdi
  const WCHAR *v5; // rbx
  const WCHAR *v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, LPCWCH, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, struct IVirtualDesktop **); // rbx
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  struct IVirtualDesktop *v18; // [rsp+30h] [rbp-1D8h] BYREF
  LPCWCH lpString2; // [rsp+38h] [rbp-1D0h]
  __int64 v20; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 *v23; // [rsp+58h] [rbp-1B0h]
  RTL_SRWLOCK *v24; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-198h] BYREF
  int v27; // [rsp+78h] [rbp-190h]
  __int64 v28; // [rsp+80h] [rbp-188h] BYREF
  __int64 v29; // [rsp+88h] [rbp-180h] BYREF
  __int64 *v30; // [rsp+90h] [rbp-178h]
  const WCHAR *v31; // [rsp+98h] [rbp-170h]
  const WCHAR *v32; // [rsp+A0h] [rbp-168h]
  const WCHAR *v33; // [rsp+A8h] [rbp-160h]
  _QWORD v34[40]; // [rsp+B0h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  lpString2 = a2;
  try
  {
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v24);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v34,
      (__int64)"VirtualDesktopUnpinAppActivity");
    v34[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::`vftable';
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v34);
    if ( !*((_QWORD *)this + 10) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)0x80070490LL);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        170LL,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)0x8007139FLL);
    v4 = (const WCHAR *)*((_QWORD *)this + 13);
    v32 = v4;
    v5 = (const WCHAR *)*((_QWORD *)this + 12);
    v33 = v5;
    while ( 1 )
    {
      v31 = v5;
      if ( v5 == v4 )
        break;
      v6 = v5;
      if ( *((_QWORD *)v5 + 3) >= 8uLL )
        v6 = *(const WCHAR **)v5;
      if ( CompareStringOrdinal(v6, -1, lpString2, -1, 1) == 2 )
        break;
      v5 += 16;
    }
    if ( v5 == *((const WCHAR **)this + 13) )
    {
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v34);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v24);
      result = 1LL;
    }
    else
    {
      LOBYTE(v3) = 1;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, LPCWCH))(**((_QWORD **)this + 7) + 64LL))(
             *((_QWORD *)this + 7),
             v3,
             L"PinnedApps",
             lpString2);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB2,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v9);
      std::_Move_unchecked<std::wstring *,std::wstring *>((__int64)(v5 + 16), *((_QWORD *)this + 13), (__int64)v5);
      std::wstring::_Tidy_deallocate((_QWORD *)(*((_QWORD *)this + 13) - 32LL));
      *((_QWORD *)this + 13) -= 32LL;
      v20 = 0LL;
      v10 = *((_QWORD *)this + 10);
      v11 = *(__int64 (__fastcall **)(__int64, LPCWCH, __int64 *))(*(_QWORD *)v10 + 40LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v12 = v11(v10, lpString2, &v20);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          182LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v12);
      v18 = 0LL;
      v13 = *((_QWORD *)this + 6);
      v14 = *(__int64 (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v13 + 224LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      v15 = v14(v13, &v18);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          185LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v15);
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v26,
        v20);
      LODWORD(v21) = 0;
      v22 = 0LL;
      v23 = &v26;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
      LODWORD(v28) = v27;
      v29 = 0LL;
      v30 = &v26;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v28);
      while ( (_DWORD)v21 != (_DWORD)v28 || v23 != v30 )
      {
        v16 = v22;
        v25 = v22;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
        v17 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, __int64, struct IVirtualDesktop *))(*(_QWORD *)this + 104LL))(
                this,
                v16,
                v18);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xBC,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        LODWORD(v21) = v21 + 1;
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v21);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::Stop(
        (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v34,
        lpString2,
        v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v34);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v24);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC1,
                           (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
                           v7);
  }
  return result;
}
