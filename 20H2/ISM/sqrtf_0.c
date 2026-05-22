/*
 * XREFs of sqrtf_0 @ 0x18004A60B
 * Callers:
 *     ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18008003C (-CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA-AUfloat3@Numerics@Foundation@Win.c)
 *     ?ComputeDropOffTarget@RayStabilizer@@AEAA?AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z @ 0x180085098 (-ComputeDropOffTarget@RayStabilizer@@AEAA-AUTargetingData@1@AEBU21@AEBUProcessedHistoryData@1@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800857F0 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x180085E88 (-ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z.c)
 *     ?XMScalarACos@DirectX@@YAMM@Z @ 0x18008C980 (-XMScalarACos@DirectX@@YAMM@Z.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DE7CC (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpati.c)
 *     ?CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180120420 (-CalculatePanDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@4@1@Z @ 0x18016AC10 (-ComputeControllerPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x180170710 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 *     ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x180183008 (-RefreshScreenSize@GestureSession@@SAJXZ.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x18018EEA8 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018F3D4 (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180190628 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180193138 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180199014 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     ??$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z @ 0x1801A56E0 (--$SO3_compute_exp_coefs@M@ST@@YAXMAEAM00@Z.c)
 *     ??$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z @ 0x1801A5974 (--$SO3_log_with_exp_coefs@M@ST@@YAXQEAMQEBMAEAM22@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sqrtf_0(float X)
{
  return sqrtf(X);
}
