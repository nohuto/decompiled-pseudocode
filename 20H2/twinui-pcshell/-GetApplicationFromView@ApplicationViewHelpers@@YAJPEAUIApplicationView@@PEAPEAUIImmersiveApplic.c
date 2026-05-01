/*
 * XREFs of ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003AFD4
 * Callers:
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x18003AE44 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?DelayedInitialization@CAppViewManager@@UEAAJXZ @ 0x180169030 (-DelayedInitialization@CAppViewManager@@UEAAJXZ.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025E1E8 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803D7F30 (-InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1803D8594 (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803D9170 (-_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803DCD28 (-SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803EF778 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 *     ?GetApplication@CDropFeedbackItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18042A920 (-GetApplication@CDropFeedbackItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18047196C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ?GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1804719C0 (-GetFrameWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180484070 (-GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetApp@CAppLayoutOperationItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1804853C0 (-GetApp@CAppLayoutOperationItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetApplicationFromView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2,
        struct IImmersiveApplication **a3)
{
  __int64 (__fastcall **v3)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a2 = 0LL;
  v3 = *this;
  v11 = 0LL;
  v5 = (*v3)((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v11);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v11 + 24LL))(v11, a2);
    v5 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v6,
        v9);
  }
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
