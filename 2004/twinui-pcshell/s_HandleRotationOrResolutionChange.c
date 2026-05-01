/*
 * XREFs of s_HandleRotationOrResolutionChange @ 0x1803311B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall s_HandleRotationOrResolutionChange(__int64 a1, struct IUnknown *a2, char a3)
{
  return ImmersiveMonitorHelper::HandleRotationOrResolutionChange(a1, a2, a3);
}
