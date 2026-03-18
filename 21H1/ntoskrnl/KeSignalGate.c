/*
 * XREFs of KeSignalGate @ 0x1403247B0
 * Callers:
 *     KiRetireDpcList @ 0x140206910 (KiRetireDpcList.c)
 *     MiProcessWorkingSets @ 0x14025C5F0 (MiProcessWorkingSets.c)
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1402BEE3C (MiUnlockControlAreaSectionExtend.c)
 *     MiReturnWsToExpansionList @ 0x1402C2288 (MiReturnWsToExpansionList.c)
 *     MiZeroInParallel @ 0x1402C9D34 (MiZeroInParallel.c)
 *     MiAttachThreadDone @ 0x1402CFF94 (MiAttachThreadDone.c)
 *     MiDereferencePageRunsEx @ 0x140313848 (MiDereferencePageRunsEx.c)
 *     MiZeroInParallelWorker @ 0x1403248C0 (MiZeroInParallelWorker.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MmDetachSession @ 0x14035DA40 (MmDetachSession.c)
 *     MiZeroNodePages @ 0x1403ADD50 (MiZeroNodePages.c)
 *     MiNodeCompletedBootZeroing @ 0x1403AEA18 (MiNodeCompletedBootZeroing.c)
 *     MiZeroLargePageThread @ 0x1403B1C70 (MiZeroLargePageThread.c)
 *     MiSignalZeroingPassComplete @ 0x1403B1FAC (MiSignalZeroingPassComplete.c)
 *     PspGetSetContextSpecialApc @ 0x1403FDBC0 (PspGetSetContextSpecialApc.c)
 *     KiEpfComplete @ 0x14051E54C (KiEpfComplete.c)
 *     MiSubsectionProtosCreated @ 0x14053C964 (MiSubsectionProtosCreated.c)
 *     MiWakeExtentDeletionWaiters @ 0x14053CCE0 (MiWakeExtentDeletionWaiters.c)
 *     MiIncrementAweMapCount @ 0x140546B54 (MiIncrementAweMapCount.c)
 *     MiWakeLargePageWaiters @ 0x14055228C (MiWakeLargePageWaiters.c)
 *     PsWatchWorkingSet @ 0x14057BAD0 (PsWatchWorkingSet.c)
 *     MiScrubMemoryWorker @ 0x1408D7650 (MiScrubMemoryWorker.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x14090A4E0 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeSignalGate(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  _QWORD *v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  char v14; // al
  bool v15; // zf
  __int64 v17; // rsi
  _QWORD *v18; // r14
  unsigned __int8 v19; // cl
  struct _KPRCB *v20; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // [rsp+70h] [rbp+8h]
  unsigned int v25; // [rsp+78h] [rbp+10h]
  unsigned __int8 v26; // [rsp+80h] [rbp+18h]

  v25 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v26 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  if ( !*(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 1;
    v10 = *(_QWORD **)(a1 + 8);
    while ( v10 != (_QWORD *)(a1 + 8) )
    {
      v11 = (_QWORD *)*v10;
      v12 = (__int64)v10;
      v10 = v11;
      v13 = *(_QWORD **)(v12 + 8);
      if ( v11[1] != v12 || *v13 != v12 )
LABEL_6:
        __fastfail(3u);
      *v13 = v11;
      v11[1] = v13;
      v14 = *(_BYTE *)(v12 + 16);
      if ( v14 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
        {
          v15 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v15 )
            break;
        }
      }
      else if ( v14 == 2 )
      {
        *(_BYTE *)(v12 + 17) = 5;
        v17 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)v12 = 0LL;
        v18 = (_QWORD *)(v17 + 8);
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
        {
          v9 = KeGetCurrentPrcb()->SchedulerAssist;
          v7 = (_QWORD *)((-1LL << (v19 + 1)) & 4);
          v8 = (unsigned int)v7 | v9[5];
          v9[5] = v8;
        }
        v20 = KeGetCurrentPrcb();
        CurrentThread = v20->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v22) = KeIsThreadRunning(v20->CurrentThread, v7);
          EtwTraceEnqueueWork(CurrentThread, v12, v22);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v17, (__int64)v7, v8, (__int64)v9);
        if ( (_QWORD *)*v18 == v18
          || *(_DWORD *)(v17 + 40) >= *(_DWORD *)(v17 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v17 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)v20, v17, v12) )
        {
          v23 = *(_DWORD *)(v17 + 4);
          *(_DWORD *)(v17 + 4) = v23 + 1;
          v7 = *(_QWORD **)(v17 + 32);
          if ( *v7 != v17 + 24 )
            goto LABEL_6;
          *(_QWORD *)v12 = v17 + 24;
          *(_QWORD *)(v12 + 8) = v7;
          *v7 = v12;
          *(_QWORD *)(v17 + 32) = v12;
          if ( !v23 && (_QWORD *)*v18 != v18 )
            KiWakeOtherQueueWaiters((__int64)v20, v17, v8, (__int64)v9);
        }
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
        v15 = (*(_DWORD *)(a1 + 4))-- == 1;
        if ( v15 )
          break;
        CurrentPrcb = (struct _KPRCB *)v24;
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return KiExitDispatcher(v24, 0LL, 1LL, v25, v26);
}
