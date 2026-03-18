/*
 * XREFs of MiLockPageTableInternal @ 0x1402A0AD0
 * Callers:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiMakeSystemCacheRangeValid @ 0x14022D030 (MiMakeSystemCacheRangeValid.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiClearPteAccessed @ 0x140244F10 (MiClearPteAccessed.c)
 *     MiIsPageTableDeletable @ 0x140245F90 (MiIsPageTableDeletable.c)
 *     MiLockPageLeafPageTable @ 0x14024E460 (MiLockPageLeafPageTable.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiLockWorkingSetOptimal @ 0x1402633AC (MiLockWorkingSetOptimal.c)
 *     MiEncodeProtoFill @ 0x140265984 (MiEncodeProtoFill.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiWalkPageTablesRecursively @ 0x14029DD80 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14029ED90 (MiGetNextPageTablePte.c)
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x1402A1860 (MiCheckProcessShadow.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiDeleteKernelStack @ 0x1402B9020 (MiDeleteKernelStack.c)
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     MiInitializeWorkingSetList @ 0x1402FDAD4 (MiInitializeWorkingSetList.c)
 *     MiEvictPageTableLock @ 0x14032E85C (MiEvictPageTableLock.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiUnlockPageTableRange @ 0x14035E44C (MiUnlockPageTableRange.c)
 *     MiLockPageTable @ 0x14037FCAC (MiLockPageTable.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394C54 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiRewritePteWithLockBit @ 0x1403B2B38 (MiRewritePteWithLockBit.c)
 *     MiMapWithLargePages @ 0x1403B51CC (MiMapWithLargePages.c)
 *     MiMapMdlCommon @ 0x1403C56B4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403C95C0 (MiGetWsAndMakePageTablesNx.c)
 *     MiFaultInPagedPool @ 0x140527C44 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x140528534 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14052C254 (MiUnmapMdlCommon.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x140530B80 (MiJumpStackTarget.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiUnmapPatchTable @ 0x140539CCC (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14053EB6C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiScrubAwePage @ 0x14054886C (MiScrubAwePage.c)
 *     MiReleaseLargePteMappings @ 0x14054EB1C (MiReleaseLargePteMappings.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A46408 (MiMarkBootKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x140278D38 (MiGetPageTableLockBuffer.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402E41B0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14031DB64 (KxTryToAcquireQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  char v5; // bp
  char v6; // dl
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
  char *PageTableLockBuffer; // rbx
  __int64 v19; // r9
  char v20; // cl
  __int64 v21; // r8
  __int64 v22; // rdx
  bool v23; // zf
  unsigned __int32 v24; // eax
  signed __int64 v25; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int32 v27; // edx
  unsigned __int32 v28; // eax
  int v29; // eax
  volatile LONG *v30; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // [rsp+78h] [rbp+10h] BYREF
  int v35; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a3;
  v6 = *(_BYTE *)(a1 + 184) & 7;
  v34 = 0;
  v7 = a1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        v14 = (volatile __int64 *)&unk_140C4E2F8;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v6 == 5 )
        {
          v14 = (volatile __int64 *)&unk_140C4E2F0;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v14 = (volatile __int64 *)&unk_140C4E308;
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
        v29 = SchedulerAssist[6];
        SchedulerAssist[6] = v29 + 1;
        if ( v29 == -1 )
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
  if ( v6 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v35 = 0;
      PageTableLockBuffer = MiGetPageTableLockBuffer(a1, a2, &v34);
      v19 = *(unsigned int *)PageTableLockBuffer;
      v20 = v34;
      while ( 1 )
      {
        v21 = v5 & 1;
        while ( 1 )
        {
          v22 = (unsigned int)v19 >> v20;
          if ( (v22 & 1) != 0 )
            break;
          v24 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)PageTableLockBuffer,
                  ~(2 << v20) & (v19 | (1 << v20)),
                  v19);
          v23 = (_DWORD)v19 == v24;
          v19 = v24;
          if ( v23 )
            return 1LL;
          if ( (v5 & 1) != 0 )
            return 0LL;
          v20 = v34;
        }
        if ( (v5 & 1) != 0 )
          break;
        if ( (v22 & 2) != 0 )
        {
          do
          {
            KeYieldProcessorEx(&v35, v22, v21, v19);
            v19 = *(unsigned int *)PageTableLockBuffer;
            v20 = v34;
          }
          while ( ((*(_DWORD *)PageTableLockBuffer >> v34) & 1) != 0 );
        }
        else
        {
          v27 = v19 | (2 << v20);
          v28 = _InterlockedCompareExchange((volatile signed __int32 *)PageTableLockBuffer, v27, v19);
          v23 = (_DWORD)v19 == v28;
          v20 = v34;
          v19 = v28;
          if ( v23 )
            v19 = v27;
        }
      }
      return 0LL;
    }
  }
  else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v13 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
    if ( v13 )
    {
      v30 = (volatile LONG *)(v13 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (a3 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v30);
        return 1LL;
      }
      if ( (a3 & 1) == 0 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v30);
        return 1LL;
      }
      return (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v30) != 0;
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
      v32 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
      v33 = v8 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = *(_QWORD *)a2;
      v8 = v33;
      if ( (v32 & 0x42) != 0 )
        v8 = v33 | 0x42;
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
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v8, v10);
          if ( v25 != v10 )
            v8 = v25;
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
