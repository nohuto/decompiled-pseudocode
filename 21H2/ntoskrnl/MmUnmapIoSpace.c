/*
 * XREFs of MmUnmapIoSpace @ 0x140297530
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140294540 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x140294700 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14029489C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x140294BD8 (HalpAcpiCheckAndMapTable.c)
 *     MiAllocateContiguousMemory @ 0x140294F3C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140295F20 (MmFreeContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14039C888 (BgpFwLibraryEnable.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BB4F4 (HalpAcpiGetAllTablesWork.c)
 *     HalInitializeBios @ 0x1403C4AB0 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403CAFD0 (WmipFirmwareTableHandler.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404BA460 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C6FD8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MiHugePageOperation @ 0x140532F78 (MiHugePageOperation.c)
 *     WmipGetSMBiosTableData @ 0x14068276C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407CFF24 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x14088E6C0 (HvlDeleteProcessor.c)
 *     MiMapNewPfns @ 0x1408C5CD4 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x1409317F8 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14093193C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140931A34 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140931C28 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x140931EEC (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14095D954 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140996EE4 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x140998EB8 (HalpFreeNvsBuffers.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A76E0 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A7978 (HalpInitGenericErrorSourceEntryV2.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A654C8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A656CC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6586C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A65B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6967C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140245C00 (MiInsertCachedPte.c)
 *     MiZeroAndFlushPtes @ 0x140297640 (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMappingHasIoTracker @ 0x14031CB40 (MiMappingHasIoTracker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiUnmapLargePages @ 0x1403952E4 (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiRemovePteTracker @ 0x14055F060 (MiRemovePteTracker.c)
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
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  _QWORD v22[24]; // [rsp+30h] [rbp-108h] BYREF

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
    MiReleasePtes((__int64)&qword_140C4EF40, (_QWORD *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), v4);
    return;
  }
  if ( (v2 & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v22, 0, 0xB8uLL);
  do
  {
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v22[3] = 0LL;
  v8 = v2 >> 21;
  LODWORD(v22[1]) = 20;
  if ( HasIoTracker )
    goto LABEL_28;
  v9 = 0;
  v11 = MiSwizzleInvalidPte(768LL);
  if ( !(_DWORD)v8 )
    goto LABEL_27;
  v12 = (unsigned int)v8;
  v9 = v2 >> 21;
  do
  {
    v13 = v11;
    v14 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v7, v10) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_23;
      v19 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v19 = (v11 & 1) == 0;
    }
    if ( !v19 )
      v13 = v11 | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v7 = v13;
    if ( v14 )
      MiWritePteShadow(v7, v13);
    MiInsertLargeTbFlushEntry(v22, 1LL, v7);
    v7 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)BaseAddress;
  v2 = NumberOfBytes;
LABEL_27:
  v7 -= 8LL * v9;
LABEL_28:
  if ( (unsigned int)MiInsertCachedPte((__int64)&qword_140C4EF40, v7, (unsigned int)v8) != 1 )
  {
    MiFlushTbList(v22);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL);
  }
}
