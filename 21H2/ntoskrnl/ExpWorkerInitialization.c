/*
 * XREFs of ExpWorkerInitialization @ 0x140A6AE74
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3CEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     PsBoostThreadIoQoS @ 0x140287458 (PsBoostThreadIoQoS.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140293A50 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x1402D0FD0 (KiAbThreadUnboostIoPriority.c)
 *     ExfReleasePushLock @ 0x1402F1440 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     ExQueueDebuggerWorker @ 0x1403C6C4C (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x1403C6C80 (ExpLegacyWorkerInitialization.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1405A7460 (EtwTraceAutoBoostClearFloor.c)
 *     ExpPartitionStart @ 0x1407C2134 (ExpPartitionStart.c)
 *     ExpPartitionInitialize @ 0x1407C23AC (ExpPartitionInitialize.c)
 *     ExpNodeInitialize @ 0x1407C28C8 (ExpNodeInitialize.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax
  _DWORD *v5; // r9
  _QWORD *v6; // r8
  const char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  unsigned int v11; // ecx
  __int64 DmaOperations_high; // r15
  unsigned __int64 v13; // r12
  __int64 *v14; // rdx
  ULONG_PTR v15; // r14
  signed __int64 v16; // rax
  signed __int64 v17; // rdx
  signed __int64 v18; // rtt
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v23; // rbx
  ULONG_PTR p_DmaOperations; // rdi
  __int64 v25; // rax
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v27; // cl
  __int64 v28; // rsi
  int SessionId; // eax
  __int64 v30; // rcx
  bool v31; // zf
  struct _KTHREAD *v32; // rdi
  int v33; // ebx
  unsigned int v34; // edx
  unsigned __int8 v35; // r13
  _DWORD *v36; // r9
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // [rsp+30h] [rbp-58h]
  char v44; // [rsp+9Ah] [rbp+12h]
  __int64 v45; // [rsp+A8h] [rbp+20h] BYREF

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
    v43 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      _mm_lfence();
      if ( qword_140C4C660 )
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
        return v43;
      }
      v19 = __rdtsc();
      v20 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v19) << 32) | (unsigned int)v19) >> 4)) ^ 0xBD6LL;
      if ( !v20 )
        v20 = 1LL;
      qword_140C4C660 = v20;
      v21 = __rdtsc();
      qword_140C4C668 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) >> 4)) ^ 0x5EBLL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v23 = KeGetCurrentThread();
      p_DmaOperations = (ULONG_PTR)&ObpTypeObjectType[11].DmaOperations;
      LODWORD(v45) = 0;
      --v23->SpecialApcDisable;
      if ( ++v23->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v23, p_DmaOperations, KeGetCurrentIrql(), 0LL);
      LOBYTE(v25) = v23->AbEntrySummary;
      if ( !(_BYTE)v25 )
      {
        if ( !v23->AbOrphanedEntrySummary )
        {
          v28 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion((__int64)v23, p_DmaOperations);
          goto LABEL_54;
        }
        AbOrphanedEntrySummary = v23->AbOrphanedEntrySummary;
        v23->AbOrphanedEntrySummary = 0;
        LOBYTE(v25) = v23->AbEntrySummary | AbOrphanedEntrySummary;
      }
      v27 = v25;
      _BitScanForward((unsigned int *)&v25, (unsigned __int8)v25);
      v23->AbEntrySummary = v27 & ~(1 << v25);
      v28 = (__int64)&v23->LockEntries[v25];
      if ( v28 )
      {
        if ( p_DmaOperations >= 0xFFFF800000000000uLL && byte_140C4F9C8[((p_DmaOperations >> 39) & 0x1FF) - 256] == 1 )
          SessionId = MmGetSessionIdEx((__int64)v23->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v28 + 40) = SessionId;
        *(_QWORD *)(v28 + 32) = p_DmaOperations & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_57;
      }
LABEL_54:
      _interlockedbittestandset((volatile signed __int32 *)&v23->116 + 1, 0x10u);
LABEL_57:
      --v23->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v23, p_DmaOperations, (__int64)&v45, v5);
      v31 = v23->SpecialApcDisable++ == -1;
      if ( v31 && ($C459BD0D405E8E46662177FB3D0A143F *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
        KiCheckForKernelApcDelivery(v30);
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_DmaOperations, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)p_DmaOperations, v28, p_DmaOperations);
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      v11 = 0;
      v10 = 64;
      DmaOperations_high = HIDWORD(ObpTypeObjectType[2].DmaOperations);
      qword_140C4C678 = DmaOperations_high;
      v13 = (unsigned int)DmaOperations_high;
      if ( (_DWORD)DmaOperations_high )
      {
        v14 = ObpObjectTypes;
        while ( *v14 )
        {
          if ( (*(_BYTE *)(*v14 + 66) & 0x40) != 0 )
            _bittestandset64(&qword_140C4C680, v11);
          ++v11;
          ++v14;
          if ( v11 >= (unsigned int)DmaOperations_high )
            goto LABEL_36;
        }
        v13 = v11;
        LODWORD(DmaOperations_high) = v11;
        qword_140C4C678 = v11;
      }
LABEL_36:
      v15 = (ULONG_PTR)&ObpTypeObjectType[11].DmaOperations;
      _m_prefetchw(&ObpTypeObjectType[11].DmaOperations);
      v16 = *(_QWORD *)v15;
      v17 = *(_QWORD *)v15 - 16LL;
      if ( (*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v17 = 0LL;
      if ( (v16 & 2) != 0
        || (v18 = *(_QWORD *)v15, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)v15, v17, v16)) )
      {
        ExfReleasePushLock((_QWORD *)v15);
      }
      v32 = KeGetCurrentThread();
      v33 = 0;
      v44 = 0;
      if ( v15 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((v15 >> 39) & 0x1FF) - 256] == 1 )
        v34 = MmGetSessionIdEx((__int64)v32->ApcState.Process);
      else
        v34 = -1;
      --v32->SpecialApcDisable;
      v35 = ++v32->AbAllocationRegionCount;
      v36 = (_DWORD *)(v15 & 0x7FFFFFFFFFFFFFFCLL);
      v37 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3Fu;
      while ( 1 )
      {
        v31 = !_BitScanReverse((unsigned int *)&v38, v37);
        if ( v31 )
          goto LABEL_68;
        v39 = (__int64)&v32->LockEntries[v38];
        v37 = ~(1 << v38) & (unsigned int)v37;
        if ( (*(_BYTE *)(v39 + 26) & 1) != 0
          && (*(_DWORD *)(v39 + 32) & 1) == 0
          && (_DWORD *)(*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v36
          && *(_DWORD *)(v39 + 40) == v34 )
        {
          *(_BYTE *)(v39 + 26) &= ~1u;
          if ( *(_QWORD *)(v39 + 32) )
            break;
        }
      }
      if ( !v39 )
      {
LABEL_68:
        if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v32, v15, v34, 0LL);
        goto LABEL_80;
      }
      *(_BYTE *)(v39 + 32) |= 2u;
      if ( *(__int64 *)(v39 + 32) < 0 )
        KiAbEntryRemoveFromTree(v39);
      v33 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
      v40 = *(_DWORD *)(v39 + 88) & 0xFFFE0000;
      *(_BYTE *)(v39 + 25) &= ~1u;
      v44 = BYTE2(v33);
      *(_DWORD *)(v39 + 88) = v40;
      *(_QWORD *)(v39 + 32) = 0LL;
      v41 = (signed __int64)(v39 - (unsigned __int64)v32->LockEntries) / 96;
      if ( v35 == 1 )
      {
        v32->AbEntrySummary |= 1 << v41;
      }
      else
      {
        v38 = (unsigned int)v41;
        _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, 1 << v41);
      }
LABEL_80:
      --v32->AbAllocationRegionCount;
      if ( (v33 & 0x1FFFF) != 0 )
      {
        if ( (v33 & 0x8000u) != 0 )
          KiAbThreadUnboostIoPriority((__int64)v32, 0LL);
        if ( (v44 & 1) != 0 )
        {
          _InterlockedAdd(&v32->AbCompletedIoQoSBoostCount, 0xFFFFFFFF);
          PsBoostThreadIoQoS((__int64)v32, 1LL);
        }
        if ( (v33 & 0x7FFF) != 0 )
          KiAbThreadUnboostCpuPriority((ULONG_PTR)v32, v33 & 0x7FFF, v37, v36);
        if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) != 0 )
          EtwTraceAutoBoostClearFloor((__int64)v32, v15, v33 & 0x1FFFF);
      }
      v31 = v32->SpecialApcDisable++ == -1;
      if ( v31 && ($C459BD0D405E8E46662177FB3D0A143F *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
        KiCheckForKernelApcDelivery(v38);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( (_DWORD)DmaOperations_high )
      {
        qword_140C4C6A0 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v13];
        v6 = (_QWORD *)(qword_140C4C6A0 + 112);
        v7 = (const char *)(qword_140C4C6A0 + 112);
        if ( qword_140C4C6A0 + 112 < (unsigned __int64)(qword_140C4C6A0 + 176) )
        {
          do
          {
            _mm_prefetch(v7, 0);
            v7 += 64;
          }
          while ( (unsigned __int64)v7 < qword_140C4C6A0 + 176 );
        }
        v8 = qword_140C4C660;
        v9 = 8LL;
        do
        {
          v8 = __ROR8__(v8 - *v6++, qword_140C4C668);
          v10 -= 8;
          --v9;
        }
        while ( v9 );
        for ( ; v10; --v10 )
        {
          v42 = *(unsigned __int8 *)v6;
          v6 = (_QWORD *)((char *)v6 + 1);
          v8 = __ROR8__(v8 - v42, qword_140C4C668);
        }
        qword_140C4C6A8 = v8;
        qword_140C4C670 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      }
      else
      {
        qword_140C4C660 = 0LL;
      }
      goto LABEL_24;
    }
  }
  return result;
}
