/*
 * XREFs of ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800A01FC
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18005DE00 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180087F4C (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180089E20 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18008BC00 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18008C494 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18008C544 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18009FEC4 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1800A0108 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800C6B88 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x1801CE2BC (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 *     ?OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z @ 0x1801D5938 (-OnEdgyDetected@CManipulation@@QEAAXPEBUEdgyDetectedParams@@@Z.c)
 *     ?OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801EDDE0 (-OnSceneReady@CSpatialRemarshaler@@EEAAJPEAUISpectreRenderer@@@Z.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x180254520 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 *     ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x1802549B0 (-SetState@CHolographicDisplay@@UEAAJJ@Z.c)
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
