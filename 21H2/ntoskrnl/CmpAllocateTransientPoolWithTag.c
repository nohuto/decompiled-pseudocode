/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x140206F90
 * Callers:
 *     CmAllocateExtraParameter @ 0x1405D3740 (CmAllocateExtraParameter.c)
 *     CmpBuildAdminInformation @ 0x1405D9BE0 (CmpBuildAdminInformation.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetNameControlBlock @ 0x1405EFC10 (CmpGetNameControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x1405F2FF0 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405F3210 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140665D30 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14066CCFC (CmpSetSecurityDescriptorInfo.c)
 *     CmLoadAppKey @ 0x14066FEEC (CmLoadAppKey.c)
 *     CmpDoFileWrite @ 0x1406715BC (CmpDoFileWrite.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4248 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406A4644 (CmpLightWeightCreateSetValueData.c)
 *     CmLoadKey @ 0x1406BA714 (CmLoadKey.c)
 *     CmpAddToHiveFileList @ 0x1406BF09C (CmpAddToHiveFileList.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406C25F4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpParseKey @ 0x1406F8C10 (CmpParseKey.c)
 *     CmpStartKcbStack @ 0x1406FB380 (CmpStartKcbStack.c)
 *     CmpReorganizeHive @ 0x140720AB8 (CmpReorganizeHive.c)
 *     CmpSubtreeEnumeratorStart @ 0x14072A08C (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x14072A18C (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x14072A1E8 (CmpStartKeyNodeStack.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1407319B8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140778C38 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A72B0 (CmpFinishSystemHivesLoad.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407C32FC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407C3358 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C66A4 (CmpCreateRegistryProcessToken.c)
 *     CmpSaveBootControlSet @ 0x140867A80 (CmpSaveBootControlSet.c)
 *     CmpReadBuildLab @ 0x14086BE14 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x14086BF90 (CmpRecordShutdownStopTime.c)
 *     CmReplaceKey @ 0x14086D9C8 (CmReplaceKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140871AC4 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140872074 (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x1408740BC (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x1408746E0 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x140874F8C (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140875374 (CmpDoReadTxRBigLogRecord.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087A7E4 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpGetValueForAudit @ 0x14087B3E0 (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14087B728 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087B8FC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 *     CmpLightWeightCreateModificationData @ 0x14087F20C (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087F610 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpPromoteKey @ 0x1408802C8 (CmpPromoteKey.c)
 *     VerifierExAllocatePoolEx @ 0x1409D4C50 (VerifierExAllocatePoolEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
