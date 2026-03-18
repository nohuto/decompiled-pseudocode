/*
 * XREFs of ??$SmmAcquirePushLockExclusive@$0EA@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EA@@@@Z @ 0x1C006D714
 * Callers:
 *     ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x1C03C0080 (-SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 SmmAcquirePushLockExclusive<64>()
{
  return ExAcquirePushLockExclusiveEx(&SmmDomainChangeGlobalLock, 0LL);
}
