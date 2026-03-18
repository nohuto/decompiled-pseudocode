/*
 * XREFs of PpmPerfReApplyStates @ 0x1407763A0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037CE48 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x1403807E8 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x140788AF0 (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  return PpmCheckCustomRun(2);
}
