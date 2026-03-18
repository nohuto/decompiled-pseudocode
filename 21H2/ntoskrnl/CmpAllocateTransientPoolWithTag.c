/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x14024AC60
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x14065C7A4 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x14065C8A4 (CmpKeyEnumStackStart.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14065D114 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14065DE48 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightCreateModificationData @ 0x14065E480 (CmpLightWeightCreateModificationData.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 *     CmpStartKeyNodeStack @ 0x14069F324 (CmpStartKeyNodeStack.c)
 *     CmpBuildAdminInformation @ 0x1406B6958 (CmpBuildAdminInformation.c)
 *     CmAllocateExtraParameter @ 0x1406CC8F8 (CmAllocateExtraParameter.c)
 *     CmLoadKey @ 0x1406DD184 (CmLoadKey.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406E137C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpAddToHiveFileList @ 0x1406E36C4 (CmpAddToHiveFileList.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E9124 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpDoFileWrite @ 0x140714594 (CmpDoFileWrite.c)
 *     CmpMarkIndexDirty @ 0x140715A2C (CmpMarkIndexDirty.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpStartKcbStack @ 0x1407C07F4 (CmpStartKcbStack.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     CmpGetNameControlBlock @ 0x1407C3E50 (CmpGetNameControlBlock.c)
 *     CmQueryValueKey @ 0x1407C83F0 (CmQueryValueKey.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407C8830 (CmpConstructNameFromKeyNodes.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14080FD00 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14080FD5C (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateRegistryProcessToken @ 0x1408315A4 (CmpCreateRegistryProcessToken.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmpReadBuildLab @ 0x140911D28 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x140911EA8 (CmpRecordShutdownStopTime.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1409152A4 (CmpLockKeyBodyIntoMemory.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140918BC4 (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x14091ADA0 (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x14091B2F0 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x14091BB78 (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x14091BF58 (CmpDoReadTxRBigLogRecord.c)
 *     CmpCopySyncTree @ 0x14091EE14 (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x14091FCD8 (CmpMergeKeyValues.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140920D44 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpGetValueForAudit @ 0x140921930 (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140921BE8 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140921D8C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140923D00 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AB4A4C (CmpDoAccessCheckOnSubtree.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
