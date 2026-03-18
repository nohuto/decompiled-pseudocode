/*
 * XREFs of ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x18021B2B4
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x18011412C (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1802196D8 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18021AEC0 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802205C0 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker::HasDefaultAnimations(CInteractionTracker *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 58) || *((_QWORD *)this + 59) )
    return 1;
  return result;
}
