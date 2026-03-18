/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180042824
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800418D4 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800420D8 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x180042190 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800422CC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x1800426E4 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180042790 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800DA2A8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801F40A4 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x180209D44 (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18021DFDC (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     ?OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z @ 0x18023F070 (-OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x180298220 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 *     ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x180298720 (-SetState@CHolographicDisplay@@UEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 6);
  result = 0;
  if ( v1 )
  {
    if ( *(_DWORD *)(v1 + 76) )
      return *((_DWORD *)this + 16) != 0;
  }
  return result;
}
