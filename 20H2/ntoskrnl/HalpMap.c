/*
 * XREFs of HalpMap @ 0x1403BAF38
 * Callers:
 *     HalpAcpiGetRsdt @ 0x14025EE38 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x14025FC74 (HalpAcpiCheckAndMapTable.c)
 *     HalpPciMapMmConfigPhysicalAddress @ 0x140311508 (HalpPciMapMmConfigPhysicalAddress.c)
 *     HalMapIoSpace @ 0x1403B2320 (HalMapIoSpace.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BA8B8 (HalpMmAllocateMemoryInternal.c)
 *     HalpAcpiAllocateMemory @ 0x1403BAE08 (HalpAcpiAllocateMemory.c)
 *     HalpMapPhysicalMemory64 @ 0x1403EF510 (HalpMapPhysicalMemory64.c)
 *     HalpAllocateEarlyPages @ 0x1404BAF30 (HalpAllocateEarlyPages.c)
 *     HalpMapEarlyPages @ 0x1404BB010 (HalpMapEarlyPages.c)
 *     HalpMapPhysicalMemoryWriteThrough64 @ 0x1404BB040 (HalpMapPhysicalMemoryWriteThrough64.c)
 *     HalpPowerWriteResetCommand @ 0x1404BC94C (HalpPowerWriteResetCommand.c)
 *     HalpInterruptMapParkedPage @ 0x1404CFF30 (HalpInterruptMapParkedPage.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1404D59AC (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpSetupAcpiPhase0 @ 0x140A62700 (HalpSetupAcpiPhase0.c)
 *     HalpAllocateNumaConfigData @ 0x140A62ECC (HalpAllocateNumaConfigData.c)
 *     HalpAcpiTableCacheInit @ 0x140A63070 (HalpAcpiTableCacheInit.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140A90E28 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140A90F20 (HalpBlkAllocatePageTablePage.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140A91114 (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpMmGetPteAddressSafe @ 0x1403BB100 (HalpMmGetPteAddressSafe.c)
 *     HalpFlushTLB @ 0x1403BB1B0 (HalpFlushTLB.c)
 *     HalpIsHeap64KRegionExecutable @ 0x1404BAFA0 (HalpIsHeap64KRegionExecutable.c)
 */

unsigned __int64 __fastcall HalpMap(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v6; // r12
  unsigned __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // r14
  _BYTE *PteAddressSafe; // rax
  bool v15; // cf
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax

  v6 = a4;
  v7 = 1LL;
  v8 = a2;
  if ( a3 > 1 )
    return 0LL;
  if ( a5 > 0x20 )
    return 0LL;
  v10 = 0x100000014LL;
  if ( !_bittest64(&v10, a5) )
    return 0LL;
  v11 = HalpHeapStart;
  v12 = 0;
  if ( (_DWORD)a2 )
  {
    while ( 2 )
    {
      v12 = 0;
      v13 = v11;
      while ( 1 )
      {
        if ( v13 == HalpHeapEnd )
          return 0LL;
        PteAddressSafe = (_BYTE *)HalpMmGetPteAddressSafe(v13);
        if ( !PteAddressSafe )
          return 0LL;
        v13 += 4096LL;
        v7 = 1LL;
        if ( (*PteAddressSafe & 1) != 0 )
          break;
        if ( ++v12 >= v8 )
          goto LABEL_10;
      }
      v11 = v13;
LABEL_10:
      if ( a5 == 32 )
      {
        v15 = v12 < v8;
        if ( v12 != v8 )
        {
LABEL_12:
          if ( v15 )
            continue;
          goto LABEL_13;
        }
        if ( (unsigned __int8)HalpIsHeap64KRegionExecutable(v11)
          || (unsigned __int8)HalpIsHeap64KRegionExecutable(v11 + (v8 << 12) - 4096) )
        {
          v12 = 0;
        }
        v7 = 1LL;
      }
      break;
    }
    v15 = v12 < v8;
    goto LABEL_12;
  }
LABEL_13:
  v16 = v11 | a1 & 0xFFF;
  if ( v11 == HalpHeapStart )
    HalpHeapStart = v11 + (v8 << 12);
  if ( v12 )
  {
    v17 = 3LL;
    if ( a5 != 4 )
      v17 = 1LL;
    v18 = v17 | 0x8000000000000000uLL;
    if ( a5 == 32 )
      v18 = v17;
    a2 = v18 | 0x18;
    if ( a3 == 1 )
      a2 = v18;
    do
    {
      v19 = a2 | a1 & 0xFFFFFFFFF000LL;
      v7 = 0xFFFFF68000000000uLL;
      a1 += 4096LL;
      v10 = 8 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
      *(_QWORD *)v10 = v19;
      if ( v6 )
        __invlpg((void *)v11);
      v11 += 4096LL;
      --v12;
    }
    while ( v12 );
  }
  if ( !v6 )
    HalpFlushTLB(v10, a2, v7, a4);
  return v16;
}
