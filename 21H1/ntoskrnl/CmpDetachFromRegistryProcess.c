/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x140621720
 * Callers:
 *     CmpDoQueryKeyName @ 0x14025BE50 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405EACD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateKey @ 0x1405FA160 (CmEnumerateKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmQueryKey @ 0x14061F340 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14065AD30 (CmpLateUnloadHiveWorker.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     NtFreezeRegistry @ 0x140863B60 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x140863D70 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140863F90 (NtQueryOpenSubKeysEx.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x1408672F8 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A58398 (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall CmpDetachFromRegistryProcess(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return KiUnstackDetachProcess(a1, 0LL, a3, a4);
}
