/*
 * XREFs of ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x18006C7C4
 * Callers:
 *     ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x18006C5B0 (-SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@.c)
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x18006C6C0 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJPEAUIUserActivitySessionInfo@UserActivities@I.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
        TaskFlowImmersiveShellBroker *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  struct IApplicationView *v7; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ApplicationViewHelpers *v11; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 36);
  v5 = *v4;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, ApplicationViewHelpers **))(v5 + 48))(v4, a2, &v11);
  if ( v6 != -2147319765 )
  {
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2C7,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v6,
        v9);
      JUMPOUT(0x180108A16LL);
    }
    *a3 = ApplicationViewHelpers::GetWindowForView(
            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v11,
            v7);
  }
  if ( v11 )
    (*(void (__fastcall **)(ApplicationViewHelpers *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
