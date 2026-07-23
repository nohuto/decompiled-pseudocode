/*
 * XREFs of CmpLockRegistryExclusive @ 0x1406679BC
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpCommitLightWeightTransaction @ 0x1405DE998 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1405DEB10 (CmpCleanupLightWeightTransaction.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDelayFreeRMWorker @ 0x14061E450 (CmpDelayFreeRMWorker.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmpTransMgrFreeVolatileData @ 0x140663F6C (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     CmCompleteRegistryInitialization @ 0x14079167C (CmCompleteRegistryInitialization.c)
 *     CmpLoadHiveThread @ 0x14079EF50 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407A59BC (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x140868160 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140868440 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140868830 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868A50 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x14086A4C8 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmFreezeRegistry @ 0x140872250 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140872490 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x1408772E4 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x14087D0BC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x140358530 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
