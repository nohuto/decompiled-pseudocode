/*
 * XREFs of KeSignalGate @ 0x140241090
 * Callers:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MiUnlockControlAreaSectionExtend @ 0x14021E7B4 (MiUnlockControlAreaSectionExtend.c)
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiZeroInParallel @ 0x1402940B0 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     MiReturnWsToExpansionList @ 0x1402A3628 (MiReturnWsToExpansionList.c)
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 *     KiRetireDpcList @ 0x1402EAF00 (KiRetireDpcList.c)
 *     MiAttachThreadDone @ 0x1402FA198 (MiAttachThreadDone.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiFinishVadDeletion @ 0x140321B10 (MiFinishVadDeletion.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 *     MiNodeCompletedBootZeroing @ 0x1403B1058 (MiNodeCompletedBootZeroing.c)
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 *     MiSignalZeroingPassComplete @ 0x1403B41BC (MiSignalZeroingPassComplete.c)
 *     PspGetSetContextSpecialApc @ 0x140407970 (PspGetSetContextSpecialApc.c)
 *     KiEpfComplete @ 0x14052428C (KiEpfComplete.c)
 *     MiSubsectionProtosCreated @ 0x1405426C4 (MiSubsectionProtosCreated.c)
 *     MiWakeExtentDeletionWaiters @ 0x140542A40 (MiWakeExtentDeletionWaiters.c)
 *     MiIncrementAweMapCount @ 0x14054C8B4 (MiIncrementAweMapCount.c)
 *     MiWakeLargePageWaiters @ 0x140557FBC (MiWakeLargePageWaiters.c)
 *     PsWatchWorkingSet @ 0x140581800 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x1408DC100 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x14090ECD0 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSignalGate(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v5; // r15
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  char v9; // al
  bool v10; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rsi
  _QWORD *v14; // r14
  unsigned __int8 v15; // cl
  _DWORD *v16; // r9
  struct _KPRCB *v17; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v19; // r8
  int v20; // ecx
  _QWORD *v21; // rdx
  struct _KPRCB *v22; // [rsp+70h] [rbp+8h]
  char v24; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v24 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = CurrentPrcb;
  KiAcquireKobjectLockSafe(a1);
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v5 = *(_QWORD **)(a1 + 8);
    while ( v5 != (_QWORD *)(a1 + 8) )
    {
      v6 = (_QWORD *)*v5;
      v7 = v5;
      v5 = v6;
      v8 = (_QWORD *)v7[1];
      if ( (_QWORD *)v6[1] != v7 || (_QWORD *)*v8 != v7 )
LABEL_6:
        __fastfail(3u);
      *v8 = v6;
      v6[1] = v8;
      v9 = *((_BYTE *)v7 + 16);
      if ( v9 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v7, *((unsigned __int16 *)v7 + 9), 0LL) )
        {
          v10 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v10 )
            break;
        }
      }
      else if ( v9 == 2 )
      {
        *((_BYTE *)v7 + 17) = 5;
        v13 = v7[3];
        *v7 = 0LL;
        v14 = (_QWORD *)(v13 + 8);
        v15 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
        {
          v16 = KeGetCurrentPrcb()->SchedulerAssist;
          v16[5] |= (-1 << (v15 + 1)) & 4;
        }
        v17 = KeGetCurrentPrcb();
        CurrentThread = v17->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v19) = KeIsThreadRunning(v17->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v7, v19);
        }
        KiAcquireKobjectLockSafe(v13);
        if ( (_QWORD *)*v14 == v14
          || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(v17, v13, v7) )
        {
          v20 = *(_DWORD *)(v13 + 4);
          *(_DWORD *)(v13 + 4) = v20 + 1;
          v21 = *(_QWORD **)(v13 + 32);
          if ( *v21 != v13 + 24 )
            goto LABEL_6;
          *v7 = v13 + 24;
          v7[1] = v21;
          *v21 = v7;
          *(_QWORD *)(v13 + 32) = v7;
          if ( !v20 && (_QWORD *)*v14 != v14 )
            KiWakeOtherQueueWaiters(v17, v13);
        }
        _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
        v10 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v10 )
          break;
        CurrentPrcb = v22;
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v7, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return KiExitDispatcher((_DWORD)v22, 0, 1, a2, v24);
}
