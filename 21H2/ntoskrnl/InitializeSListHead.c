/*
 * XREFs of InitializeSListHead @ 0x1402A3310
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402A2A00 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x1402A2F70 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x1402A3110 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A250 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x14037B25C (RtlpHpVsContextInitialize.c)
 *     MiInitializeNuma @ 0x1403AFE18 (MiInitializeNuma.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B48C0 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     RtlpDynamicLookasideInitialize @ 0x1403C4100 (RtlpDynamicLookasideInitialize.c)
 *     MiInitializePageFaultResources @ 0x1403CA918 (MiInitializePageFaultResources.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F3FA8 (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 *     WdipSemInitializeGlobalState @ 0x14079ACF4 (WdipSemInitializeGlobalState.c)
 *     MiInitializePartition @ 0x14079C85C (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14079CD94 (MiInitializeSections.c)
 *     MiCreatePagefile @ 0x1407B7770 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407BF498 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x140911A7C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x140930378 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x14093598C (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140941E64 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942488 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140945330 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409453C4 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099BAF4 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x14099D6E4 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x14099D788 (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409D8350 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1409E1220 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6F944 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
