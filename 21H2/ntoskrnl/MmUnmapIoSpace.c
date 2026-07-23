/*
 * XREFs of MmUnmapIoSpace @ 0x140217FB0
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140216204 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x1402163C0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14021655C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x140216898 (HalpAcpiCheckAndMapTable.c)
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14039C9D8 (BgpFwLibraryEnable.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BB664 (HalpAcpiGetAllTablesWork.c)
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403CB140 (WmipFirmwareTableHandler.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404BA6A0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C7218 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     WmipGetSMBiosTableData @ 0x1405E4738 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407D0094 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x14088E820 (HvlDeleteProcessor.c)
 *     MiMapNewPfns @ 0x1408C5E34 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x140931958 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140931A9C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140931B94 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140931D88 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x14093204C (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14095DB34 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140997EE4 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x140999EB8 (HalpFreeNvsBuffers.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A8610 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A88A8 (HalpInitGenericErrorSourceEntryV2.c)
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A664C8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A666CC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6686C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A66B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6A67C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1402EA450 (MiInsertCachedPte.c)
 *     MiMappingHasIoTracker @ 0x140327890 (MiMappingHasIoTracker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiUnmapLargePages @ 0x140395434 (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiRemovePteTracker @ 0x14055F2A0 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // r15
  unsigned __int64 v3; // rbp
  SIZE_T v4; // rbx
  int HasIoTracker; // edi
  int v6; // r14d
  unsigned __int64 v7; // rsi
  SIZE_T v8; // r14
  unsigned int v9; // r13d
  __int64 v10; // rdi
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  _QWORD v19[24]; // [rsp+30h] [rbp-108h] BYREF

  v2 = NumberOfBytes;
  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_140CFB17C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(v3);
  v6 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(v3, v4);
  v7 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v6 )
  {
    MiReleasePtes(&qword_140C4EF80, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v4);
    return;
  }
  if ( (v2 & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v19, 0, 0xB8uLL);
  do
  {
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v19[3] = 0LL;
  v8 = v2 >> 21;
  LODWORD(v19[1]) = 20;
  if ( HasIoTracker )
    goto LABEL_28;
  v9 = 0;
  v10 = MiSwizzleInvalidPte(768LL);
  if ( !(_DWORD)v8 )
    goto LABEL_27;
  v11 = (unsigned int)v8;
  v9 = v2 >> 21;
  do
  {
    v12 = v10;
    v13 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v7) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow(v15, v14) )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_23;
      v16 = (v10 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v16 = (v10 & 1) == 0;
    }
    if ( !v16 )
      v12 = v10 | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v7 = v12;
    if ( v13 )
      MiWritePteShadow(v7);
    MiInsertLargeTbFlushEntry(v19, 1LL, v7);
    v7 += 8LL;
    --v11;
  }
  while ( v11 );
  v3 = (unsigned __int64)BaseAddress;
  v2 = NumberOfBytes;
LABEL_27:
  v7 -= 8LL * v9;
LABEL_28:
  if ( (unsigned int)MiInsertCachedPte(&qword_140C4EF80, v7, (unsigned int)v8) != 1 )
  {
    MiFlushTbList(v19);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL);
  }
}
