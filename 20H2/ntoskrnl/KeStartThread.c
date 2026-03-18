/*
 * XREFs of KeStartThread @ 0x1402D8900
 * Callers:
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     KiInitializeIdleThread @ 0x1409A0764 (KiInitializeIdleThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402BE850 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KeSelectIdealProcessor @ 0x1402D8400 (KeSelectIdealProcessor.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1402D884C (KiUpdateNodeAffinitizedFlag.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiFreezeSingleThread @ 0x1402EAFAC (KiFreezeSingleThread.c)
 *     KeSelectNodeForAffinity @ 0x1402F7D00 (KeSelectNodeForAffinity.c)
 *     KeFirstGroupAffinityEx @ 0x140320F70 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiExtendProcessAffinity @ 0x14052291C (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1405A5E14 (EtwTraceIdealProcessor.c)
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
  __int64 v12; // rcx
  unsigned int *v13; // r9
  unsigned int v14; // r14d
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v16; // r15
  int QuantumReset; // eax
  int v18; // edx
  __int64 v19; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v21; // rax
  unsigned __int8 v22; // r15
  __int64 result; // rax
  char v24; // dl
  char v25; // cl
  _LIST_ENTRY **v26; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  unsigned __int64 v28; // r8
  char v29; // r11
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v33; // r8
  int v34; // eax
  bool v35; // zf
  char v36; // [rsp+20h] [rbp-50h]
  unsigned __int16 v37; // [rsp+24h] [rbp-4Ch] BYREF
  int v38; // [rsp+28h] [rbp-48h] BYREF
  __int64 v39; // [rsp+30h] [rbp-40h]
  unsigned int *v40; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v42; // [rsp+58h] [rbp-18h] BYREF

  v38 = 0;
  v40 = 0LL;
  v4 = a2;
  v42 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 && a2 && *(_QWORD *)a2 )
  {
    v6 = KeSelectNodeForAffinity(a2);
    v36 = v29;
    v7 = *(_WORD *)(v6 + 108);
  }
  else
  {
    v6 = 0LL;
    v36 = 1;
    v7 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_KPROCESS **)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)&v9->0)) & 8;
  CurrentIrql = KeGetCurrentIrql();
  v39 = CurrentIrql;
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
    v28 = v9->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
    if ( !v28 || (v28 & *(_QWORD *)v4) != *(_QWORD *)v4 )
      KiExtendProcessAffinity(v9);
    if ( !*(_QWORD *)v4 )
      *(_QWORD *)v4 = v9->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
  }
  else
  {
    if ( v9 == CurrentThread->Process )
    {
      WORD4(v42) = CurrentThread->UserAffinity.Group;
      *(_QWORD *)&v42 = v9->Affinity.Bitmap[WORD4(v42)];
    }
    else
    {
      KeFirstGroupAffinityEx(&v42, &v9->Affinity);
    }
    v4 = &v42;
  }
  *(_WORD *)(a1 + 584) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 576) = *(_QWORD *)v4;
  *(_WORD *)(a1 + 560) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 552) = *(_QWORD *)v4;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v14 = *a3;
  }
  else
  {
    if ( !v6 )
    {
      v12 = *((unsigned __int16 *)v4 + 4);
      v7 = v9->ThreadSeed[v12];
      v6 = KeNodeBlock[v9->IdealNode[v12]];
      v38 = v9->IdealProcessor[v12];
      v40 = (unsigned int *)&v38;
    }
    v13 = v40;
    *(_QWORD *)v4 &= *(_QWORD *)(v6 + 136);
    v37 = v7;
    v14 = (unsigned __int16)KeSelectIdealProcessor(v6, v4, &v37, v13);
    if ( v36 )
      v9->ThreadSeed[*((unsigned __int16 *)v4 + 4)] = v37;
  }
  *(_DWORD *)(a1 + 196) = v14;
  p_ThreadListHead = &v9->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v14;
  v16 = KiProcessorBlock[v14];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v9 != (_KPROCESS *)&KiInitialProcess )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, KiProcessListLock);
    v26 = (_LIST_ENTRY **)qword_140C31AF8;
    p_ProcessListEntry = &v9->ProcessListEntry;
    if ( *(__int64 **)qword_140C31AF8 != &KiProcessListHead )
      goto LABEL_50;
    v9->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_140C31AF8;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v26 = p_ProcessListEntry;
    qword_140C31AF8 = (__int64)&v9->ProcessListEntry;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)&v9->0 << 6)) & 0x100;
  QuantumReset = (unsigned __int8)v9->QuantumReset;
  v18 = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v19 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (v18 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v19;
  KiAcquireKobjectLockSafe(v9);
  Blink = v9->ThreadListHead.Blink;
  v21 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
LABEL_50:
    __fastfail(3u);
  v21->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v21;
  v9->ThreadListHead.Blink = v21;
  _InterlockedAnd(&v9->Header.Lock, 0xFFFFFF7F);
  if ( (*(_DWORD *)&v9->0 & 8) != 0 )
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1);
  *(_QWORD *)(a1 + 104) = v9->SchedulingGroup;
  if ( v9->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v16, a1);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 && !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 8) == 0 )
  {
    v24 = *(_BYTE *)(a1 + 195);
    if ( v24 > 0 )
    {
      v25 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
      if ( v25 >= 16 )
        v25 = 15;
      if ( v25 > v24 )
      {
        *(_BYTE *)(a1 + 564) = (v25 - v24) & 0xF;
        KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v25, 0);
        KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = v9->ProcessTimerDelay;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  v22 = v39;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v31 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v33 = CurrentPrcb->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
        v35 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = v22;
  __writecr8(v22);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v14);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v14);
  }
  _InterlockedExchangeAdd(&v9->StackCount.Value, 8u);
  return result;
}
