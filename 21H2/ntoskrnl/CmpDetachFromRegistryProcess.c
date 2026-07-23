/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x1406E589C
 * Callers:
 *     CmpDoQueryKeyName @ 0x14026CB70 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x14026D10C (CmpLoadKeyCommon.c)
 *     CmpPerformUnloadKey @ 0x1405DFA8C (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1405DFF10 (CmpLateUnloadHiveWorker.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmEnumerateKey @ 0x1406E3AB0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x140769060 (CmpTransMgrCommit.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     NtFreezeRegistry @ 0x140868620 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x140868830 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868A50 (NtQueryOpenSubKeysEx.c)
 *     CmShutdownSystem @ 0x14086BA58 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086BDF8 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F980 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall CmpDetachFromRegistryProcess(__int64 a1)
{
  return KiUnstackDetachProcess(a1, 0LL);
}
