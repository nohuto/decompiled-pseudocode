/*
 * XREFs of powf @ 0x18003C504
 * Callers:
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800857F0 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x1801202A4 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z @ 0x180120534 (-CalculateZoomDelta@ControllerProcessor@@AEAAJM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
