/*
 * XREFs of InitializeSListHead @ 0x1402C1F70
 * Callers:
 *     ExInitializeLookasideListExInternal @ 0x1402C1D70 (ExInitializeLookasideListExInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x1402C2430 (ExInitializePagedLookasideListInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402CB5FC (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403779C0 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x1403789CC (RtlpHpVsContextInitialize.c)
 *     MiInitializeNuma @ 0x1403AD7D4 (MiInitializeNuma.c)
 *     RtlpDynamicLookasideInitialize @ 0x1403BFF40 (RtlpDynamicLookasideInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C41D8 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiInitializePageFaultResources @ 0x1403C6228 (MiInitializePageFaultResources.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404EE5DC (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x14064EE7C (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x140783F50 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x140784488 (MiInitializeSections.c)
 *     WdipSemInitializeGlobalState @ 0x140786698 (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x14079F2D0 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1407A989C (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407A9AD8 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14090D28C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x14092B968 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x140930F0C (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x14093D484 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093DAA8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140940950 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409409E4 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140996164 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140997D24 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140997DC8 (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409D42E0 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1409DD1B0 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6AE58 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
