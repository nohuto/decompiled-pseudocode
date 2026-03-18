/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007125C
 * Callers:
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800240AC (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180024E90 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x180026F58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800277EC (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800278A4 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x180070F2C (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x180071168 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007CE20 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800C65F8 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801CC454 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801D3A98 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     ?OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801EBFA0 (-OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x180253680 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 *     ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x180253B40 (-SetState@CHolographicDisplay@@UEAAJJ@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CNotificationResource::ShouldNotify(CNotificationResource *this)
{
  __int64 v1; // rdx
  char result; // al
  int v3; // edx

  v1 = *((_QWORD *)this + 6);
  result = 0;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 68);
  else
    v3 = 0;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 14) )
      return 1;
  }
  return result;
}
