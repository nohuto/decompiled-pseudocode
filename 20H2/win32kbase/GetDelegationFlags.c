/*
 * XREFs of GetDelegationFlags @ 0x1C01A9410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetDelegationFlags()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 1);
}
