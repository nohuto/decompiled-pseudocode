/*
 * XREFs of ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18032F960
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001A758 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001AA28 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIObjectWithSite@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectWithSite@@@WRL@Microsoft@@@Details@12@@Z @ 0x18032A674 (--$As@UIObjectWithSite@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 *     ??$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVImmersiveMonitorHelper@@AEAPEAUIServiceProvider@@$$QEAPEAUIXamlLauncherState@@@Z @ 0x18032A9B8 (--$MakeAndInitialize@VImmersiveMonitorHelper@@V1@AEAPEAUIServiceProvider@@PEAUIXamlLauncherState.c)
 *     ??1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ @ 0x18032B784 (--1SubscribeToServices@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x18032CD0C (-InternalRelease@-$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ @ 0x18032E858 (-StartActivity@SubscribeToServices@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x180330FC0 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::SubscribeToServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  WINBOOL v10; // edx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  struct IXamlLauncherState *v14; // [rsp+40h] [rbp-C0h] BYREF
  struct IServiceProvider *v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v15 = a2;
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"SubscribeToServices");
  v16[0] = &StartWindowTelemetry::SubscribeToServices::`vftable';
  StartWindowTelemetry::SubscribeToServices::StartActivity((StartWindowTelemetry::SubscribeToServices *)v16);
  v12 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v12 + 24LL))(
           v12,
           &unk_18053CB10,
           1LL,
           ((unsigned __int64)this - 16) & -(__int64)(this != (XamlLauncher *)56),
           (char *)this + 108);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 381LL;
      goto LABEL_9;
    }
    v14 = (struct IXamlLauncherState *)*((_QWORD *)this + 27);
    Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease((__int64 *)this + 12);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<ImmersiveMonitorHelper,ImmersiveMonitorHelper,IServiceProvider * &,IXamlLauncherState *>(
           (ImmersiveMonitorHelper **)this + 12,
           &v15,
           &v14);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 383LL;
      goto LABEL_9;
    }
    v5 = ImmersiveMonitorHelper::SetSite(*((ImmersiveMonitorHelper **)this + 12), (struct IUnknown *)this - 7);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 384LL;
      goto LABEL_9;
    }
    v13 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IObjectWithSite>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 27,
           &v13);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v13 + 24LL))(v13, a2);
      v6 = v8;
      if ( v8 >= 0 )
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v16,
          v10);
        v6 = 0;
        goto LABEL_16;
      }
      v9 = 387LL;
    }
    else
    {
      v9 = 386LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v8);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    goto LABEL_17;
  }
  v7 = 378LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)(unsigned int)v5);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  StartWindowTelemetry::SubscribeToServices::~SubscribeToServices((StartWindowTelemetry::SubscribeToServices *)v16);
  return v6;
}
