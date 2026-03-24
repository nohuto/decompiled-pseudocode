/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x1405F613C
 * Callers:
 *     CmpDoQueryKeyName @ 0x14027EBD0 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x14036195C (CmpLoadKeyCommon.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14066B9F4 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x14066DF0C (CmpSetKeySecurity.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406A0A00 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x14071A1B8 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14071C570 (CmpLateUnloadHiveWorker.c)
 *     CmpLinkHiveToMaster @ 0x14071E230 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x14071E618 (CmpCreateHive.c)
 *     CmpTransMgrPrepare @ 0x140768D04 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x140768EA0 (CmpTransMgrCommit.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     NtFreezeRegistry @ 0x1408684C0 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x1408686D0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1408688F0 (NtQueryOpenSubKeysEx.c)
 *     CmShutdownSystem @ 0x14086B8F8 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086BC98 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14086D9C8 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x14086DC78 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E13C (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F820 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall CmpDetachFromRegistryProcess(__int64 a1)
{
  return KiUnstackDetachProcess(a1, 0);
}
