/*
 * XREFs of CmpLockRegistryExclusive @ 0x1406400FC
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmpLockRegistryFreezeAware @ 0x140640060 (CmpLockRegistryFreezeAware.c)
 *     CmpTransMgrFreeVolatileData @ 0x140642ECC (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x140653348 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140653428 (CmpCleanupLightWeightTransaction.c)
 *     CmEnumerateKey @ 0x140672240 (CmEnumerateKey.c)
 *     CmpDelayFreeRMWorker @ 0x14070D010 (CmpDelayFreeRMWorker.c)
 *     CmpTransMgrCommitUoW @ 0x140751ACC (CmpTransMgrCommitUoW.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 *     CmCompleteRegistryInitialization @ 0x140782FEC (CmCompleteRegistryInitialization.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14078ED4C (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1408649C0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140864CA0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140865090 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408652B0 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x140866D18 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x1408682A8 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x14086934C (CmRenameKey.c)
 *     CmFreezeRegistry @ 0x14086ED48 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14086EF88 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x140873CB4 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x140879A58 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 *     CmGetSystemDriverList @ 0x140A4B2CC (CmGetSystemDriverList.c)
 *     CmInitSystem1 @ 0x140A582D4 (CmInitSystem1.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x14020A920 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
