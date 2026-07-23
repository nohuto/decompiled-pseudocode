/*
 * XREFs of MiReferenceControlAreaFile @ 0x140327C00
 * Callers:
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiReferenceInPageFile @ 0x1403279E8 (MiReferenceInPageFile.c)
 *     MiCompleteRestrictedImageFault @ 0x140327DF0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     MiCreateSystemSection @ 0x140371C2C (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x1403819E4 (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x1405352F0 (MiSetPagesModified.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 *     NtAreMappedFilesTheSame @ 0x14061C730 (NtAreMappedFilesTheSame.c)
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiAllowImageMap @ 0x140687660 (MiAllowImageMap.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140688090 (MiUnmapVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140688200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MmCreateSpecialImageSection @ 0x140698234 (MmCreateSpecialImageSection.c)
 *     MiParseComAndCetHeaders @ 0x1406A9AD4 (MiParseComAndCetHeaders.c)
 *     MmGetFileObjectForSection @ 0x1406AB4D0 (MmGetFileObjectForSection.c)
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406C1E9C (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     PspInitializeFullProcessImageName @ 0x1406C6DA4 (PspInitializeFullProcessImageName.c)
 *     PsReferenceProcessFilePointer @ 0x1406F4310 (PsReferenceProcessFilePointer.c)
 *     MiCreateSectionCommon @ 0x14071E810 (MiCreateSectionCommon.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407D0F7C (MiLoadUserSymbols.c)
 *     MmGetFileNameForAddress @ 0x1408C41A4 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1408C42BC (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408C46CC (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408D1180 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D1310 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3B1C (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14021B6A0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x1402EE9C0 (ObpTraceObjectDereferenceIfActive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
    ObReferenceObjectExWithTag(v5, 15);
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
