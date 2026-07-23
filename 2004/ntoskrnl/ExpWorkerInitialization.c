/*
 * XREFs of ExpWorkerInitialization @ 0x140A66764
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3935C (ExpInitSystemPhase1.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1402748B0 (ExfReleasePushLock.c)
 *     PsBoostThreadIoQoS @ 0x140279D74 (PsBoostThreadIoQoS.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140340DC4 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14035E600 (KiAbThreadUnboostIoPriority.c)
 *     ExQueueDebuggerWorker @ 0x1403C3AEC (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x1403C3B20 (ExpLegacyWorkerInitialization.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A1F90 (EtwTraceAutoBoostClearFloor.c)
 *     ExpPartitionStart @ 0x1407AFDF4 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x1407B006C (ExpPartitionInitialize.c)
 *     ExpNodeInitialize @ 0x1407B0588 (ExpNodeInitialize.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD *v5; // r8
  const char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ebp
  unsigned int v10; // ecx
  __int64 DmaOperations_high; // r15
  unsigned __int64 v12; // r12
  __int64 *v13; // rdx
  ULONG_PTR v14; // r14
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v22; // rbx
  ULONG_PTR p_DmaOperations; // rdi
  __int64 v24; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v26; // cl
  __int64 v27; // rsi
  int SessionId; // eax
  __int64 v29; // rcx
  bool v30; // zf
  struct _KTHREAD *v31; // rdi
  int v32; // ebx
  unsigned int v33; // edx
  unsigned __int8 v34; // r13
  _DWORD *v35; // r9
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // [rsp+30h] [rbp-58h]
  char v43; // [rsp+9Ah] [rbp+12h]
  __int64 v44; // [rsp+A8h] [rbp+20h] BYREF

  ExpWorkerSwapinMutex.Event.Header.Size = 6;
  ExpWorkerSwapinMutex.Owner = 0LL;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Blink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Flink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  v0 = ExpMaximumKernelWorkerThreads;
  ExpWorkerSwapinMutex.Count = 1;
  ExpWorkerSwapinMutex.Contention = 0;
  LOWORD(ExpWorkerSwapinMutex.Event.Header.Lock) = 1;
  ExpWorkerSwapinMutex.Event.Header.SignalState = 0;
  ExpWorkersCanSwap = 1;
  if ( ExpMaximumKernelWorkerThreads > 0x4000 )
  {
    v0 = 0x4000;
    ExpMaximumKernelWorkerThreads = 0x4000;
  }
  if ( v0 < 32 )
    ExpMaximumKernelWorkerThreads = 32;
  v1 = ExpWorkerThreadTimeoutInSeconds;
  if ( (unsigned int)ExpWorkerThreadTimeoutInSeconds > 0xE10 )
  {
    v1 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v1 < 0x3C )
    ExpWorkerThreadTimeoutInSeconds = 60;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * i) )
      v3 = KeNodeBlock[i];
    ExpNodeInitialize(v3);
  }
  result = ExpPartitionInitialize((__int64)PspSystemPartition);
  if ( (int)result >= 0 )
  {
    result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
    v42 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      _mm_lfence();
      if ( qword_140C4C440 )
      {
LABEL_24:
        ExpDebuggerDpc.TargetInfoAsUlong = 275;
        ExpDebuggerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)ExpDebuggerDpcRoutine;
        ExpDebuggerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpDebuggerWorker;
        ExpDebuggerDpc.DeferredContext = 0LL;
        ExpDebuggerDpc.DpcData = 0LL;
        ExpDebuggerDpc.ProcessorHistory = 0LL;
        ExpDebuggerWorkItem.Parameter = 0LL;
        ExpDebuggerWorkItem.List.Flink = 0LL;
        ExpDebuggerWork = 1;
        ExQueueDebuggerWorker();
        return v42;
      }
      v18 = __rdtsc();
      v19 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) >> 4)) ^ 0xBD6LL;
      if ( !v19 )
        v19 = 1LL;
      qword_140C4C440 = v19;
      v20 = __rdtsc();
      qword_140C4C448 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) >> 4)) ^ 0x5EBLL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v22 = KeGetCurrentThread();
      p_DmaOperations = (ULONG_PTR)&ObpTypeObjectType[11].DmaOperations;
      LODWORD(v44) = 0;
      --v22->SpecialApcDisable;
      if ( ++v22->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v22, p_DmaOperations, KeGetCurrentIrql(), 0LL);
      LOBYTE(v24) = v22->AbEntrySummary;
      if ( !(_BYTE)v24 )
      {
        if ( !v22->AbOrphanedEntrySummary )
        {
          v27 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion((__int64)v22, p_DmaOperations);
          goto LABEL_54;
        }
        AbOrphanedEntrySummary = v22->AbOrphanedEntrySummary;
        v22->AbOrphanedEntrySummary = 0;
        LOBYTE(v24) = v22->AbEntrySummary | AbOrphanedEntrySummary;
      }
      v26 = v24;
      _BitScanForward((unsigned int *)&v24, (unsigned __int8)v24);
      v22->AbEntrySummary = v26 & ~(1 << v24);
      v27 = (__int64)&v22->LockEntries[v24];
      if ( v27 )
      {
        if ( p_DmaOperations >= 0xFFFF800000000000uLL && byte_140C4F7C8[((p_DmaOperations >> 39) & 0x1FF) - 256] == 1 )
          SessionId = MmGetSessionIdEx((__int64)v22->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v27 + 40) = SessionId;
        *(_QWORD *)(v27 + 32) = p_DmaOperations & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_57;
      }
LABEL_54:
      _interlockedbittestandset((volatile signed __int32 *)&v22->116 + 1, 0x10u);
LABEL_57:
      --v22->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v22, p_DmaOperations, &v44);
      v30 = v22->SpecialApcDisable++ == -1;
      if ( v30 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
        KiCheckForKernelApcDelivery(v29);
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_DmaOperations, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)p_DmaOperations, v27, p_DmaOperations);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      v10 = 0;
      v9 = 64;
      DmaOperations_high = HIDWORD(ObpTypeObjectType[2].DmaOperations);
      qword_140C4C458 = DmaOperations_high;
      v12 = (unsigned int)DmaOperations_high;
      if ( (_DWORD)DmaOperations_high )
      {
        v13 = ObpObjectTypes;
        while ( *v13 )
        {
          if ( (*(_BYTE *)(*v13 + 66) & 0x40) != 0 )
            _bittestandset64(&qword_140C4C460, v10);
          ++v10;
          ++v13;
          if ( v10 >= (unsigned int)DmaOperations_high )
            goto LABEL_36;
        }
        v12 = v10;
        LODWORD(DmaOperations_high) = v10;
        qword_140C4C458 = v10;
      }
LABEL_36:
      v14 = (ULONG_PTR)&ObpTypeObjectType[11].DmaOperations;
      _m_prefetchw(&ObpTypeObjectType[11].DmaOperations);
      v15 = *(_QWORD *)v14;
      v16 = *(_QWORD *)v14 - 16LL;
      if ( (*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v16 = 0LL;
      if ( (v15 & 2) != 0
        || (v17 = *(_QWORD *)v14, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v16, v15)) )
      {
        ExfReleasePushLock((_QWORD *)v14);
      }
      v31 = KeGetCurrentThread();
      v32 = 0;
      v43 = 0;
      if ( v14 >= 0xFFFF800000000000uLL && byte_140C4F7C8[((v14 >> 39) & 0x1FF) - 256] == 1 )
        v33 = MmGetSessionIdEx((__int64)v31->ApcState.Process);
      else
        v33 = -1;
      --v31->SpecialApcDisable;
      v34 = ++v31->AbAllocationRegionCount;
      v35 = (_DWORD *)(v14 & 0x7FFFFFFFFFFFFFFCLL);
      v36 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3Fu;
      while ( 1 )
      {
        v30 = !_BitScanReverse((unsigned int *)&v37, v36);
        if ( v30 )
          goto LABEL_68;
        v38 = (__int64)&v31->LockEntries[v37];
        v36 = ~(1 << v37) & (unsigned int)v36;
        if ( (*(_BYTE *)(v38 + 26) & 1) != 0
          && (*(_DWORD *)(v38 + 32) & 1) == 0
          && (_DWORD *)(*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v35
          && *(_DWORD *)(v38 + 40) == v33 )
        {
          *(_BYTE *)(v38 + 26) &= ~1u;
          if ( *(_QWORD *)(v38 + 32) )
            break;
        }
      }
      if ( !v38 )
      {
LABEL_68:
        if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v31, v14, v33, 0LL);
        goto LABEL_80;
      }
      *(_BYTE *)(v38 + 32) |= 2u;
      if ( *(__int64 *)(v38 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
      v32 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
      v39 = *(_DWORD *)(v38 + 88) & 0xFFFE0000;
      *(_BYTE *)(v38 + 25) &= ~1u;
      v43 = BYTE2(v32);
      *(_DWORD *)(v38 + 88) = v39;
      *(_QWORD *)(v38 + 32) = 0LL;
      v40 = (signed __int64)(v38 - (unsigned __int64)v31->LockEntries) / 96;
      if ( v34 == 1 )
      {
        v31->AbEntrySummary |= 1 << v40;
      }
      else
      {
        v37 = (unsigned int)v40;
        _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, 1 << v40);
      }
LABEL_80:
      --v31->AbAllocationRegionCount;
      if ( (v32 & 0x1FFFF) != 0 )
      {
        if ( (v32 & 0x8000u) != 0 )
          KiAbThreadUnboostIoPriority((__int64)v31, 0);
        if ( (v43 & 1) != 0 )
        {
          _InterlockedAdd(&v31->AbCompletedIoQoSBoostCount, 0xFFFFFFFF);
          PsBoostThreadIoQoS((__int64)v31, 1);
        }
        if ( (v32 & 0x7FFF) != 0 )
          KiAbThreadUnboostCpuPriority((ULONG_PTR)v31, v32 & 0x7FFF, v36, v35);
        if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
          EtwTraceAutoBoostClearFloor((__int64)v31, v14, v32 & 0x1FFFF);
      }
      v30 = v31->SpecialApcDisable++ == -1;
      if ( v30 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
        KiCheckForKernelApcDelivery(v37);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( (_DWORD)DmaOperations_high )
      {
        qword_140C4C480 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v12];
        v5 = (_QWORD *)(qword_140C4C480 + 112);
        v6 = (const char *)(qword_140C4C480 + 112);
        if ( qword_140C4C480 + 112 < (unsigned __int64)(qword_140C4C480 + 176) )
        {
          do
          {
            _mm_prefetch(v6, 0);
            v6 += 64;
          }
          while ( (unsigned __int64)v6 < qword_140C4C480 + 176 );
        }
        v7 = qword_140C4C440;
        v8 = 8LL;
        do
        {
          v7 = __ROR8__(v7 - *v5++, qword_140C4C448);
          v9 -= 8;
          --v8;
        }
        while ( v8 );
        for ( ; v9; --v9 )
        {
          v41 = *(unsigned __int8 *)v5;
          v5 = (_QWORD *)((char *)v5 + 1);
          v7 = __ROR8__(v7 - v41, qword_140C4C448);
        }
        qword_140C4C488 = v7;
        qword_140C4C450 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      }
      else
      {
        qword_140C4C440 = 0LL;
      }
      goto LABEL_24;
    }
  }
  return result;
}
