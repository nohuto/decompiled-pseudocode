/*
 * XREFs of MmUnmapIoSpace @ 0x1403373E0
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140335638 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x1403357F0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14033598C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x140335CC8 (HalpAcpiCheckAndMapTable.c)
 *     MiAllocateContiguousMemory @ 0x14033602C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140337010 (MmFreeContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x140399AF8 (BgpFwLibraryEnable.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403B8054 (HalpAcpiGetAllTablesWork.c)
 *     HalInitializeBios @ 0x1403C1BE0 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403C79C0 (WmipFirmwareTableHandler.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404B5580 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C20E8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MiHugePageOperation @ 0x14052DAA8 (MiHugePageOperation.c)
 *     WmipGetSMBiosTableData @ 0x1406DE5D4 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407BD3D4 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x14088B5D0 (HvlDeleteProcessor.c)
 *     MiMapNewPfns @ 0x1408C26D4 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x14092E1F8 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14092E33C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x14092E434 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x14092E628 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x14092E8EC (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14095A314 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140993B94 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x140995B68 (HalpFreeNvsBuffers.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A48B0 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A4B48 (HalpInitGenericErrorSourceEntryV2.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A5CB48 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A5CD4C (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A5CEEC (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A5D1AC (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A64F74 (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x140224C80 (MiMappingHasIoTracker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140284AB0 (MiInsertCachedPte.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiUnmapLargePages @ 0x1403929B4 (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiRemovePteTracker @ 0x140559BC0 (MiRemovePteTracker.c)
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
  __int64 v14; // r8
  bool v15; // zf
  _KPROCESS *v16; // rdx
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
    MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v4);
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
    if ( !MiPteInShadowRange(v7) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_23;
      v15 = (v10 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v15 = (v10 & 1) == 0;
    }
    if ( !v15 )
      v12 = v10 | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v7 = v12;
    if ( v13 )
      MiWritePteShadow(v7, v12, v14);
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
  if ( (unsigned int)MiInsertCachedPte((__int64)&qword_140C4ED40, v7, v8) != 1 )
  {
    MiFlushTbList((__int64)v19, v16);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL);
  }
}
