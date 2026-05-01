/*
 * XREFs of ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801820B8
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18006F260 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?HandleSwitchToView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180182AC0 (-HandleSwitchToView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ShowFullScreenView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180183EF0 (-ShowFullScreenView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18006F410 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180182CE0 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180183080 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180183BB8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::FullScreenViewGetsFocus(FullScreenPositioner *this, struct IUnknown *a2)
{
  struct IImmersiveMonitor *v4; // r8
  struct IUnknown *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  FullScreenPositioner::PositionView(this, a2, 1LL);
  if ( ApplicationViewHelpers::IsViewOnMonitor(
         (ApplicationViewHelpers *)a2,
         *((struct IApplicationView **)this + 29),
         v4) )
  {
    v5 = (struct IUnknown *)*((_QWORD *)this + 30);
    if ( v5 )
    {
      if ( !(unsigned int)SHIsSameObject(v5, a2)
        && !FullScreenPositioner::IsLightweightFullScreen(this, *((struct IApplicationView **)this + 30)) )
      {
        FullScreenPositioner::PositionView(this, *((_QWORD *)this + 30), 2LL);
      }
    }
  }
  v6 = FullScreenPositioner::SetVisibleView(this, (struct IApplicationView *)a2);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x46F,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v6);
  return 0LL;
}
