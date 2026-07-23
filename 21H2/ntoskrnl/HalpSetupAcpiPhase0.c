/*
 * XREFs of HalpSetupAcpiPhase0 @ 0x140A64D20
 * Callers:
 *     HalpAcpiInitDiscard @ 0x140A64B68 (HalpAcpiInitDiscard.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 *     HalpMap @ 0x1403BBAA8 (HalpMap.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140A64EE0 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpAcpiTableCacheInit @ 0x140A65690 (HalpAcpiTableCacheInit.c)
 *     HalpAllocPhysicalMemory @ 0x140A65AC0 (HalpAllocPhysicalMemory.c)
 *     HalpInitBootTable @ 0x140A65DF0 (HalpInitBootTable.c)
 *     HalpAcpiDetectMachineSpecificActions @ 0x140A65E3C (HalpAcpiDetectMachineSpecificActions.c)
 *     HalpAcpiInitializePmRegisters @ 0x140A65ED8 (HalpAcpiInitializePmRegisters.c)
 *     HalpSetPlatformFlags @ 0x140A66198 (HalpSetPlatformFlags.c)
 *     HalpNumaParseHmat @ 0x140A8E0E4 (HalpNumaParseHmat.c)
 */

__int64 __fastcall HalpSetupAcpiPhase0(__int64 a1)
{
  __int64 result; // rax
  __int64 Table; // rax
  const void *v4; // rdx
  size_t v5; // rax
  size_t v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  void *v11; // rax
  __int64 MemoryInternal; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  if ( !HalpProcessedACPIPhase0 )
  {
    result = HalpAcpiTableCacheInit();
    if ( (int)result < 0 )
      return result;
    Table = HalpAcpiGetTable(a1, 1346584902, 0, 0);
    v4 = (const void *)Table;
    if ( !Table )
      return 3221226021LL;
    v5 = *(unsigned int *)(Table + 4);
    v6 = 276LL;
    if ( (unsigned int)v5 < 0x114 )
      v6 = v5;
    memmove(&HalpFixedAcpiDescTable, v4, v6);
    HalpSetPlatformFlags(&HalpFixedAcpiDescTable, a1);
    HalpAcpiInitializePmRegisters(&HalpFixedAcpiDescTable);
    if ( (dword_140C4A090 & 0x40000) != 0 )
      HalpInterruptClusterModeForced = 1;
    if ( (dword_140C4A090 & 0x80000) != 0 )
      HalpInterruptPhysicalModeOnly = 1;
    HalpAcpiDetectMachineSpecificActions(a1);
    HalpNumaInitializeStaticConfiguration(a1);
    LODWORD(v16) = 0;
    HalpAcpiHmat = HalpAcpiGetTable(a1, 1413565768, 0, 0);
    if ( HalpAcpiHmat )
    {
      if ( HalpAcpiSrat )
      {
        if ( (int)HalpNumaParseHmat(v7, 0LL, 0LL, &v16) >= 0 )
        {
          MemoryInternal = HalpMmAllocateMemoryInternal(v16, 1u);
          v14 = MemoryInternal;
          if ( MemoryInternal )
          {
            if ( (int)HalpNumaParseHmat(v13, MemoryInternal, (unsigned int)v16, &v16) >= 0 )
              HalpHmaConfig = v14;
          }
        }
      }
    }
    PdttTable = 0LL;
    v8 = HalpAcpiGetTable(a1, 1414808656, 0, 0);
    v9 = v8;
    if ( v8 )
    {
      v15 = *(unsigned __int8 *)(v8 + 36);
      if ( *(unsigned int *)(v9 + 4) >= (unsigned __int64)*(unsigned int *)(v9 + 40) + 2 * v15 )
      {
        qword_140C50AE8 = HalpMmAllocateMemoryInternal(136 * (int)v15, 1u);
        if ( qword_140C50AE8 )
          PdttTable = v9;
      }
    }
    v10 = HalpAcpiGetTable(a1, 1413824855, 0, 0);
    if ( v10 )
      HalpWAETDeviceFlags = *(_DWORD *)(v10 + 36);
    if ( !HalpLowStubPhysicalAddress )
    {
      v16 = 0x100000LL;
      v11 = (void *)HalpAllocPhysicalMemory(a1, &v16, 1LL, 0LL);
      HalpLowStubPhysicalAddress = v11;
      if ( v11 )
        HalpLowStub = HalpMap((__int64)v11, 1LL, 1u, 0LL, 4u);
    }
    if ( (dword_140C4A090 & 3) == 0 )
      HalpVirtAddrForFlush = HalpMap((__int64)HalpLowStubPhysicalAddress, 1LL, 1u, 0LL, 4u);
    HalpProcessedACPIPhase0 = 1;
    qword_140C00B08 = (__int64)HalAcpiGetTableDispatch;
    qword_140C00B10 = (__int64)xHalTimerWatchdogStop;
    HalpInitBootTable(a1);
  }
  return 0LL;
}
