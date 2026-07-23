/*
 * XREFs of MiLockPageTableInternal @ 0x1402B33F0
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiEncodeProtoFill @ 0x14023845C (MiEncodeProtoFill.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiUnlockPageTableRange @ 0x14024F2AC (MiUnlockPageTableRange.c)
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 *     MiDeleteKernelStack @ 0x1402606E0 (MiDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiInitializeWorkingSetList @ 0x1402A3394 (MiInitializeWorkingSetList.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiLockPageLeafPageTable @ 0x1402AFCE0 (MiLockPageLeafPageTable.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x1402B16B0 (MiGetNextPageTablePte.c)
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x1402B4180 (MiCheckProcessShadow.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiIsPageTableDeletable @ 0x1403100A0 (MiIsPageTableDeletable.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MiEvictPageTableLock @ 0x140317370 (MiEvictPageTableLock.c)
 *     MiLockWorkingSetOptimal @ 0x14031A9E4 (MiLockWorkingSetOptimal.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x140344B50 (MiClearPteAccessed.c)
 *     MiLockPageTable @ 0x140381CBC (MiLockPageTable.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiRewritePteWithLockBit @ 0x1403B6D88 (MiRewritePteWithLockBit.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403CCD40 (MiGetWsAndMakePageTablesNx.c)
 *     MiFaultInPagedPool @ 0x14052D354 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x14052DC44 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140536290 (MiJumpStackTarget.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiUnmapPatchTable @ 0x14053F3DC (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054427C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544488 (MiUnmapRetpolineStubs.c)
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiScrubAwePage @ 0x14054DF7C (MiScrubAwePage.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4EC44 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x1402029B8 (MiGetPageTableLockBuffer.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14021614C (KxTryToAcquireQueuedSpinLock.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned int v4; // esi
  char v6; // dl
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  signed __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // rcx
  unsigned __int64 *v14; // rbx
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
  unsigned __int64 v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+78h] [rbp+10h] BYREF
  int v34; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v6 = *(_BYTE *)(a1 + 184) & 7;
  v33 = 0;
  v7 = a1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        v14 = (unsigned __int64 *)&unk_140C4E538;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v6 == 5 )
        {
          v14 = (unsigned __int64 *)&unk_140C4E530;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v14 = (unsigned __int64 *)&unk_140C4E548;
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v14 = (unsigned __int64 *)(a1 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    SelfmapLockHandle->LockQueue.Lock = v14;
    if ( (a3 & 1) != 0 )
      return KxTryToAcquireQueuedSpinLock((signed __int64)SelfmapLockHandle, v14);
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
    else if ( _InterlockedExchange64((volatile __int64 *)v14, (__int64)SelfmapLockHandle) )
    {
      KxWaitForLockOwnerShip(SelfmapLockHandle);
      return 1LL;
    }
    return 1LL;
  }
  if ( v6 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v34 = 0;
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v33);
      v19 = *PageTableLockBuffer;
      for ( i = v33; ; i = v33 )
      {
        while ( ((v19 >> i) & 1) != 0 )
        {
          if ( (a3 & 1) != 0 )
            return 0LL;
          if ( ((v19 >> i) & 2) != 0 )
          {
            do
            {
              KeYieldProcessorEx(&v34);
              v19 = *PageTableLockBuffer;
              i = v33;
            }
            while ( (((unsigned __int32)*PageTableLockBuffer >> v33) & 1) != 0 );
          }
          else
          {
            v25 = v19 | (2 << i);
            v26 = _InterlockedCompareExchange(PageTableLockBuffer, v25, v19);
            v21 = v19 == v26;
            i = v33;
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
        if ( (a3 & 1) != 0 )
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
      return (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v28) != 0;
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
    v11 = a3 & 1;
    do
    {
      if ( (v8 & 0x1000000000000000LL) != 0 )
      {
        if ( (a3 & 1) != 0 )
          return v4;
        if ( ((v8 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v11, v10, v7, v32) )
            {
              HvlNotifyLongSpinWait(v9);
            }
            else
            {
              _mm_pause();
            }
            v32 = *(_QWORD *)a2;
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
        v11 = a3 & 1;
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
