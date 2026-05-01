/*
 * XREFs of ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180421530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801856AC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x18035D638 (-_DismissContextMenuIfPresent@CMultitaskingViewServiceProvider@@AEAAXXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1803B260C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector_ea_1803B260C.c)
 *     ??$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@wil@@YA?AV?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@AEAUtagSIZE@@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18041E750 (--$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInt.c)
 *     ??1VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18041ED9C (--1VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ??4VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x18041EDC8 (--4VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV01.c)
 *     ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x18041F30C (--_GVirtualDesktopGestureContext@@QEAAPEAXI@Z.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ @ 0x18041F580 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXXZ.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJXZ @ 0x1804203E4 (-Initialize@VirtualDesktopGestureContext@@QEAAJXZ.c)
 *     ?StartActivity@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1804213E8 (-StartActivity@VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopGestureHandler::StartSwipe(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int LastError; // ebx
  CMultitaskingViewServiceProvider *v7; // rcx
  const char *v8; // r9
  __int64 v9; // rdx
  VirtualDesktopGestureContext *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  VirtualDesktopGestureContext *v14; // rax
  VirtualDesktopGestureContext *v15; // rcx
  VirtualDesktopGestureContext *v17; // [rsp+40h] [rbp-C0h] BYREF
  struct IImmersiveMonitorManager *v18; // [rsp+48h] [rbp-B8h] BYREF
  struct IImmersiveSettingsCache *v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct ISwitchThumbnailDeviceManager *v21; // [rsp+60h] [rbp-A0h] BYREF
  struct IVirtualDesktopManagerInternal *v22; // [rsp+68h] [rbp-98h] BYREF
  VirtualDesktopGestureContext *v23; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v24[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v28[40]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v29[40]; // [rsp+240h] [rbp+140h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+2A8h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v28,
    (__int64)"VirtualDesktopPTPGestureActivity");
  v28[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *)v28);
  if ( !a1[4] )
  {
    LastError = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_18;
  }
  VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)(a1 + 1));
  CMultitaskingViewServiceProvider::_DismissContextMenuIfPresent(v7);
  if ( !(unsigned int)GetPointerInfo(a4, v24) )
  {
    v9 = 728LL;
LABEL_7:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v9,
                  (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
                  v8);
    goto LABEL_18;
  }
  v27 = 0LL;
  v26 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v25, &v26, &v27) )
  {
    v9 = 734LL;
    goto LABEL_7;
  }
  LODWORD(v17) = DWORD2(v26) - v26;
  HIDWORD(v17) = HIDWORD(v26) - DWORD1(v26);
  v23 = v17;
  v18 = (struct IImmersiveMonitorManager *)a1[7];
  v19 = (struct IImmersiveSettingsCache *)a1[6];
  *(_QWORD *)v20 = a1[5];
  v21 = (struct ISwitchThumbnailDeviceManager *)a1[4];
  v22 = (struct IVirtualDesktopManagerInternal *)a1[3];
  wil::make_unique_nothrow<VirtualDesktopGestureContext,tagSIZE &,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,IImmersiveMonitorManager *>(
    &v17,
    (struct tagSIZE *)&v23,
    &v22,
    &v21,
    (struct IApplicationViewCollection **)v20,
    &v19,
    &v18);
  v10 = v17;
  if ( v17 )
  {
    v13 = VirtualDesktopGestureContext::Initialize(v17);
    LastError = v13;
    if ( v13 >= 0 )
    {
      v14 = v10;
      v10 = 0LL;
      v17 = 0LL;
      v15 = (VirtualDesktopGestureContext *)a1[8];
      a1[8] = v14;
      if ( v15 )
        VirtualDesktopGestureContext::`scalar deleting destructor'(v15);
      wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v29,
        (__int64)v28,
        0);
      v29[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::`vftable';
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::operator=(
        (__int64)(a1 + 9),
        (__int64)v29);
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::~VirtualDesktopPTPGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *)v29);
      LastError = 0;
      goto LABEL_16;
    }
    v11 = (unsigned int)v13;
    v12 = 739LL;
  }
  else
  {
    LastError = -2147024882;
    v11 = 2147942414LL;
    v12 = 738LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v11);
LABEL_16:
  v17 = 0LL;
  if ( v10 )
    VirtualDesktopGestureContext::`scalar deleting destructor'(v10);
LABEL_18:
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::~VirtualDesktopPTPGestureActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *)v28);
  return LastError;
}
