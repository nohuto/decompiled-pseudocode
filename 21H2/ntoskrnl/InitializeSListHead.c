/*
 * XREFs of InitializeSListHead @ 0x14035E3E0
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14035DAD0 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializePagedLookasideListInternal @ 0x14035E040 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x14035E1E0 (ExInitializeLookasideListExInternal.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14037A700 (ExInitializeNPagedLookasideListInternal.c)
 *     RtlpHpVsContextInitialize @ 0x14037B70C (RtlpHpVsContextInitialize.c)
 *     MiInitializeNuma @ 0x1403AFCA8 (MiInitializeNuma.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403B4750 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     RtlpDynamicLookasideInitialize @ 0x1403C3CD0 (RtlpDynamicLookasideInitialize.c)
 *     MiInitializePageFaultResources @ 0x1403CA778 (MiInitializePageFaultResources.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F4028 (HvlpSetupCachedHypercallPages.c)
 *     MmInitializeProcessAddressSpace @ 0x1407114D4 (MmInitializeProcessAddressSpace.c)
 *     WdipSemInitializeGlobalState @ 0x14079AAF4 (WdipSemInitializeGlobalState.c)
 *     MiInitializePartition @ 0x14079C65C (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14079CB94 (MiInitializeSections.c)
 *     MiCreatePagefile @ 0x1407B7250 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x1407BED40 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407BEF7C (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14091191C (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x140930218 (WdipSemFreePool.c)
 *     EtwpInitializeStackTracing @ 0x1409357BC (EtwpInitializeStackTracing.c)
 *     EtwpEnableStackCaching @ 0x140941C94 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409422B8 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140945160 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409451F4 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x14099AAF4 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x14099C6E4 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x14099C788 (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409D7350 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x1409E0220 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A6E944 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(0x80000002);
  *SListHead = 0LL;
}
