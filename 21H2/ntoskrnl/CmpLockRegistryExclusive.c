/*
 * XREFs of CmpLockRegistryExclusive @ 0x14067278C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ED078 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmpLockRegistryFreezeAware @ 0x1406726F0 (CmpLockRegistryFreezeAware.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406A0A00 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x1406A2C98 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A2E10 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1406BF540 (CmpDelayFreeRMWorker.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071D4D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpCleanupTransactionState @ 0x140770484 (CmpCleanupTransactionState.c)
 *     CmCompleteRegistryInitialization @ 0x1407900CC (CmCompleteRegistryInitialization.c)
 *     CmpLoadHiveThread @ 0x14079ED50 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407A57BC (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AABF4 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140868000 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1408682E0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1408686D0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408688F0 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x14086A368 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmFreezeRegistry @ 0x1408720F0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140872330 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x140877184 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x14087CF5C (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x14034D7E0 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
