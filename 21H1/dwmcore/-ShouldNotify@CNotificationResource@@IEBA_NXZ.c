/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800965EC
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x1800962BC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1800964F8 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180097AAC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x180099890 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800C0708 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800C51F0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800C52A4 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800C682C (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801D0C20 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801D82B8 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     ?OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F0760 (-OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x180256FB0 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 *     ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x180257440 (-SetState@CHolographicDisplay@@UEAAJJ@Z.c)
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
