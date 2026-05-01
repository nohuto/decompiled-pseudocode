/*
 * XREFs of ?CreateXamlExplorerHostWindowInBand@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KAEBU_GUID@@PEAPEAX@Z @ 0x1802E97B0
 * Callers:
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E9710 (-CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$XamlExplorerHostWindowAvailable@_KAEA_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX$$QEA_KAEA_N@Z @ 0x1802E8C54 (--$XamlExplorerHostWindowAvailable@_KAEA_N@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802E8D48 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802E91FC (--1XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x1802EA69C (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EB298 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@details@wil@@QEAAX_N.c)
 *     ?StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z @ 0x1802EB668 (-StartActivity@XamlExplorerHostWindowCache@XamlExplorerHostTelemetry@@QEAAX_K@Z.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802EB70C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802ED774 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall XamlExplorerHostShellComponent::CreateXamlExplorerHostWindowInBand(
        RTL_SRWLOCK *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        struct tagRECT *a3,
        unsigned int a4,
        const struct _GUID *a5,
        void **a6)
{
  RTL_SRWLOCK *v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  const struct _GUID *v13; // r9
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, GUID *, __int64 *); // rdi
  int v16; // eax
  unsigned int v17; // ebx
  PVOID Ptr; // rbx
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int8 v22[8]; // [rsp+40h] [rbp-1C8h] BYREF
  void *v23; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-1B8h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-1A8h] BYREF
  const struct _GUID *v26; // [rsp+70h] [rbp-198h]
  _QWORD v27[40]; // [rsp+80h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v26 = a5;
  *a6 = 0LL;
  v10 = this + 13;
  AcquireSRWLockShared(this + 13);
  v11 = ((char *)this[10].Ptr - (char *)this[9].Ptr) >> 3;
  if ( v10 )
    ReleaseSRWLockShared(v10);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"XamlExplorerHostWindowCache");
  v27[0] = &XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::`vftable';
  XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::StartActivity(
    (XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v27,
    v11);
  v23 = 0LL;
  LOBYTE(v12) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::GetImpl'::`2'::impl,
    v12);
  v22[0] = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v25 = *a3;
  if ( (int)XamlExplorerHostShellComponent::GrabAvailableWindowForSize(
              (XamlExplorerHostShellComponent *)&this[-16],
              &v25,
              (bool *)v22,
              v13,
              &v23) < 0 )
  {
    v22[0] = 0;
    *(_QWORD *)&v25.left = 0LL;
    XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::XamlExplorerHostWindowAvailable<unsigned __int64,bool &>(
      (__int64)v27,
      (__int64 *)&v25.left,
      v22);
    Ptr = this[12].Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    v20 = (__int64)this[14].Ptr;
    v25 = *a3;
    XamlExplorerHost::CreateXamlExplorerHostWindowInBand(
      (_DWORD)Ptr,
      (_DWORD)a2,
      (unsigned int)&v25,
      a4,
      v20,
      (unsigned __int64)this & -(__int64)(this != (RTL_SRWLOCK *)128));
  }
  else
  {
    *(_QWORD *)&v25.left = v23;
    XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::XamlExplorerHostWindowAvailable<unsigned __int64,bool &>(
      (__int64)v27,
      (__int64 *)&v25.left,
      v22);
    if ( !v22[0] )
      (*(void (__fastcall **)(void *, struct tagRECT *))(*(_QWORD *)v23 + 48LL))(v23, a3);
    v24[0] = 0LL;
    v14 = v23;
    v15 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
    v16 = v15(v14, &GUID_f8e82291_6438_4724_8220_b95054cbeac9, v24);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC2,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::~XamlExplorerHostWindowCache((XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v27);
      return v17;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24[0] + 88LL))(v24[0], a4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24[0] + 80LL))(v24[0]);
    (*(void (__fastcall **)(__int64, struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v24[0] + 64LL))(
      v24[0],
      a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v24);
  }
  v21 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v23)(v23, v26, a6);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      212LL,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v21);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  XamlExplorerHostTelemetry::XamlExplorerHostWindowCache::~XamlExplorerHostWindowCache((XamlExplorerHostTelemetry::XamlExplorerHostWindowCache *)v27);
  return 0LL;
}
