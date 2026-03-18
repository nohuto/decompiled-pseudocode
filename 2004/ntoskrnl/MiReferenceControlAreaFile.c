/*
 * XREFs of MiReferenceControlAreaFile @ 0x140229C10
 * Callers:
 *     MiReferenceInPageFile @ 0x14022944C (MiReferenceInPageFile.c)
 *     MiMakeSystemCacheRangeValid @ 0x14022D030 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x14025BEB0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14026255C (MiMakeSystemCachePteValid.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiCreateSystemSection @ 0x14036FEA4 (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x14037F9E0 (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405FAC40 (MiCreateSectionCommon.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140600800 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140601100 (MiUnmapVad.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x140601DB0 (MiAllowImageMap.c)
 *     MiMapImageInSystemSpace @ 0x14060C198 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x14060CAD4 (MmExtendSection.c)
 *     MmGetFileObjectForSection @ 0x14060D700 (MmGetFileObjectForSection.c)
 *     MiParseComAndCetHeaders @ 0x14060FE30 (MiParseComAndCetHeaders.c)
 *     MmCreateSpecialImageSection @ 0x140617E6C (MmCreateSpecialImageSection.c)
 *     PspInitializeFullProcessImageName @ 0x14065E1E0 (PspInitializeFullProcessImageName.c)
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     PsReferenceProcessFilePointer @ 0x1406B7770 (PsReferenceProcessFilePointer.c)
 *     MiParseImageLoadConfig @ 0x1406D5F28 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406D68EC (MiLogRelocationFaults.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14070B3D0 (NtAreMappedFilesTheSame.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140746B84 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407BE2CC (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x1408C0A44 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1408C0B5C (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408C0F6C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408CDA20 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408CDBB0 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D03BC (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ObReferenceObjectExWithTag @ 0x14032EFF0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
  __int64 v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rdx
  signed __int64 BugCheckParameter4; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

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
      ObpDeferObjectDeletion(v5 - 48, v13);
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
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v10;
}
