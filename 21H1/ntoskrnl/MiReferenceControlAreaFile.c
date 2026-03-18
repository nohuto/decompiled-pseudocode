/*
 * XREFs of MiReferenceControlAreaFile @ 0x140282C60
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x14022F794 (MmFlushSection.c)
 *     MiReferenceInPageFile @ 0x14028249C (MiReferenceInPageFile.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiCreateSystemSection @ 0x14036F274 (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x14037F074 (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x14062FC80 (MiCreateSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140636140 (MiUnmapVad.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x140636DF0 (MiAllowImageMap.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x140641C24 (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x140642850 (MmGetFileObjectForSection.c)
 *     MiParseComAndCetHeaders @ 0x140645060 (MiParseComAndCetHeaders.c)
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     PsReferenceProcessFilePointer @ 0x14064E790 (PsReferenceProcessFilePointer.c)
 *     MmCreateSpecialImageSection @ 0x14066F58C (MmCreateSpecialImageSection.c)
 *     PspInitializeFullProcessImageName @ 0x1406D0B9C (PspInitializeFullProcessImageName.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1406E74A0 (NtAreMappedFilesTheSame.c)
 *     MiParseImageLoadConfig @ 0x1406EE324 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406EECDC (MiLogRelocationFaults.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140745004 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407BB15C (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x1408BF6F4 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1408BF80C (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408BFC1C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408CC6D0 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408CC860 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408CF06C (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14026B1C0 (ObpTraceObjectDereferenceIfActive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     ObReferenceObjectExWithTag @ 0x1402F3250 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
