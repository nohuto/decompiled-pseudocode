/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x140204C50
 * Callers:
 *     CmAllocateExtraParameter @ 0x1405D0D40 (CmAllocateExtraParameter.c)
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpParseKey @ 0x140619690 (CmpParseKey.c)
 *     CmpStartKcbStack @ 0x14061B490 (CmpStartKcbStack.c)
 *     CmpDoFileWrite @ 0x14064F21C (CmpDoFileWrite.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetNameControlBlock @ 0x140672990 (CmpGetNameControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x140675D10 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x140675EC0 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4758 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406A55B8 (CmpLightWeightCreateSetValueData.c)
 *     CmpBuildAdminInformation @ 0x1406C34D4 (CmpBuildAdminInformation.c)
 *     CmLoadKey @ 0x1406DAE70 (CmLoadKey.c)
 *     CmpAddToHiveFileList @ 0x1406DF078 (CmpAddToHiveFileList.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E23E4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x14072656C (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x14072666C (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x1407266C8 (CmpStartKeyNodeStack.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14072D688 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140774C88 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407BEEFC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407BEF58 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateRegistryProcessToken @ 0x1407C23A4 (CmpCreateRegistryProcessToken.c)
 *     CmpSaveBootControlSet @ 0x140869E70 (CmpSaveBootControlSet.c)
 *     CmpReadBuildLab @ 0x14086E1E4 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x14086E360 (CmpRecordShutdownStopTime.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140874278 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140874828 (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x1408767D8 (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x140876E00 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x1408776A4 (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140877A8C (CmpDoReadTxRBigLogRecord.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087CE68 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpGetValueForAudit @ 0x14087DA6C (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14087DDB4 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087DF88 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpRefreshHive @ 0x14087FA64 (CmpRefreshHive.c)
 *     CmpLightWeightCreateModificationData @ 0x140881CF4 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1408820F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 *     VerifierExAllocatePoolEx @ 0x1409D7C60 (VerifierExAllocatePoolEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
