/*
 * XREFs of ?Release@PersistedEndpointPolicyRule@@UEAAKXZ @ 0x180068510
 * Callers:
 *     ?Release@EndpointDevice@@W7EAAKXZ @ 0x1800754B0 (-Release@EndpointDevice@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall PersistedEndpointPolicyRule::Release(PersistedEndpointPolicyRule *this)
{
  return CUnknown::Release((PersistedEndpointPolicyRule *)((char *)this + 8));
}
