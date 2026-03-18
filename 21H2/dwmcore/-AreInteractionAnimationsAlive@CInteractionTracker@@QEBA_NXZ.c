/*
 * XREFs of ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180113E04
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18011412C (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1802191C0 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x180219288 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x180219358 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1802196D8 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180219E28 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AD4C (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18021AEC0 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z @ 0x18021BE48 (-ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTER.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY@@@Z @ 0x18021BECC (-ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTER.c)
 *     ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x18021BFA8 (-ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x18021E100 (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802205C0 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x180256290 (-IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1802563D0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x180264A24 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::AreInteractionAnimationsAlive(CInteractionTracker *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 41) )
  {
    if ( *((_QWORD *)this + 42) )
      return *((_QWORD *)this + 43) != 0LL;
  }
  return result;
}
