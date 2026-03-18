/*
 * XREFs of MmUnmapIoSpace @ 0x1402611D0
 * Callers:
 *     HalpAcpiGetRsdt @ 0x14025EE38 (HalpAcpiGetRsdt.c)
 *     HalpAcpiGetTableWork @ 0x14025EFF0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x14025F18C (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiCheckAndMapTable @ 0x14025FC74 (HalpAcpiCheckAndMapTable.c)
 *     MiAllocateContiguousMemory @ 0x14025FFCC (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x1402619D0 (MmFreeContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14039BFB8 (BgpFwLibraryEnable.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BAAF4 (HalpAcpiGetAllTablesWork.c)
 *     HalInitializeBios @ 0x1403C4350 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403CA600 (WmipFirmwareTableHandler.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404B8AA0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C5608 (HalpDmaAllocateNewTranslationBuffer.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     WmipGetSMBiosTableData @ 0x14065C898 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407CBC64 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x140891120 (HvlDeleteProcessor.c)
 *     MiMapNewPfns @ 0x1408C8514 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x140934028 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14093416C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140934264 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140934458 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x14093471C (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x1409600D4 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140999CF4 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x14099BCC8 (HalpFreeNvsBuffers.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409AA810 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409AAAA8 (HalpInitGenericErrorSourceEntryV2.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A63EA8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A640AC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6424C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A6450C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6C244 (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiZeroAndFlushPtes @ 0x1402612E0 (MiZeroAndFlushPtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x140294850 (MiInsertCachedPte.c)
 *     MiMappingHasIoTracker @ 0x140295480 (MiMappingHasIoTracker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiUnmapLargePages @ 0x140394E74 (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiRemovePteTracker @ 0x14055D590 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // r15
  unsigned __int64 v3; // rbp
  SIZE_T v4; // rbx
  int HasIoTracker; // edi
  __int64 v6; // r9
  int v7; // r14d
  unsigned __int64 v8; // rsi
  SIZE_T v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  __int64 v20; // rdx
  _QWORD v23[24]; // [rsp+30h] [rbp-108h] BYREF

  v2 = NumberOfBytes;
  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_140CFB17C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(v3);
  v7 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(v3, v4);
  v8 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v7 )
  {
    MiReleasePtes(&qword_140C4EDC0, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v4);
    return;
  }
  if ( (v2 & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v23, 0, 0xB8uLL);
  do
  {
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  v23[3] = 0LL;
  v9 = v2 >> 21;
  LODWORD(v23[1]) = 20;
  if ( HasIoTracker )
    goto LABEL_28;
  v10 = 0;
  v11 = MiSwizzleInvalidPte(768LL);
  if ( !(_DWORD)v9 )
    goto LABEL_27;
  v12 = (unsigned int)v9;
  v10 = v2 >> 21;
  do
  {
    v13 = v11;
    v14 = 0;
    if ( !MiPteInShadowRange(v8) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4DE88) )
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
    *(_QWORD *)v8 = v13;
    if ( v14 )
      MiWritePteShadow(v8, v13);
    MiInsertLargeTbFlushEntry(v23, 1LL, v8);
    v8 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)BaseAddress;
  v2 = NumberOfBytes;
LABEL_27:
  v8 -= 8LL * v10;
LABEL_28:
  if ( (unsigned int)MiInsertCachedPte(&qword_140C4EDC0, v8, (unsigned int)v9) != 1 )
  {
    MiFlushTbList(v23, v20);
LABEL_9:
    MiUnmapLargePages(v3, v2, 9LL, v6);
  }
}
