/*
 * XREFs of ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802ED774
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1802E97B0 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWi.c)
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1802EA954 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802E8D48 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802EB70C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___ @ 0x1802EC63C (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     ??$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@wil@@YA?AV?$ComPtr@VXamlExplorerHostWindow@@@WRL@Microsoft@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@AEAKAEAPEAUIPrivilegedPresentationOperations@@AEAPEAUIXamlExplorerHost@@@Z @ 0x1802EC8E0 (--$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallba.c)
 *     _lambda_c8d6b8e58017b711112620b136cf3b89_::_lambda_c8d6b8e58017b711112620b136cf3b89_ @ 0x1802ECD10 (_lambda_c8d6b8e58017b711112620b136cf3b89_--_lambda_c8d6b8e58017b711112620b136cf3b89_.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802ECD74 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802ECD74.c)
 *     ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802ED0BC (--1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1802EDB44 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x1802EDCBC (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?Split@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA?AV12@XZ @ 0x1802EE248 (-Split@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ @ 0x1802EE2E0 (-StartActivity@CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAAXXZ.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1802F0B8C (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
        RTL_SRWLOCK *a1,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        __int64 a3,
        unsigned int a4,
        struct IPrivilegedPresentationOperations *a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 *v10; // rax
  struct IXamlExplorerHostWindowCreatedCallback *v11; // rbx
  PVOID Ptr; // rsi
  _QWORD *v13; // rdi
  __int64 *v14; // rax
  _QWORD *v15; // rdi
  int v16; // eax
  int v17; // edx
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v19; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v20; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h]
  int v22; // [rsp+58h] [rbp-A8h]
  struct IPrivilegedPresentationOperations *v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24[2]; // [rsp+68h] [rbp-98h] BYREF
  RTL_SRWLOCK *v25[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h] BYREF
  int v27; // [rsp+90h] [rbp-70h]
  _BYTE v28[320]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v29[40]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v30; // [rsp+320h] [rbp+220h] BYREF
  _QWORD v31[39]; // [rsp+328h] [rbp+228h] BYREF
  _BYTE v32[320]; // [rsp+460h] [rbp+360h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+4E8h]

  v19 = a2;
  v18 = a4;
  v23 = a5;
  *(_QWORD *)v24 = a6;
  *a8 = 0LL;
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"CreateXamlExplorerHostWindow");
  v29[0] = &XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::StartActivity((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v29);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v25, a1 + 13);
  XamlExplorerHost::EnsureMetadataRegistered(a1);
  XamlExplorerHost::EnsureHostAppCreated(a1);
  v10 = wil::MakeAndInitializeOrThrow<XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &,unsigned long &,IPrivilegedPresentationOperations * &,IXamlExplorerHost * &>(
          (__int64 *)&v20,
          &v19,
          &v18,
          &v23,
          (struct IXamlExplorerHost **)v24);
  v19 = (struct IXamlExplorerHostWindowCreatedCallback *)*v10;
  v11 = v19;
  *v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::Split(v29, v32);
  v30 = v11;
  if ( v11 )
    (*(void (__fastcall **)(struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v11 + 8LL))(v11);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)v32);
  v31[0] = &XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  *(_WORD *)((char *)&v22 + 1) = 0;
  HIBYTE(v22) = 0;
  *(_QWORD *)&v21 = *(_QWORD *)a3;
  DWORD2(v21) = *(_DWORD *)(a3 + 8) - v21;
  HIDWORD(v21) = *(_DWORD *)(a3 + 12) - DWORD1(v21);
  LOBYTE(v22) = 1;
  Ptr = a1[11].Ptr;
  v13 = Platform::Details::Heap::Allocate(0x28uLL, 0x140uLL);
  v20 = v13;
  v14 = (__int64 *)lambda_c8d6b8e58017b711112620b136cf3b89_::_lambda_c8d6b8e58017b711112620b136cf3b89_(
                     (__int64)v28,
                     (__int64 *)&v30);
  v15 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___(
          v13,
          v14);
  v20 = v15;
  v26 = v21;
  v27 = v22;
  WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(Ptr, &v26, v15);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
  v16 = (**(__int64 (__fastcall ***)(struct IXamlExplorerHostWindowCreatedCallback *, GUID *, _QWORD *))v11)(
          v11,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          a8);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      153LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v29, v17);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v31);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v32);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v25);
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)v29);
}
