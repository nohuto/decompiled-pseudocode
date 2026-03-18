/*
 * XREFs of ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C00955C0
 * Callers:
 *     xxxRemoteConnect @ 0x1C011C440 (xxxRemoteConnect.c)
 * Callees:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C00955DC (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C00956B4 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 */

__int64 DispBrokerAsyncSessionSwitched(void)
{
  DispBrokerUpdateKernelDisplayPolicies();
  return DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___();
}
