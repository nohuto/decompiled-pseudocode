/*
 * XREFs of InitializeSListHead @ 0x140338AF0
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403381E4 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x140338750 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x1403388F0 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A500 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x14037B4BC (RtlpHpVsContextInitialize.c)
 *     MiInitializeNuma @ 0x1403A9D9C (MiInitializeNuma.c)
 *     RtlpDynamicLookasideInitialize @ 0x1403C3570 (RtlpDynamicLookasideInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403C7B38 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiInitializePageFaultResources @ 0x1403C9DD8 (MiInitializePageFaultResources.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F2488 (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1406EEAB4 (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14078E400 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14078E938 (MiInitializeSections.c)
 *     WdipSemInitializeGlobalState @ 0x1407AB3A0 (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x1407B25E0 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1407BA93C (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407BAB78 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14091416C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x140932A48 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x140937FEC (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1409444C4 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140947990 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x140947A24 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099D574 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x14099EDC4 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x14099EE68 (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409DA360 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1409E3230 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A719C4 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
