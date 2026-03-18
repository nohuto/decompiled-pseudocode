/*
 * XREFs of MiLockPageTableInternal @ 0x14020DFC0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14020B270 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14020C280 (MiGetNextPageTablePte.c)
 *     MiUserFault @ 0x14020CC40 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x14020ED50 (MiCheckProcessShadow.c)
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x1402263A0 (MiDeleteKernelStack.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiClearPteAccessed @ 0x14029DF40 (MiClearPteAccessed.c)
 *     MiIsPageTableDeletable @ 0x14029EFC0 (MiIsPageTableDeletable.c)
 *     MiLockPageLeafPageTable @ 0x1402A7490 (MiLockPageLeafPageTable.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiLockWorkingSetOptimal @ 0x1402BC3DC (MiLockWorkingSetOptimal.c)
 *     MiEncodeProtoFill @ 0x1402BE9B4 (MiEncodeProtoFill.c)
 *     MiInitializeWorkingSetList @ 0x1402C1FF4 (MiInitializeWorkingSetList.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiEvictPageTableLock @ 0x1402F2ABC (MiEvictPageTableLock.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiUnlockPageTableRange @ 0x14032085C (MiUnlockPageTableRange.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 *     MiLockPageTable @ 0x14037F34C (MiLockPageTable.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiRewritePteWithLockBit @ 0x1403ACEB8 (MiRewritePteWithLockBit.c)
 *     MiMapWithLargePages @ 0x1403B48CC (MiMapWithLargePages.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403C87B0 (MiGetWsAndMakePageTablesNx.c)
 *     MiFaultInPagedPool @ 0x1405275F4 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140530530 (MiJumpStackTarget.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiUnmapPatchTable @ 0x14053967C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14053E51C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiScrubAwePage @ 0x14054821C (MiScrubAwePage.c)
 *     MiReleaseLargePteMappings @ 0x14054E4CC (MiReleaseLargePteMappings.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A40BAC (MiMarkBootKernelStack.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x1402DBA88 (MiGetPageTableLockBuffer.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402EA31C (KxTryToAcquireQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
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
  unsigned __int64 v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+78h] [rbp+10h] BYREF
  int v34; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v6 = *(unsigned __int8 *)(a1 + 184);
  v5 = a3;
  LOBYTE(v6) = v6 & 7;
  v33 = 0;
  v7 = a1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( (_BYTE)v6 )
    {
      if ( (_BYTE)v6 == 7 )
      {
        v14 = (volatile __int64 *)&unk_140C4E438;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_BYTE)v6 == 5 )
        {
          v14 = (volatile __int64 *)&unk_140C4E430;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v14 = (volatile __int64 *)&unk_140C4E448;
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
      v34 = 0;
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v33);
      v19 = *PageTableLockBuffer;
      for ( i = v33; ; i = v33 )
      {
        while ( ((v19 >> i) & 1) != 0 )
        {
          if ( (v5 & 1) != 0 )
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
