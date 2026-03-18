/*
 * XREFs of CmpLockRegistryExclusive @ 0x14071B6EC
 * Callers:
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpCommitLightWeightTransaction @ 0x14065CE0C (CmpCommitLightWeightTransaction.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E26C4 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1406E5950 (CmpDelayFreeRMWorker.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpCleanupTransactionState @ 0x140742300 (CmpCleanupTransactionState.c)
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     CmpMarkCurrentProfileDirty @ 0x140837E20 (CmpMarkCurrentProfileDirty.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     NtCompactKeys @ 0x14090E310 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14090E5E0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14090E9C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14090EC00 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x1409103FC (CmEtwRunDown.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmFreezeRegistry @ 0x140918C40 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 *     CmGetSystemDriverList @ 0x140B12C84 (CmGetSystemDriverList.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     CmpRecordRegistryLockAcquire @ 0x1402ACA70 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x1402ACD60 (PsBoostThreadIo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpRecordRegistryLockAcquire();
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
