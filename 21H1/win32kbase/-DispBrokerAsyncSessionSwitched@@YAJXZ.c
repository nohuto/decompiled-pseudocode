/*
 * XREFs of ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C0055670
 * Callers:
 *     <none>
 * Callees:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C005568C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0055764 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 */

__int64 DispBrokerAsyncSessionSwitched(void)
{
  DispBrokerUpdateKernelDisplayPolicies();
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___();
}
