/*
 * XREFs of _NtUserDwmGetRemoteSessionOcclusionState@0 @ 0xD48E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserDwmGetRemoteSessionOcclusionState()
{
  return _gbFreezeScreenUpdates;
}
