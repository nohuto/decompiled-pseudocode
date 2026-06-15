/*
 * XREFs of ?Release@EndpointDevice@@W7EAAKXZ @ 0x1800749F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall EndpointDevice::Release(__int64 a1)
{
  return PersistedEndpointPolicyRule::Release((PersistedEndpointPolicyRule *)(a1 - 8));
}
