/*
 * XREFs of powf @ 0x18003C424
 * Callers:
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180085D40 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x1801207F4 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180120A84 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
