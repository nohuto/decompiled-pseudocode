/*
 * XREFs of MiLockPageTableInternal @ 0x14026FE10
 * Callers:
 *     MiIsPageTableDeletable @ 0x140236000 (MiIsPageTableDeletable.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiEncodeProtoFill @ 0x140250F1C (MiEncodeProtoFill.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiDeleteKernelStack @ 0x140265A40 (MiDeleteKernelStack.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiLockPageLeafPageTable @ 0x14026C700 (MiLockPageLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x14026D0C0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14026E0D0 (MiGetNextPageTablePte.c)
 *     MiUserFault @ 0x14026EA90 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x140270BA0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetOptimal @ 0x14029C0FC (MiLockWorkingSetOptimal.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x1402BD2E0 (MiClearPteAccessed.c)
 *     MiEvictPageTableLock @ 0x1402CC400 (MiEvictPageTableLock.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiUnlockPageTableRange @ 0x14032EDAC (MiUnlockPageTableRange.c)
 *     MiInitializeWorkingSetList @ 0x140338B74 (MiInitializeWorkingSetList.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiLockPageTable @ 0x140381A6C (MiLockPageTable.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiRewritePteWithLockBit @ 0x1403B54A8 (MiRewritePteWithLockBit.c)
 *     MiMapWithLargePages @ 0x1403B80EC (MiMapWithLargePages.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CC200 (MiGetWsAndMakePageTablesNx.c)
 *     MiFaultInPagedPool @ 0x14052B614 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140534550 (MiJumpStackTarget.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiUnmapPatchTable @ 0x14053D69C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054253C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiScrubAwePage @ 0x14054C23C (MiScrubAwePage.c)
 *     MiReleaseLargePteMappings @ 0x1405524EC (MiReleaseLargePteMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x140341520 (KxTryToAcquireQueuedSpinLock.c)
 *     MiGetPageTableLockBuffer @ 0x14035BB38 (MiGetPageTableLockBuffer.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  signed __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // rcx
  volatile __int64 *v14; // rbx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rdi
  struct _KPRCB *v16; // rcx
  _DWORD *SchedulerAssist; // rdx
  volatile signed __int32 *PageTableLockBuffer; // rbx
  unsigned __int32 v19; // r9d
  char i; // cl
  bool v21; // zf
  signed __int32 v22; // eax
  signed __int64 v23; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  signed __int32 v25; // edx
  signed __int32 v26; // eax
  int v27; // eax
  volatile LONG *v28; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // [rsp+78h] [rbp+10h] BYREF
  int v33; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v6 = *(unsigned __int8 *)(a1 + 184);
  v5 = a3;
  LOBYTE(v6) = v6 & 7;
  v32 = 0;
  v7 = a1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( (_BYTE)v6 )
    {
      if ( (_BYTE)v6 == 7 )
      {
        v14 = (volatile __int64 *)&unk_140C4E378;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_BYTE)v6 == 5 )
        {
          v14 = (volatile __int64 *)&unk_140C4E370;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v14 = (volatile __int64 *)&unk_140C4E388;
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v14 = (volatile __int64 *)(a1 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v14;
    if ( (a3 & 1) != 0 )
      return KxTryToAcquireQueuedSpinLock(SelfmapLockHandle, v14, a3, a1);
    v16 = KeGetCurrentPrcb();
    SchedulerAssist = v16->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v27 = SchedulerAssist[6];
        SchedulerAssist[6] = v27 + 1;
        if ( v27 == -1 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v14);
    }
    else if ( _InterlockedExchange64(v14, (__int64)SelfmapLockHandle) )
    {
      KxWaitForLockOwnerShip(SelfmapLockHandle);
      return 1LL;
    }
    return 1LL;
  }
  if ( (_BYTE)v6 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v33 = 0;
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v32);
      v19 = *PageTableLockBuffer;
      for ( i = v32; ; i = v32 )
      {
        while ( ((v19 >> i) & 1) != 0 )
        {
          if ( (v5 & 1) != 0 )
            return 0LL;
          if ( ((v19 >> i) & 2) != 0 )
          {
            do
            {
              KeYieldProcessorEx(&v33);
              v19 = *PageTableLockBuffer;
              i = v32;
            }
            while ( (((unsigned __int32)*PageTableLockBuffer >> v32) & 1) != 0 );
          }
          else
          {
            v25 = v19 | (2 << i);
            v26 = _InterlockedCompareExchange(PageTableLockBuffer, v25, v19);
            v21 = v19 == v26;
            i = v32;
            v19 = v26;
            if ( v21 )
              v19 = v25;
          }
        }
        v22 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << i) & (v19 | (1 << i)), v19);
        v21 = v19 == v22;
        v19 = v22;
        if ( v21 )
          return 1LL;
        if ( (v5 & 1) != 0 )
          break;
      }
      return 0LL;
    }
  }
  else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v13 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
    if ( v13 )
    {
      v28 = (volatile LONG *)(v13 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (a3 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v28);
        return 1LL;
      }
      if ( (a3 & 1) == 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v28);
        return 1LL;
      }
      return (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v28, v6, 0xFFFFF6FB7DBED000uLL, v7) != 0;
    }
  }
  v8 = *(_QWORD *)a2;
  v9 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v30 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v31 = v8 | 0x20;
      if ( (v30 & 0x20) == 0 )
        v31 = *(_QWORD *)a2;
      v8 = v31;
      if ( (v30 & 0x42) != 0 )
        v8 = v31 | 0x42;
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v10 = v8;
    v11 = v5 & 1;
    do
    {
      if ( (v8 & 0x1000000000000000LL) != 0 )
      {
        if ( (v5 & 1) != 0 )
          return v4;
        if ( ((v8 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v11, v10, v7) )
            {
              HvlNotifyLongSpinWait(v9);
            }
            else
            {
              _mm_pause();
            }
            v8 = *(_QWORD *)a2;
          }
          while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
        }
        else
        {
          v8 |= 0x2000000000000000uLL;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v8, v10);
          if ( v23 != v10 )
            v8 = v23;
        }
        v11 = v5 & 1;
      }
      else
      {
        v8 = _InterlockedCompareExchange64(
               (volatile signed __int64 *)a2,
               v8 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
               v10);
        if ( v10 == v8 )
          return 1;
        if ( (_DWORD)v11 )
          return v4;
      }
      v10 = v8;
    }
    while ( (v8 & 1) != 0 );
  }
  return v4;
}
