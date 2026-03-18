/*
 * XREFs of MiLockPageTableInternal @ 0x14031DE00
 * Callers:
 *     MiJumpStackTarget @ 0x1402003C0 (MiJumpStackTarget.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiFaultInPagedPool @ 0x1402019FC (MiFaultInPagedPool.c)
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiEncodeProtoFill @ 0x14023FBE4 (MiEncodeProtoFill.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiInitializeWorkingSetList @ 0x1402A0624 (MiInitializeWorkingSetList.c)
 *     MiCheckProcessShadow @ 0x1402B2E40 (MiCheckProcessShadow.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiIsPageTableDeletable @ 0x1402D01A8 (MiIsPageTableDeletable.c)
 *     MiLockWorkingSetOptimal @ 0x1402D0490 (MiLockWorkingSetOptimal.c)
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402DAC64 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiWalkPageTables @ 0x14030CF90 (MiWalkPageTables.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14031B510 (MiGetNextPageTablePte.c)
 *     MiLockPageLeafPageTable @ 0x14031BF80 (MiLockPageLeafPageTable.c)
 *     MiResolvePageTablePage @ 0x14031D740 (MiResolvePageTablePage.c)
 *     MiFastLockLeafPageTable @ 0x14031D9B0 (MiFastLockLeafPageTable.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x140332A80 (MiClearPteAccessed.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x14033BC30 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiUnlockPageTableRange @ 0x140395864 (MiUnlockPageTableRange.c)
 *     MiRewritePteWithLockBit @ 0x1403C2C58 (MiRewritePteWithLockBit.c)
 *     MiLockPageTable @ 0x1403C2CB8 (MiLockPageTable.c)
 *     MiMapWithLargePages @ 0x1403C7090 (MiMapWithLargePages.c)
 *     MiMapMdlCommon @ 0x1403D77D4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403DC188 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiMapRetpolineStubs @ 0x1405A1F60 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiScrubAwePage @ 0x1405AC670 (MiScrubAwePage.c)
 *     MiReleaseLargePteMappings @ 0x1405B585C (MiReleaseLargePteMappings.c)
 *     MiMarkBootKernelStack @ 0x140B05B1C (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x140B190F0 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x14020DAE8 (MiGetPageTableLockBuffer.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402EB110 (KxTryToAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  char v6; // dl
  char v7; // bp
  char v8; // dl
  struct _LIST_ENTRY *Flink; // r8
  signed __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned __int64 i; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  signed __int64 v15; // rtt
  __int64 v17; // rcx
  char v18; // dl
  unsigned __int64 *v19; // rbx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rdi
  struct _KPRCB *v21; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v23; // rdx
  char *PageTableLockBuffer; // rbx
  __int64 v25; // r9
  char v26; // cl
  __int64 v27; // r8
  __int64 v28; // rdx
  bool v29; // zf
  unsigned __int32 v30; // eax
  signed __int64 v31; // rcx
  signed __int64 v32; // rtt
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int32 v34; // edx
  unsigned __int32 v35; // eax
  int v36; // eax
  volatile LONG *v37; // rcx
  __int64 v38; // rcx
  int v39; // [rsp+78h] [rbp+10h] BYREF
  int v40; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v6 = *(_BYTE *)(a1 + 184);
  v7 = a3;
  v39 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v18 = v6 & 7;
    if ( v18 )
    {
      if ( v18 == 7 )
      {
        v19 = (unsigned __int64 *)&unk_140C51D80;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v18 == 5 )
        {
          v19 = (unsigned __int64 *)&unk_140C51D78;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v19 = (unsigned __int64 *)&unk_140C51D90;
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v19 = (unsigned __int64 *)(a1 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    SelfmapLockHandle->LockQueue.Lock = v19;
    if ( (a3 & 1) != 0 )
      return KxTryToAcquireQueuedSpinLock((signed __int64)SelfmapLockHandle, v19);
    v21 = KeGetCurrentPrcb();
    SchedulerAssist = v21->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v36 = SchedulerAssist[6];
        SchedulerAssist[6] = v36 + 1;
        if ( v36 == -1 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v19);
    }
    else
    {
      v23 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v19, (__int64)SelfmapLockHandle);
      if ( v23 )
      {
        KxWaitForLockOwnerShip((__int64)SelfmapLockHandle, v23, a3, a4);
        return 1LL;
      }
    }
    return 1LL;
  }
  v8 = v6 & 7;
  Flink = (struct _LIST_ENTRY *)0xFFFFF6FB7DBED000LL;
  if ( a2 < 0xFFFFF6FB7DBED000uLL )
    goto LABEL_3;
  if ( v8 )
  {
    if ( a2 > 0xFFFFF6FB7DBEDFFFuLL )
      goto LABEL_3;
    v40 = 0;
    PageTableLockBuffer = MiGetPageTableLockBuffer(a1, a2, &v39);
    v25 = *(unsigned int *)PageTableLockBuffer;
    v26 = v39;
    while ( 1 )
    {
      v27 = v7 & 1;
      while ( 1 )
      {
        v28 = (unsigned int)v25 >> v26;
        if ( (v28 & 1) != 0 )
          break;
        v30 = _InterlockedCompareExchange(
                (volatile signed __int32 *)PageTableLockBuffer,
                ~(2 << v26) & (v25 | (1 << v26)),
                v25);
        v29 = (_DWORD)v25 == v30;
        v25 = v30;
        if ( v29 )
          return 1LL;
        if ( (v7 & 1) != 0 )
          return 0LL;
        v26 = v39;
      }
      if ( (v7 & 1) != 0 )
        break;
      if ( (v28 & 2) != 0 )
      {
        do
        {
          KeYieldProcessorEx(&v40, v28, v27, v25);
          v25 = *(unsigned int *)PageTableLockBuffer;
          v26 = v39;
        }
        while ( ((*(_DWORD *)PageTableLockBuffer >> v39) & 1) != 0 );
      }
      else
      {
        v34 = v25 | (2 << v26);
        v35 = _InterlockedCompareExchange((volatile signed __int32 *)PageTableLockBuffer, v34, v25);
        v29 = (_DWORD)v25 == v35;
        v26 = v39;
        v25 = v35;
        if ( v29 )
          v25 = v34;
      }
    }
    return 0LL;
  }
  if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v17 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 592);
    if ( v17 )
    {
      v37 = (volatile LONG *)(v17 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (v7 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v37);
        return 1LL;
      }
      if ( (v7 & 1) == 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v37);
        return 1LL;
      }
      return (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v37) != 0;
    }
  }
LABEL_3:
  v10 = *(_QWORD *)a2;
  v11 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v38 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      if ( (v38 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v38 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
  }
  for ( i = v10; (v10 & 1) != 0; i = v10 )
  {
    v13 = i >> 60;
    if ( (i & 0x1000000000000000LL) != 0 )
    {
      if ( (v7 & 1) != 0 )
        return v4;
      if ( (v13 & 2) != 0 )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i, v13, Flink, a4) )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
          v10 = *(_QWORD *)a2;
        }
        while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
      }
      else
      {
        v31 = i | 0x2000000000000000LL;
        if ( (MiFlags & 0x4000000) != 0 )
          _mm_lfence();
        v32 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v31, v10);
        if ( v32 == v10 )
          v10 = v31;
      }
    }
    else
    {
      v14 = i & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL;
      if ( (MiFlags & 0x4000000) != 0 )
        _mm_lfence();
      v15 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v14, v10);
      if ( v15 == v10 )
        return 1;
      if ( (v7 & 1) != 0 )
        return v4;
    }
  }
  return v4;
}
