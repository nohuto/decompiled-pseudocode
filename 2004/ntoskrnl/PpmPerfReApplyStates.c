/*
 * XREFs of PpmPerfReApplyStates @ 0x140767370
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037B118 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14037EAB8 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x14077A4F0 (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  return PpmCheckCustomRun(2);
}
