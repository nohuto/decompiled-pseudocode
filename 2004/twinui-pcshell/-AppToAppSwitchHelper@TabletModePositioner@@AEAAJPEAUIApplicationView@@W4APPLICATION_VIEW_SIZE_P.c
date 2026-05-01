/*
 * XREFs of ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1803F44F8
 * Callers:
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803F5E50 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1803F70CC (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803F9370 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A959C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801AC0B4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1AppToAppSwitch@TabletModeTelemetry@@QEAA@XZ @ 0x1803F3E84 (--1AppToAppSwitch@TabletModeTelemetry@@QEAA@XZ.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803F46C4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803F8CF4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1803FC438 (-StartActivity@AppToAppSwitch@TabletModeTelemetry@@QEAAXPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::AppToAppSwitchHelper(
        IUnknown *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6)
{
  int inited; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  WINBOOL v13; // edx
  struct IUnknown *v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"AppToAppSwitch");
  v16[0] = &TabletModeTelemetry::AppToAppSwitch::`vftable';
  TabletModeTelemetry::AppToAppSwitch::StartActivity(v16, a2, a3, a4, a5);
  v15[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  inited = TabletModePositioner::InitLayoutOperationHelper(
             a1,
             &CLSID_AppSwitchOperation,
             &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
             (void **)v15);
  v11 = inited;
  if ( inited >= 0 )
  {
    inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD, __int64, int, int))v15[0]->lpVtbl[2].QueryInterface)(
               v15[0],
               a2,
               a3,
               a4,
               a5,
               a6);
    v11 = inited;
    if ( inited >= 0 )
    {
      inited = TabletModePositioner::ApplyLayoutOperationHelper(a1, v15[0]);
      v11 = inited;
      if ( inited >= 0 )
      {
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)v16,
          v13);
        v11 = 0;
        goto LABEL_9;
      }
      v12 = 2895LL;
    }
    else
    {
      v12 = 2894LL;
    }
  }
  else
  {
    v12 = 2893LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)inited);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
  TabletModeTelemetry::AppToAppSwitch::~AppToAppSwitch((TabletModeTelemetry::AppToAppSwitch *)v16);
  return v11;
}
