/*
 * XREFs of HalpMap @ 0x1403B8498
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140335638 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x140335CC8 (HalpAcpiCheckAndMapTable.c)
 *     HalpPciMapMmConfigPhysicalAddress @ 0x1403404D8 (HalpPciMapMmConfigPhysicalAddress.c)
 *     HalMapIoSpace @ 0x1403AFD30 (HalMapIoSpace.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403B7E18 (HalpMmAllocateMemoryInternal.c)
 *     HalpAcpiAllocateMemory @ 0x1403B8368 (HalpAcpiAllocateMemory.c)
 *     HalpMapPhysicalMemory64 @ 0x1403EC9E8 (HalpMapPhysicalMemory64.c)
 *     HalpAllocateEarlyPages @ 0x1404B7A10 (HalpAllocateEarlyPages.c)
 *     HalpMapEarlyPages @ 0x1404B7AF0 (HalpMapEarlyPages.c)
 *     HalpMapPhysicalMemoryWriteThrough64 @ 0x1404B7B20 (HalpMapPhysicalMemoryWriteThrough64.c)
 *     HalpPowerWriteResetCommand @ 0x1404B942C (HalpPowerWriteResetCommand.c)
 *     HalpInterruptMapParkedPage @ 0x1404CC990 (HalpInterruptMapParkedPage.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1404D241C (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpSetupAcpiPhase0 @ 0x140A5B3A0 (HalpSetupAcpiPhase0.c)
 *     HalpAllocateNumaConfigData @ 0x140A5BB6C (HalpAllocateNumaConfigData.c)
 *     HalpAcpiTableCacheInit @ 0x140A5BD10 (HalpAcpiTableCacheInit.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140A8B118 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140A8B210 (HalpBlkAllocatePageTablePage.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140A8B404 (HalpBlkInitializeVirtualAddressSpace.c)
 * Callees:
 *     HalpMmGetPteAddressSafe @ 0x1403B8660 (HalpMmGetPteAddressSafe.c)
 *     HalpFlushTLB @ 0x1403B8710 (HalpFlushTLB.c)
 *     HalpIsHeap64KRegionExecutable @ 0x1404B7A80 (HalpIsHeap64KRegionExecutable.c)
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
