/*
 * XREFs of ?ViewMinimized@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180400298
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1803FAEF0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ @ 0x1803F3608 (--1ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ?Minimized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ @ 0x1803F925C (-Minimized@ShellTrackedWindowPosChanged@TabletModeTraceLogging@@QEAAXXZ.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180400538 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModePositioner::ViewMinimized(
        _QWORD **a1,
        struct IApplicationView *a2,
        TabletModeTraceLogging::ShellTrackedWindowPosChanged *a3)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  TabletModeTraceLogging::ShellTrackedWindowPosChanged::Minimized(a3);
  if ( (*(unsigned int (__fastcall **)(_QWORD *, struct IApplicationView *))(*a1[31] + 184LL))(a1[31], a2) )
  {
    v6 = TabletModePositioner::ViewRemoved(a1, a2);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x853,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
  }
  TabletModeTraceLogging::ShellTrackedWindowPosChanged::~ShellTrackedWindowPosChanged((volatile signed __int32 **)a3);
}
