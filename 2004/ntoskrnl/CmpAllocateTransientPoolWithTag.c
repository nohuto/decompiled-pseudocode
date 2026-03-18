/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x1402036A0
 * Callers:
 *     CmAllocateExtraParameter @ 0x1405CAB80 (CmAllocateExtraParameter.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetNameControlBlock @ 0x1405E7DD0 (CmpGetNameControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x1405E8840 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405E89F0 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpParseKey @ 0x1405EE060 (CmpParseKey.c)
 *     CmpStartKcbStack @ 0x1405F0A70 (CmpStartKcbStack.c)
 *     CmpDoFileWrite @ 0x14061E5DC (CmpDoFileWrite.c)
 *     CmpReorganizeHive @ 0x14063B384 (CmpReorganizeHive.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063DCA4 (CmpSetSecurityDescriptorInfo.c)
 *     CmLoadKey @ 0x1406525D0 (CmLoadKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406549D4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406557BC (CmpLightWeightCreateSetValueData.c)
 *     CmpBuildAdminInformation @ 0x1406DD170 (CmpBuildAdminInformation.c)
 *     CmpAddToHiveFileList @ 0x14070CBDC (CmpAddToHiveFileList.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14070FBA0 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpSubtreeEnumeratorStart @ 0x1407185AC (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x1407186AC (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x140718708 (CmpStartKeyNodeStack.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14071F638 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140765C58 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpCreateRegistryProcessToken @ 0x1407817F8 (CmpCreateRegistryProcessToken.c)
 *     CmpFinishSystemHivesLoad @ 0x140790950 (CmpFinishSystemHivesLoad.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407B0FBC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407B1018 (CmpCreateSiloKeyLockEntry.c)
 *     CmpSaveBootControlSet @ 0x140864450 (CmpSaveBootControlSet.c)
 *     CmpReadBuildLab @ 0x1408687C4 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x140868940 (CmpRecordShutdownStopTime.c)
 *     CmReplaceKey @ 0x14086A778 (CmReplaceKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14086E720 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14086ECD0 (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x140870C80 (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x1408712B0 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x140871B54 (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140871F3C (CmpDoReadTxRBigLogRecord.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408772EC (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpGetValueForAudit @ 0x140877EF0 (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140878238 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087840C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpRefreshHive @ 0x140879EF4 (CmpRefreshHive.c)
 *     CmpLightWeightCreateModificationData @ 0x14087C13C (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087C540 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 *     VerifierExAllocatePoolEx @ 0x1409D1C40 (VerifierExAllocatePoolEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
