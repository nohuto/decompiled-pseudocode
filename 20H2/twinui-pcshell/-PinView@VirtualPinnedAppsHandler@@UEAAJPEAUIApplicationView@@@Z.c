/*
 * XREFs of ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180446320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180014220 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A916C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180445ABC (--1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804465A0 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?StartActivity@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180446E74 (-StartActivity@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1804475F8 (-Stop@VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIApplicat.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualPinnedAppsHandler::PinView(VirtualPinnedAppsHandler *this, struct IApplicationView *a2)
{
  unsigned int v4; // ebx
  int (__fastcall *v5)(struct IApplicationView *, LPCWCH *); // rbx
  const WCHAR *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r15
  bool v9; // si
  const WCHAR *v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  void (__fastcall *v13)(__int64, struct IVirtualDesktop **); // rbx
  struct IVirtualDesktop *v15; // [rsp+30h] [rbp-D0h] BYREF
  LPCWCH lpString2; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+48h] [rbp-B8h]
  LPCWCH v19; // [rsp+50h] [rbp-B0h]
  RTL_SRWLOCK *v20; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v20);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"VirtualDesktopPinWindowActivity");
  v21[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)v21);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
  {
    if ( !(*(unsigned int (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *))(*(_QWORD *)this + 128LL))(
            this,
            a2) )
    {
      lpString2 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v5 = *(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      v17 = -1LL;
      v18 = -1LL;
      if ( v5(a2, &lpString2) < 0
        || (v6 = lpString2, v19 = lpString2, v7 = *((_QWORD *)this + 12), v8 = *((_QWORD *)this + 13), v7 == v8) )
      {
LABEL_12:
        v9 = 0;
      }
      else
      {
        v9 = 1;
        while ( 1 )
        {
          v10 = (const WCHAR *)v7;
          if ( *(_QWORD *)(v7 + 24) >= 8uLL )
            v10 = *(const WCHAR **)v7;
          if ( CompareStringOrdinal(v10, -1, v6, -1, 1) == 2 )
            break;
          v7 += 32LL;
          if ( v7 == v8 )
            goto LABEL_12;
          v6 = v19;
        }
      }
      v11 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, v9);
      v4 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDA,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v11);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
        goto LABEL_17;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    }
    v15 = 0LL;
    v12 = *((_QWORD *)this + 6);
    v13 = *(void (__fastcall **)(__int64, struct IVirtualDesktop **))(*(_QWORD *)v12 + 224LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v13(v12, &v15);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)v21,
      a2,
      v15);
    v4 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    goto LABEL_17;
  }
  v4 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)0x8007139FLL);
LABEL_17:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::~VirtualDesktopPinWindowActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity *)v21);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
  return v4;
}
