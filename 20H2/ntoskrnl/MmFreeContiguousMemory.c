/*
 * XREFs of MmFreeContiguousMemory @ 0x1402619D0
 * Callers:
 *     HvlpFreeOverlayPages @ 0x14036C9A0 (HvlpFreeOverlayPages.c)
 *     HalpDmaFreeChildAdapter @ 0x14036CB90 (HalpDmaFreeChildAdapter.c)
 *     HalFreeCommonBuffer @ 0x140381B30 (HalFreeCommonBuffer.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0934 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalFreeCommonBufferV3 @ 0x1404C2C20 (HalFreeCommonBufferV3.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C4F2C (HalpDmaAllocateMapRegisters.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D3770 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D3A2C (ExtEnvFreePhysicalMemory.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F0AC0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     IopInitializeInMemoryDumpData @ 0x140502750 (IopInitializeInMemoryDumpData.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140867180 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140867754 (HalpDmaGrowContiguousMapBuffers.c)
 *     ViReleaseDmaAdapter @ 0x1409D2530 (ViReleaseDmaAdapter.c)
 *     IommupHvInitializeLibrary @ 0x140A90904 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExRemovePoolTag @ 0x140260FA4 (ExRemovePoolTag.c)
 *     MmUnmapIoSpace @ 0x1402611D0 (MmUnmapIoSpace.c)
 *     MiFreeContiguousPages @ 0x140261B18 (MiFreeContiguousPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x1402CC250 (MiFillPteHierarchy.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052FB1C (MiLogPerfMemoryRangeEvent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfFreeMemoryNotification @ 0x1409C8FF0 (VfFreeMemoryNotification.c)
 */

void __stdcall MmFreeContiguousMemory(PVOID BaseAddress)
{
  int SystemRegionType; // eax
  int v3; // esi
  unsigned __int64 v4; // rbx
  int v5; // r9d
  SIZE_T v6; // r14
  SIZE_T v7; // rsi
  unsigned __int64 v8; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // rax
  _OWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v12; // [rsp+88h] [rbp+38h] BYREF
  __int64 v13; // [rsp+90h] [rbp+40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF

  LODWORD(v12) = 0;
  NumberOfBytes = 0LL;
  memset(v11, 0, sizeof(v11));
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)BaseAddress);
  if ( SystemRegionType == 5 )
  {
    ExFreePoolWithTag(BaseAddress, 0);
  }
  else
  {
    if ( !SystemRegionType )
      KeBugCheckEx(0xC2u, 0x62uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    MiFillPteHierarchy(BaseAddress, v11);
    v3 = 4;
    do
    {
      v13 = MI_READ_PTE_LOCK_FREE(*((_QWORD *)v11 + (unsigned int)--v3));
      v4 = v13;
    }
    while ( (v13 & 0x80u) == 0LL && v3 );
    if ( ((unsigned __int16)BaseAddress & 0xFFF) != 0 )
      KeBugCheckEx(0xC2u, 0x61uLL, (ULONG_PTR)BaseAddress, 0LL, 0LL);
    v5 = 0;
    if ( v13 < 0 )
      v5 = 512;
    ExRemovePoolTag((ULONG_PTR)BaseAddress, &v12, (__int64 *)&NumberOfBytes, v5);
    if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 || (_DWORD)v12 != 1416523587 )
      KeBugCheckEx(0xC2u, 0x60uLL, (ULONG_PTR)BaseAddress, NumberOfBytes, (unsigned int)v12);
    v6 = NumberOfBytes;
    if ( MmProtectFreedNonPagedPool == 1 )
      v6 = NumberOfBytes + 4096;
    v7 = NumberOfBytes >> 12;
    if ( ViVerifierEnabled )
      VfFreeMemoryNotification(BaseAddress, NumberOfBytes);
    MmUnmapIoSpace(BaseAddress, v6);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogPerfMemoryRangeEvent(BaseAddress, 0LL, 12LL, v7);
    v8 = v4;
    if ( MiPteInShadowRange((unsigned __int64)&v13)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v4 |= 0x20uLL;
        v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v13 >> 3) & 0x1FF));
        if ( (v10 & 0x20) == 0 )
          v4 = v8;
        if ( (v10 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
      else
      {
        v4 = v13;
      }
    }
    MiFreeContiguousPages((v4 >> 12) & 0xFFFFFFFFFLL, v7);
  }
}
