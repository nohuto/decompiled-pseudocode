/*
 * XREFs of ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803DD8E4
 * Callers:
 *     ?AllowClose@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAE@Z @ 0x1803DAD00 (-AllowClose@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAE@Z.c)
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803DB130 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803DBA40 (-GetChromeConfigurationForView@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicati.c)
 *     ?HandleSwitchToView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803DC0D0 (-HandleSwitchToView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803DC350 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationR.c)
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1803DCAB0 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 *     ?ShouldHandleFrameworkViewTypeChange@KioskPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1803DD870 (-ShouldHandleFrameworkViewTypeChange@KioskPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall KioskPositioner::ShouldHandleView(KioskPositioner *this, struct IApplicationView *a2)
{
  char v2; // bl

  v2 = 0;
  if ( *((_BYTE *)this + 632)
    && (*((_BYTE *)this + 633)
     || (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 80) + 8LL))(
          *((_QWORD *)this + 80),
          a2)) )
  {
    return 1;
  }
  return v2;
}
