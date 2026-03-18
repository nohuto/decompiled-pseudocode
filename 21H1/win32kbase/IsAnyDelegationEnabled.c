/*
 * XREFs of IsAnyDelegationEnabled @ 0x1C01B16E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsAnyDelegationEnabled()
{
  return *(&InputDelegation::CInputDelegationInfo::gInstance + 1) != 0;
}
