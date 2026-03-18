/*
 * XREFs of MmUnmapIoSpace @ 0x140215660
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140213908 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x140213AC0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140213C5C (HalpAcpiIsCachedTableCompromised.c)
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140214244 (MiAllocateContiguousMemory.c)
 *     HalpAcpiCheckAndMapTable @ 0x140215144 (HalpAcpiCheckAndMapTable.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140396A68 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     BgpFwLibraryEnable @ 0x1403AA8D8 (BgpFwLibraryEnable.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BED70 (HalpAcpiGetAllTablesWork.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403D9B80 (WmipFirmwareTableHandler.c)
 *     HalpMcaExtendedLogInitialize @ 0x140506DF0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140512EF0 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     WmipReadSMBiosSysInfo @ 0x14062C800 (WmipReadSMBiosSysInfo.c)
 *     WmipGetSMBiosTableData @ 0x140693800 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085FAA4 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x140931100 (HvlDeleteProcessor.c)
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x1409DC350 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DC494 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DC58C (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1409DC80C (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1409DCAD0 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A092FC (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140A52AD8 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x140A52D84 (HalpFreeNvsBuffers.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A5AEB0 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A61D50 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpAuditQuerySlicAddresses @ 0x140AF8D68 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140AF8F6C (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140AF910C (HalpAuditGetExtendedBiosDataArea.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B1D9DC (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B2388C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMappingHasIoTracker @ 0x140215774 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1402BBAD0 (MiInsertCachedPte.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiUnmapLargePages @ 0x1403A111C (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiRemovePteTracker @ 0x1405B6E94 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // r15
  unsigned __int64 v3; // rbp
  SIZE_T v4; // rbx
  int HasIoTracker; // edi
  int v6; // r14d
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  SIZE_T v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  _QWORD v20[24]; // [rsp+30h] [rbp-108h] BYREF

  v2 = NumberOfBytes;
  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_140D051BC & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(v3);
  v6 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( HasIoTracker )
    MiZeroAndFlushPtes(v3, v4, 0LL);
  v7 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v6 )
  {
    MiReleasePtes(&qword_140C534C0, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v4);
    return;
  }
  if ( (v2 & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v20, 0, 0xB8uLL);
  do
  {
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v20[3] = 0LL;
  v9 = v2 >> 21;
  LODWORD(v20[1]) = 20;
  if ( HasIoTracker )
    goto LABEL_28;
  v10 = 0;
  v11 = MiSwizzleInvalidPte(768LL, v8);
  if ( !(_DWORD)v9 )
    goto LABEL_27;
  v12 = (unsigned int)v9;
  v10 = v2 >> 21;
  do
  {
    v13 = v11;
    v14 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v7) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow(v16, v15) )
    {
      v14 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_23;
      v17 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v17 = (v11 & 1) == 0;
    }
    if ( !v17 )
      v13 = v11 | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v7 = v13;
    if ( v14 )
      MiWritePteShadow(v7, v13);
    MiInsertLargeTbFlushEntry(v20, 1LL, v7);
    v7 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)BaseAddress;
  v2 = NumberOfBytes;
LABEL_27:
  v7 -= 8LL * v10;
LABEL_28:
  if ( !(unsigned int)MiInsertCachedPte(&qword_140C534C0, v7, (unsigned int)v9) )
  {
    MiFlushTbList(v20);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL);
  }
}
