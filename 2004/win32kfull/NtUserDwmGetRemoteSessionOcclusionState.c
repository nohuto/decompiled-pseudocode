/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionState @ 0x1C0156000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDwmGetRemoteSessionOcclusionState()
{
  return gbFreezeScreenUpdates;
}
