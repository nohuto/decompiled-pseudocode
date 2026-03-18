/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x14025C5C0
 * Callers:
 *     CmAllocateExtraParameter @ 0x1405C97B0 (CmAllocateExtraParameter.c)
 *     CmLoadKey @ 0x1405D5730 (CmLoadKey.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetNameControlBlock @ 0x14061D3F0 (CmpGetNameControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x14061E010 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpParseKey @ 0x140623680 (CmpParseKey.c)
 *     CmpStartKcbStack @ 0x140626090 (CmpStartKcbStack.c)
 *     CmpLightWeightCreateSetValueData @ 0x140656D4C (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140656F34 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpDoFileWrite @ 0x140663CFC (CmpDoFileWrite.c)
 *     CmpReorganizeHive @ 0x140688F04 (CmpReorganizeHive.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14068B1C0 (CmpSetSecurityDescriptorInfo.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     CmpBuildAdminInformation @ 0x1406BBF30 (CmpBuildAdminInformation.c)
 *     CmpAddToHiveFileList @ 0x1406E8D3C (CmpAddToHiveFileList.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406EC080 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpSubtreeEnumeratorStart @ 0x14071621C (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x14071631C (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x140716378 (CmpStartKeyNodeStack.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14071D9B8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140764238 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpCreateRegistryProcessToken @ 0x14078721C (CmpCreateRegistryProcessToken.c)
 *     CmpFinishSystemHivesLoad @ 0x14078E760 (CmpFinishSystemHivesLoad.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407ADE5C (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407ADEB8 (CmpCreateSiloKeyLockEntry.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 *     CmpReadBuildLab @ 0x140867474 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x1408675F0 (CmpRecordShutdownStopTime.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14086CC60 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14086D210 (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x14086F190 (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x14086F7C0 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x140870874 (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140870C5C (CmpDoReadTxRBigLogRecord.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140875FFC (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpGetValueForAudit @ 0x140876C00 (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140876F48 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087711C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpRefreshHive @ 0x140878C04 (CmpRefreshHive.c)
 *     CmpLightWeightCreateModificationData @ 0x14087AE4C (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087B250 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 *     VerifierExAllocatePoolEx @ 0x1409D1BE0 (VerifierExAllocatePoolEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
