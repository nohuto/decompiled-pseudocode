/*
 * XREFs of CmpLockRegistryExclusive @ 0x14069120C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpCommitLightWeightTransaction @ 0x140656638 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x140656718 (CmpCleanupLightWeightTransaction.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmpTransMgrFreeVolatileData @ 0x14068E3E8 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryFreezeAware @ 0x140691170 (CmpLockRegistryFreezeAware.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDelayFreeRMWorker @ 0x1406E91B0 (CmpDelayFreeRMWorker.c)
 *     CmpTransMgrCommitUoW @ 0x14074D43C (CmpTransMgrCommitUoW.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     CmCompleteRegistryInitialization @ 0x14077A5E4 (CmCompleteRegistryInitialization.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14078CE7C (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1408636A0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140863980 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140863D70 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140863F90 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x1408659F8 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmFreezeRegistry @ 0x14086D288 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x1408729C4 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x140878768 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A58398 (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x140263840 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
