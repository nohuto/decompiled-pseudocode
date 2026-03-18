/*
 * XREFs of PpmPerfReApplyStates @ 0x1407659B0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14037A398 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14037DFF8 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmUpdateProcessorPolicy @ 0x1407780E0 (PpmUpdateProcessorPolicy.c)
 */

__int64 PpmPerfReApplyStates()
{
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  PpmUpdateProcessorPolicy(&PpmAllowedActions, 0LL);
  return PpmCheckCustomRun(2);
}
