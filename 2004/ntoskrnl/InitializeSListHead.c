/*
 * XREFs of InitializeSListHead @ 0x1402FDA50
 * Callers:
 *     ExInitializeLookasideListExInternal @ 0x1402FD850 (ExInitializeLookasideListExInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14030D23C (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x140353190 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403787D0 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x14037978C (RtlpHpVsContextInitialize.c)
 *     MiInitializeNuma @ 0x1403A73B4 (MiInitializeNuma.c)
 *     RtlpDynamicLookasideInitialize @ 0x1403C0E00 (RtlpDynamicLookasideInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C5148 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiInitializePageFaultResources @ 0x1403C7198 (MiInitializePageFaultResources.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404EEC2C (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1406B424C (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x140780EE8 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140781420 (MiInitializeSections.c)
 *     WdipSemInitializeGlobalState @ 0x14079C070 (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x1407A32B0 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1407AC9FC (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407ACC38 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14090E62C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x14092CC18 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x1409321BC (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x14093E704 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093ED28 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140941BD0 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x140941C64 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140997534 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140998D84 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140998E28 (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409D4340 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1409DD210 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6B0B8 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
