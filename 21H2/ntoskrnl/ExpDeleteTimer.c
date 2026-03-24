/*
 * XREFs of ExpDeleteTimer @ 0x1402601A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     PoDestroyReasonContext @ 0x140282BD8 (PoDestroyReasonContext.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     PsRemoveVirtualizedTimer @ 0x1402940F4 (PsRemoveVirtualizedTimer.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // r14
  KIRQL v3; // al
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r13
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v12; // dl
  __int64 v13; // rsi
  int SessionId; // eax
  bool v15; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v19; // rbx
  unsigned __int8 v20; // r14
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int v25; // ecx
  unsigned __int8 v26; // al
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v30; // eax
  _DWORD *SchedulerAssist; // r8
  PVOID P; // [rsp+30h] [rbp-58h]

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( !a1[4].Header.WaitListHead.Flink )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  P = *(PVOID *)&a1[4].Header.Lock;
  --CurrentThread->KernelApcDisable;
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  if ( ++v8->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v8, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v9) = v8->AbEntrySummary;
  v10 = -1;
  if ( !(_BYTE)v9 )
  {
    if ( !v8->AbOrphanedEntrySummary )
    {
      v13 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v8, &ExpWakeTimerLock);
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = v8->AbOrphanedEntrySummary;
    v8->AbOrphanedEntrySummary = 0;
    LOBYTE(v9) = AbOrphanedEntrySummary | v8->AbEntrySummary;
  }
  v12 = v9;
  _BitScanForward((unsigned int *)&v9, (unsigned __int8)v9);
  v8->AbEntrySummary = v12 & ~(1 << v9);
  v13 = (__int64)&v8->LockEntries[v9];
  if ( !v13 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0x10u);
    goto LABEL_21;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4F9C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(v8->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v13 + 40) = SessionId;
  *(_QWORD *)(v13 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_21:
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8);
  v15 = v8->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v13, &ExpWakeTimerLock);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  Flink = p_WaitListHead->Flink;
  Blink = p_WaitListHead->Blink;
  if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WaitListHead->Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock) == 1 )
    v10 = MmGetSessionIdEx(v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v20 = ++v19->AbAllocationRegionCount;
  v21 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  LODWORD(v22) = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v23, v22);
    if ( v15 )
      break;
    v24 = (__int64)&v19->LockEntries[v23];
    v22 = ~(1 << v23) & (unsigned int)v22;
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v21
      && *(_DWORD *)(v24 + 40) == v10 )
    {
      *(_BYTE *)(v24 + 26) &= ~1u;
      if ( *(_QWORD *)(v24 + 32) )
      {
        if ( v24 )
        {
          *(_BYTE *)(v24 + 32) |= 2u;
          if ( *(__int64 *)(v24 + 32) < 0 )
            KiAbEntryRemoveFromTree(v24, v22, v21);
          v25 = *(_DWORD *)(v24 + 88) & 0xFFFE0000;
          *(_BYTE *)(v24 + 25) &= ~1u;
          *(_DWORD *)(v24 + 88) = v25;
          *(_QWORD *)(v24 + 32) = 0LL;
          v26 = 1 << ((char)(v24 - LOBYTE(v19->LockEntries)) / 96);
          if ( v20 == 1 )
            v19->AbEntrySummary |= v26;
          else
            _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, v26);
          goto LABEL_46;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, (ULONG_PTR)&ExpWakeTimerLock, v10, 0LL);
LABEL_46:
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19);
  v15 = v19->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v27);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( P )
    PoDestroyReasonContext(P);
LABEL_2:
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v5 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    LOBYTE(v4) = v3;
    PsRemoveVirtualizedTimer(&a1[4].DueTime, &a1[4].TimerListEntry, &a1[1], v4);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  return KeCancelTimer(a1);
}
