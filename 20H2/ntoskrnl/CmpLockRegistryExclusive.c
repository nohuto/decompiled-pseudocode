/*
 * XREFs of CmpLockRegistryExclusive @ 0x1407013AC
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 *     CmpCommitLightWeightTransaction @ 0x1406A10F8 (CmpCommitLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A1210 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpDelayFreeRMWorker @ 0x1406DF440 (CmpDelayFreeRMWorker.c)
 *     CmpLockRegistryFreezeAware @ 0x140701310 (CmpLockRegistryFreezeAware.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpTransMgrCommitUoW @ 0x1407606AC (CmpTransMgrCommitUoW.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     CmCompleteRegistryInitialization @ 0x1407909DC (CmCompleteRegistryInitialization.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14079B704 (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x14086A3E0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14086A6C0 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14086AAB0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14086ACD0 (NtQueryOpenSubKeysEx.c)
 *     CmEtwRunDown @ 0x14086C738 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 *     CmFreezeRegistry @ 0x1408748A0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140874AE0 (CmThawRegistry.c)
 *     CmpCloneHwProfile @ 0x140879804 (CmpCloneHwProfile.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A5E798 (CmGetSystemDriverList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIo @ 0x140223930 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
