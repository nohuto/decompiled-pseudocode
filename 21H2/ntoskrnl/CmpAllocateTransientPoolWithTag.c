/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x14023EDD0
 * Callers:
 *     CmAllocateExtraParameter @ 0x1405D3740 (CmAllocateExtraParameter.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1405E1D18 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1405E2114 (CmpLightWeightCreateSetValueData.c)
 *     CmpBuildAdminInformation @ 0x1405EA960 (CmpBuildAdminInformation.c)
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     CmpAddToHiveFileList @ 0x14061E11C (CmpAddToHiveFileList.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406212B4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140661B1C (CmpSetSecurityDescriptorInfo.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmpDoFileWrite @ 0x1406A362C (CmpDoFileWrite.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetNameControlBlock @ 0x1406DF370 (CmpGetNameControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406E2970 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     CmpReorganizeHive @ 0x1406F7F2C (CmpReorganizeHive.c)
 *     CmpParseKey @ 0x14070FFF0 (CmpParseKey.c)
 *     CmpStartKcbStack @ 0x140712760 (CmpStartKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x14072A53C (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x14072A63C (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x14072A698 (CmpStartKeyNodeStack.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140731B78 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140778DF8 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A74B0 (CmpFinishSystemHivesLoad.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407C381C (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407C3878 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C69C4 (CmpCreateRegistryProcessToken.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 *     CmpReadBuildLab @ 0x14086BF74 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x14086C0F0 (CmpRecordShutdownStopTime.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140871C24 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1408721D4 (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x140874840 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x1408750EC (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x1408754D4 (CmpDoReadTxRBigLogRecord.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087A944 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpGetValueForAudit @ 0x14087B540 (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14087B888 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087BA5C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 *     CmpLightWeightCreateModificationData @ 0x14087F36C (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087F770 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 *     VerifierExAllocatePoolEx @ 0x1409D5C50 (VerifierExAllocatePoolEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
