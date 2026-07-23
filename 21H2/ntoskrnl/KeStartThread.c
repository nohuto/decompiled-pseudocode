/*
 * XREFs of KeStartThread @ 0x140265A0C
 * Callers:
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     KiInitializeIdleThread @ 0x14099F354 (KiInitializeIdleThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiFreezeSingleThread @ 0x14023A74C (KiFreezeSingleThread.c)
 *     KeFirstGroupAffinityEx @ 0x140240B10 (KeFirstGroupAffinityEx.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140265E74 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x140265F28 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x14029E0B0 (KeSelectNodeForAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiExtendProcessAffinity @ 0x14052463C (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, __int128 *a2, unsigned int *a3)
{
  __int128 *v4; // rsi
  __int64 v6; // r14
  unsigned __int16 v7; // r15
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *v9; // rdi
  __int64 CurrentIrql; // rcx
  char BasePriority; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int *v15; // r9
  unsigned int v16; // r14d
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v18; // r15
  int QuantumReset; // eax
  int v20; // edx
  __int64 v21; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v23; // rax
  unsigned __int8 v24; // r15
  __int64 result; // rax
  char v26; // dl
  char v27; // cl
  _LIST_ENTRY **v28; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  unsigned __int64 v30; // r8
  char v31; // r11
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v35; // r8
  int v36; // eax
  bool v37; // zf
  char v38; // [rsp+20h] [rbp-50h]
  unsigned __int16 v39; // [rsp+24h] [rbp-4Ch] BYREF
  int v40; // [rsp+28h] [rbp-48h] BYREF
  __int64 v41; // [rsp+30h] [rbp-40h]
  int *v42; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v44; // [rsp+58h] [rbp-18h] BYREF

  v40 = 0;
  v42 = 0LL;
  v4 = a2;
  v44 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 && a2 && *(_QWORD *)a2 )
  {
    v6 = KeSelectNodeForAffinity(a2);
    v38 = v31;
    v7 = *(_WORD *)(v6 + 108);
  }
  else
  {
    v6 = 0LL;
    v38 = 1;
    v7 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_KPROCESS **)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)&v9->0)) & 8;
  CurrentIrql = KeGetCurrentIrql();
  v41 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  BasePriority = v9->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  if ( v4 )
  {
    v30 = v9->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
    if ( !v30 || (v30 & *(_QWORD *)v4) != *(_QWORD *)v4 )
      KiExtendProcessAffinity(v9);
    if ( !*(_QWORD *)v4 )
      *(_QWORD *)v4 = v9->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
  }
  else
  {
    if ( v9 == CurrentThread->Process )
    {
      WORD4(v44) = CurrentThread->UserAffinity.Group;
      *(_QWORD *)&v44 = v9->Affinity.Bitmap[WORD4(v44)];
    }
    else
    {
      KeFirstGroupAffinityEx((__int64)&v44, &v9->Affinity.Count);
    }
    v4 = &v44;
  }
  *(_WORD *)(a1 + 584) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 576) = *(_QWORD *)v4;
  *(_WORD *)(a1 + 560) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 552) = *(_QWORD *)v4;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v16 = *a3;
  }
  else
  {
    if ( !v6 )
    {
      v14 = *((unsigned __int16 *)v4 + 4);
      v7 = v9->ThreadSeed[v14];
      v6 = KeNodeBlock[v9->IdealNode[v14]];
      v40 = v9->IdealProcessor[v14];
      v42 = &v40;
    }
    v15 = v42;
    *(_QWORD *)v4 &= *(_QWORD *)(v6 + 136);
    v39 = v7;
    v16 = (unsigned __int16)KeSelectIdealProcessor(v6, v4, &v39, v15);
    if ( v38 )
      v9->ThreadSeed[*((unsigned __int16 *)v4 + 4)] = v39;
  }
  *(_DWORD *)(a1 + 196) = v16;
  p_ThreadListHead = &v9->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v16;
  v18 = KiProcessorBlock[v16];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v9 != (_KPROCESS *)&KiInitialProcess )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&KiProcessListLock;
    KxAcquireQueuedSpinLock(&LockHandle, &KiProcessListLock, v12, v13);
    v28 = (_LIST_ENTRY **)qword_140C31C08;
    p_ProcessListEntry = &v9->ProcessListEntry;
    if ( *(__int64 **)qword_140C31C08 != &KiProcessListHead )
      goto LABEL_50;
    v9->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_140C31C08;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v28 = p_ProcessListEntry;
    qword_140C31C08 = (__int64)&v9->ProcessListEntry;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)&v9->0 << 6)) & 0x100;
  QuantumReset = (unsigned __int8)v9->QuantumReset;
  v20 = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v21 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (v20 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v21;
  KiAcquireKobjectLockSafe(v9);
  Blink = v9->ThreadListHead.Blink;
  v23 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
LABEL_50:
    __fastfail(3u);
  v23->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v23;
  v9->ThreadListHead.Blink = v23;
  _InterlockedAnd(&v9->Header.Lock, 0xFFFFFF7F);
  if ( (*(_DWORD *)&v9->0 & 8) != 0 )
    KiFreezeSingleThread((__int64)KeGetCurrentPrcb(), a1);
  *(_QWORD *)(a1 + 104) = v9->SchedulingGroup;
  if ( v9->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v18, a1);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 && !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 8) == 0 )
  {
    v26 = *(_BYTE *)(a1 + 195);
    if ( v26 > 0 )
    {
      v27 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
      if ( v27 >= 16 )
        v27 = 15;
      if ( v27 > v26 )
      {
        *(_BYTE *)(a1 + 564) = (v27 - v26) & 0xF;
        KiUpdateThreadPriority(0LL, a1, (unsigned int)v27, 0LL);
        KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = v9->ProcessTimerDelay;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  v24 = v41;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v33 = KeGetCurrentIrql();
      if ( v33 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v33 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v35 = CurrentPrcb->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
        v37 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = v24;
  __writecr8(v24);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v16);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v16);
  }
  _InterlockedExchangeAdd(&v9->StackCount.Value, 8u);
  return result;
}
