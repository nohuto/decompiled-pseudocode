/*
 * XREFs of MiReferenceControlAreaFile @ 0x1402A0600
 * Callers:
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MiReferenceInPageFile @ 0x1402A03EC (MiReferenceInPageFile.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MmFlushSection @ 0x1403542A0 (MmFlushSection.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x140371DF4 (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x140381794 (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x140627820 (MiAllowImageMap.c)
 *     PspInitializeFullProcessImageName @ 0x140631C6C (PspInitializeFullProcessImageName.c)
 *     MiCreateSectionCommon @ 0x14067F1A0 (MiCreateSectionCommon.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140685B60 (MiUnmapVad.c)
 *     PsReferenceProcessFilePointer @ 0x14068ECE0 (PsReferenceProcessFilePointer.c)
 *     MmCreateSpecialImageSection @ 0x14068FA78 (MmCreateSpecialImageSection.c)
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F0160 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x1406F0FC0 (NtAreMappedFilesTheSame.c)
 *     MmExtendSection @ 0x140708C5C (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x1407096E0 (MmGetFileObjectForSection.c)
 *     MiParseComAndCetHeaders @ 0x14070C690 (MiParseComAndCetHeaders.c)
 *     MiLogRelocationFaults @ 0x14070D684 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x14070DC30 (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140755764 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407CCB5C (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x1408C6884 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1408C699C (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408C6DAC (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408D3860 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D39F0 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D61FC (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14028A530 (ObpTraceObjectDereferenceIfActive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     ObReferenceObjectExWithTag @ 0x140302C00 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  signed __int64 v3; // r8
  signed __int64 v4; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // r8d
  volatile LONG *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  signed __int64 BugCheckParameter4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v2 = (volatile signed __int64 *)(a1 + 64);
  _m_prefetchw((const void *)(a1 + 64));
  v3 = *(_QWORD *)(a1 + 64);
  if ( (v3 & 0xF) != 0 )
  {
    do
    {
      v4 = _InterlockedCompareExchange64(v2, v3 - 1, v3);
      if ( v3 == v4 )
        break;
      v3 = v4;
    }
    while ( (v4 & 0xF) != 0 );
  }
  v5 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = v3 & 0xF;
  if ( v6 <= 1 )
  {
    if ( !v6 )
      goto LABEL_8;
    ObReferenceObjectExWithTag(v5);
    _m_prefetchw((const void *)v2);
    v11 = *v2;
    while ( (v11 & 0xF) == 0 )
    {
      if ( v5 != (v11 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v12 = v11;
      v11 = _InterlockedCompareExchange64(v2, v11 + 15, v11);
      if ( v12 == v11 )
        goto LABEL_4;
    }
    ObpTraceObjectDereferenceIfActive(v5 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( *(_QWORD *)(v5 - 40) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v5 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v5 - 48) >> 8)],
          v5,
          6uLL,
          *(_QWORD *)(v5 - 40));
      if ( BugCheckParameter4 < 0 )
        KeBugCheckEx(0x18u, 0LL, v5, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v5 - 48);
    }
  }
LABEL_4:
  if ( v5 )
    return v5;
LABEL_8:
  v8 = (volatile LONG *)(a1 + 72);
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v10 = ObFastReferenceObjectLocked(v2);
  ExReleaseSpinLockSharedFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v10;
}
