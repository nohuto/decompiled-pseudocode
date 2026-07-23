/*
 * XREFs of ExpDeleteTimer @ 0x1402C9260
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x140276B88 (PoDestroyReasonContext.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsRemoveVirtualizedTimer @ 0x140327D00 (PsRemoveVirtualizedTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // eax
  unsigned int v25; // ecx
  unsigned __int8 v26; // al
  __int64 v27; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v30; // eax
  _DWORD *SchedulerAssist; // r8
  _QWORD *P; // [rsp+30h] [rbp-58h]
  int v33; // [rsp+98h] [rbp+10h] BYREF
  int v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h] BYREF

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( !a1[4].Header.WaitListHead.Flink )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  P = *(_QWORD **)&a1[4].Header.Lock;
  --CurrentThread->KernelApcDisable;
  v8 = KeGetCurrentThread();
  v35 = 0;
  --v8->SpecialApcDisable;
  if ( ++v8->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v8, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v9) = v8->AbEntrySummary;
  v10 = -1;
  v34 = 0;
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
  v34 = v9;
  v8->AbEntrySummary = v12 & ~(1 << v9);
  v13 = (__int64)&v8->LockEntries[v9];
  if ( !v13 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0x10u);
    goto LABEL_21;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4F7C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v13 + 40) = SessionId;
  *(_QWORD *)(v13 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_21:
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8, (__int64)&ExpWakeTimerLock, &v35);
  v15 = v8->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v13, (ULONG_PTR)&ExpWakeTimerLock);
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
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  v33 = 0;
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpWakeTimerLock) == 1 )
    v10 = MmGetSessionIdEx((__int64)v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v20 = ++v19->AbAllocationRegionCount;
  v21 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v22, v21);
    if ( v15 )
      break;
    v23 = (__int64)&v19->LockEntries[v22];
    v21 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v10 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
          v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
          v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          v33 = v24;
          *(_DWORD *)(v23 + 88) = v25;
          *(_QWORD *)(v23 + 32) = 0LL;
          v26 = 1 << ((char)(v23 - LOBYTE(v19->LockEntries)) / 96);
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v19, (__int64)&ExpWakeTimerLock, &v33);
  v15 = v19->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
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
