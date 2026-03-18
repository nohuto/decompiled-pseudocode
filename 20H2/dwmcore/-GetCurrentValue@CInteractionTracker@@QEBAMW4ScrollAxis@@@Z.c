/*
 * XREFs of ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801C8D20
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801C71FC (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801CC848 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801CD87C (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CE3D4 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CE6C4 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801CF788 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801CF964 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180200A7C (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180200CAC (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180201094 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180202AE0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180202BF0 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180202F10 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x180202FF0 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180203220 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180203330 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x180203550 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020C1A0 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020C270 (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18020C534 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     CChainingHelper::RunForAllAxes__lambda_f87cc9cbc192fb07b4c8cbee31a42eb9___ @ 0x1802124E8 (CChainingHelper--RunForAllAxes__lambda_f87cc9cbc192fb07b4c8cbee31a42eb9___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801C7830 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 */

float __fastcall CInteractionTracker::GetCurrentValue(__int64 a1, int a2)
{
  int v3; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  CMotion *v9; // rax

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
        return 0.0;
      if ( !CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
        || !*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 320) + 328LL))(*(_QWORD *)(v5 + 320))
                      + 136) )
      {
        return *(float *)(a1 + 128);
      }
      v6 = *(_QWORD *)(a1 + 320);
    }
    else
    {
      if ( !CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
        || !*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 336) + 328LL))(*(_QWORD *)(v7 + 336))
                      + 136) )
      {
        return *(float *)(a1 + 76);
      }
      v6 = *(_QWORD *)(a1 + 336);
    }
    goto LABEL_16;
  }
  if ( CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1)
    && *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 328) + 328LL))(*(_QWORD *)(v8 + 328)) + 136) )
  {
    v6 = *(_QWORD *)(a1 + 328);
LABEL_16:
    v9 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 328LL))(v6);
    return CMotion::GetForceEngineCurrentValue(v9);
  }
  return *(float *)(a1 + 72);
}
