/*
 * XREFs of InitializeSListHead @ 0x1402A05A0
 * Callers:
 *     ExInitializeNPagedLookasideListInternal @ 0x140250C50 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x140251C60 (ExInitializePagedLookasideListInternal.c)
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140260D58 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeLookasideListExInternal @ 0x1402A03B0 (ExInitializeLookasideListExInternal.c)
 *     RtlpHpVsContextInitialize @ 0x14036FF40 (RtlpHpVsContextInitialize.c)
 *     MiInitializeNuma @ 0x1403B7358 (MiInitializeNuma.c)
 *     MiInitializePageFaultResources @ 0x1403B7B80 (MiInitializePageFaultResources.c)
 *     RtlpDynamicLookasideInitialize @ 0x1403C4368 (RtlpDynamicLookasideInitialize.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1403D6F40 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HvlpSetupCachedHypercallPages @ 0x14054560C (HvlpSetupCachedHypercallPages.c)
 *     EtwpInitLoggerContext @ 0x1406EFD44 (EtwpInitLoggerContext.c)
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 *     MiInitializePartition @ 0x14081D450 (MiInitializePartition.c)
 *     MiInitializeSections @ 0x14081D9C8 (MiInitializeSections.c)
 *     WdipSemInitializeGlobalState @ 0x140840FF8 (WdipSemInitializeGlobalState.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 *     PfTInitialize @ 0x14084F9EC (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x14084FC2C (PfFbBufferListInitialize.c)
 *     EtwpEnableStackCaching @ 0x140883718 (EtwpEnableStackCaching.c)
 *     RtlStdInitializeStackDatabase @ 0x1409B74BC (RtlStdInitializeStackDatabase.c)
 *     WdipSemFreePool @ 0x1409DAC68 (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EEA80 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x1409F1710 (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1409F17A4 (EtwpCovSampLookasideInitialize.c)
 *     PfTAccessTracingInitialize @ 0x140A485D4 (PfTAccessTracingInitialize.c)
 *     ExInitializeSystemLookasideList @ 0x140A57C10 (ExInitializeSystemLookasideList.c)
 *     KiInitPrcb @ 0x140A57CB4 (KiInitPrcb.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140A8B104 (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140A9A2E8 (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140B2A068 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(2147483650LL);
  *SListHead = 0LL;
}
