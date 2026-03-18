/*
 * XREFs of MiProcessWorkingSets @ 0x1402036D0
 * Callers:
 *     MiWorkingSetManager @ 0x1402F3750 (MiWorkingSetManager.c)
 * Callees:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLogProcessWorkingSetsStart @ 0x14026C4E4 (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x14026C550 (MiLogProcessWorkingSetsStop.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiComputeSystemTrimCriteria @ 0x1402F1FE4 (MiComputeSystemTrimCriteria.c)
 *     MiReturnWsToExpansionList @ 0x1402FDD68 (MiReturnWsToExpansionList.c)
 *     MiComputeAgingPercent @ 0x14034401C (MiComputeAgingPercent.c)
 *     MiDrainZeroLookasides @ 0x140344FD0 (MiDrainZeroLookasides.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403C86F4 (MiInitializeWorkingSetManagerParameters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x14050E458 (KeRetryOutswapProcess.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14053585C (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x140536170 (MiOrderTrimList.c)
 */

__int64 __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 result; // rax
  PRKEVENT v5; // rdi
  int v6; // esi
  _QWORD *v7; // rbx
  __int64 v8; // r11
  __int64 *v9; // r12
  _DWORD *v10; // r9
  int v11; // r13d
  KSPIN_LOCK *v12; // r8
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 *v17; // r14
  int v18; // r15d
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v23; // r10
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // edx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 **v30; // rax
  __int64 v31; // rcx
  __int64 **v32; // rax
  __int64 **v33; // rdi
  __int64 *v34; // rax
  __int64 **v35; // rdi
  char v36; // r14
  unsigned int v37; // eax
  int Blink; // esi
  __int64 v39; // rcx
  unsigned __int64 v40; // rbx
  _QWORD *v41; // r8
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  int v44; // eax
  _QWORD *v45; // rcx
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 **v50; // rax
  unsigned __int64 v51; // rsi
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  bool v56; // zf
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  int v59; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v61; // r10
  int v62; // eax
  struct _KPRCB *v63; // rax
  int v64; // eax
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  unsigned __int8 v70; // al
  _DWORD *v71; // r8
  int v72; // eax
  unsigned int v73; // [rsp+20h] [rbp-60h]
  int v74; // [rsp+24h] [rbp-5Ch]
  unsigned int v75; // [rsp+28h] [rbp-58h]
  int v76; // [rsp+2Ch] [rbp-54h]
  PRKEVENT Event; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]
  unsigned __int16 v82; // [rsp+B0h] [rbp+30h]
  int v83; // [rsp+B8h] [rbp+38h]
  __int16 v84; // [rsp+B8h] [rbp+38h]
  int v85; // [rsp+B8h] [rbp+38h]
  int v86; // [rsp+B8h] [rbp+38h]

  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(a1 + 12) )
    MiInitializeWorkingSetManagerParameters();
  result = *(unsigned int *)(v3 + 4);
  if ( (result & 0x20) != 0 )
    return result;
  v5 = *(PRKEVENT *)(v3 + 6848);
  Event = v5;
  MiComputeAgingPercent(v3);
  v73 = MiComputeSystemTrimCriteria(v3, a2);
  v6 = v73;
  MiLogProcessWorkingSetsStart(v3, a2, v73);
  if ( (v73 & 5) != 0 )
    MiDrainZeroLookasides(v3, 0LL, 0LL, 0LL);
  v74 = 0;
  v75 = 0;
  if ( (v73 & 5) != 0 )
    LOBYTE(v5[2].Header.SignalState) = 1;
  if ( (v73 & 2) != 0 )
    ++HIDWORD(v5[3].Header.WaitListHead.Flink);
  v7 = 0LL;
  if ( (v73 & 0x40) != 0 )
  {
    if ( WORD1(v5[97].Header.WaitListHead.Blink) > 0xAu )
      WORD1(v5[97].Header.WaitListHead.Blink) = 10;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( BYTE2(v5[2].Header.SignalState) == 1 )
    {
      v41 = (_QWORD *)(v3 + 6856);
      BYTE2(v5[2].Header.SignalState) = 0;
      v42 = *(_QWORD **)(v3 + 6856);
      if ( v42 != (_QWORD *)(v3 + 6856) )
      {
        do
        {
          v43 = v42;
          v42 = (_QWORD *)*v42;
          if ( (struct _LIST_ENTRY *)v43[9] >= v5[2].Header.WaitListHead.Flink )
          {
            v46 = *v43;
            v47 = (_QWORD *)v43[1];
            if ( *(_QWORD **)(*v43 + 8LL) != v43
              || (_QWORD *)*v47 != v43
              || (*v47 = v46, *(_QWORD *)(v46 + 8) = v47, v48 = *v41, *(_QWORD **)(*v41 + 8LL) != v41) )
            {
LABEL_83:
              __fastfail(3u);
            }
            *v43 = v48;
            v43[1] = v41;
            *(_QWORD *)(v48 + 8) = v43;
            *v41 = v43;
          }
        }
        while ( v42 != v41 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  v8 = a2;
  v9 = (__int64 *)(v3 + 6856);
  BYTE1(v5[2].Header.SignalState) = 1;
  v10 = 0LL;
LABEL_13:
  while ( 2 )
  {
    v11 = 0;
    v12 = (KSPIN_LOCK *)(v6 & 1);
    v76 = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      v49 = MiOrderTrimList(v3, *((unsigned __int8 *)MiTrimPassToAge + (*(_BYTE *)v8 & 0x7F)), v12, 0LL);
      v8 = a2;
      v10 = 0LL;
      *(_QWORD *)(a2 + 104) = v49;
    }
    v13 = (unsigned __int16)++LOWORD(v5[97].Header.WaitListHead.Blink);
    *(_QWORD *)(v8 + 88) = *(_QWORD *)(v8 + 80) - *(_QWORD *)(v8 + 96);
    v82 = v13;
    while ( 1 )
    {
      v14 = (__int64 *)*v9;
      if ( (__int64 *)*v9 == v9 )
        goto LABEL_46;
      v15 = *v14;
      if ( (__int64 *)v14[1] != v9 || *(__int64 **)(v15 + 8) != v14 )
        goto LABEL_83;
      *v9 = v15;
      v16 = v14 - 3;
      *(_QWORD *)(v15 + 8) = v9;
      v17 = v14;
      *v14 = 0LL;
      if ( *((_WORD *)v14 + 74) == (_WORD)v13 )
      {
        v34 = (__int64 *)*v9;
        v35 = (__int64 **)(v16 + 3);
        if ( *(__int64 **)(*v9 + 8) != v9 )
          goto LABEL_83;
        v3 = a1;
        *v35 = v34;
        v35[1] = v9;
        v34[1] = (__int64)v35;
        *v9 = (__int64)v35;
        if ( !v76 )
          goto LABEL_49;
        v65 = MiCheckSystemTrimEndCriteria(a1, v8, &LockHandle, 0LL);
        v8 = a2;
        v10 = 0LL;
        v5 = Event;
        if ( v65 )
          goto LABEL_49;
        goto LABEL_13;
      }
      *((_WORD *)v16 + 86) = v13;
      v18 = v6 & 0x40;
      if ( (v6 & 0x40) != 0 && (struct _LIST_ENTRY *)v16[12] < Event[2].Header.WaitListHead.Flink )
        break;
      if ( (unsigned __int64)v16[17] > 1 || (v16[23] & 7) != 0 )
      {
        v83 = *((_DWORD *)v16 + 46);
        BYTE1(v83) = BYTE1(v83) & 0xF9 | 2;
        *((_WORD *)v16 + 92) = v83;
        if ( *(_BYTE *)(v8 + 2) == 2 )
        {
          v57 = v16[17];
          v58 = v16[14];
          if ( v57 <= v58 || v57 - v58 < 0x40000 )
            goto LABEL_35;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr, v12, 0LL);
          v8 = a2;
        }
        else
        {
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_26;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle, v13, v12, 0LL);
            v8 = a2;
            v10 = 0LL;
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_26:
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v59 = SchedulerAssist[6] - 1;
            SchedulerAssist[6] = v59;
            if ( !v59 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v8 = a2;
            }
          }
        }
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              v61 = KeGetCurrentPrcb();
              v10 = v61->SchedulerAssist;
              v62 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v56 = (v62 & v10[5]) == 0;
              v10[5] &= v62;
              if ( v56 )
              {
                KiRemoveSystemWorkPriorityKick(v61);
                v8 = a2;
              }
            }
          }
        }
        __writecr8(OldIrql);
        v6 = v73;
        v11 = MiTrimOrAgeWorkingSet(v16, v8, v73, v10);
        if ( v11 == 1 )
          *(_BYTE *)(a2 + 4) = 2;
        v12 = &SpinLock;
        LockHandle.LockQueue.Lock = &SpinLock;
        LockHandle.LockQueue.Next = 0LL;
        v23 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
        {
          v63 = KeGetCurrentPrcb();
          *((_DWORD *)v63->SchedulerAssist + 5) |= (-1 << (v23 + 1)) & 4;
          v12 = &SpinLock;
        }
        LockHandle.OldIrql = v23;
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v64 = v25[6];
            v25[6] = v64 + 1;
            if ( v64 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(v24);
              v12 = &SpinLock;
            }
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, &SpinLock);
        }
        else if ( _InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&LockHandle) )
        {
          KxWaitForLockOwnerShip(&LockHandle);
        }
LABEL_35:
        if ( !v18 || (v26 = 0, (struct _LIST_ENTRY *)v16[12] < Event[2].Header.WaitListHead.Flink) || v16[13] )
          v26 = 1;
        v27 = *((_DWORD *)v16 + 46);
        LOBYTE(v84) = v27;
        if ( v26 )
        {
          HIBYTE(v84) = BYTE1(v27) & 0xF9;
          *((_WORD *)v16 + 92) = v84;
          v28 = *((unsigned __int16 *)v16 + 87);
          v29 = *(_QWORD *)(qword_140C4E448 + 8 * v28) + 6856LL;
          v30 = *(__int64 ***)(*(_QWORD *)(qword_140C4E448 + 8 * v28) + 6864LL);
          if ( *v30 != (__int64 *)v29 )
            goto LABEL_83;
          *v17 = v29;
          v17[1] = (__int64)v30;
          *v30 = v17;
          *(_QWORD *)(v29 + 8) = v17;
          v31 = v16[13];
          if ( v31 )
            KeSignalGate(v31, 1LL);
        }
        else
        {
          v16[4] = (__int64)v7;
          HIBYTE(v84) = BYTE1(v27) | 6;
          v7 = v16 + 4;
          *((_WORD *)v16 + 92) = v84;
        }
        v8 = a2;
        v10 = 0LL;
        if ( v11 == 1 )
          goto LABEL_46;
        v13 = v82;
      }
      else if ( v16[13] )
      {
        v50 = (__int64 **)v9[1];
        if ( *v50 != v9 )
          goto LABEL_83;
        *v17 = (__int64)v9;
        v17[1] = (__int64)v50;
        *v50 = v17;
        v9[1] = (__int64)v17;
      }
      else
      {
        v85 = *((_DWORD *)v16 + 46);
        BYTE1(v85) |= 6u;
        *((_WORD *)v16 + 92) = v85;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v51 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v52 = KeGetCurrentIrql();
            if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
            {
              v53 = KeGetCurrentPrcb();
              v54 = v53->SchedulerAssist;
              v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v56 = (v55 & v54[5]) == 0;
              v54[5] &= v55;
              if ( v56 )
                KiRemoveSystemWorkPriorityKick(v53);
            }
          }
        }
        __writecr8(v51);
        KeRetryOutswapProcess(v16 - 208);
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v86 = *((_DWORD *)v16 + 46);
        BYTE1(v86) &= 0xF9u;
        *((_WORD *)v16 + 92) = v86;
        MiReturnWsToExpansionList(v16, 0LL);
        v13 = v82;
        v10 = 0LL;
        v8 = a2;
        v6 = v73;
      }
    }
    v32 = (__int64 **)v9[1];
    v33 = (__int64 **)(v16 + 3);
    if ( *v32 != v9 )
      goto LABEL_83;
    *v33 = v9;
    v33[1] = (__int64 *)v32;
    *v32 = (__int64 *)v33;
    v9[1] = (__int64)v33;
LABEL_46:
    v3 = a1;
LABEL_49:
    if ( (v6 & 0x40) != 0 )
    {
      while ( v7 )
      {
        v44 = *((_DWORD *)v7 + 38);
        v45 = v7 - 4;
        v7 = (_QWORD *)*v7;
        *((_WORD *)v45 + 92) = v44 & 0xF9FF;
        MiReturnWsToExpansionList(v45, 1LL);
      }
      v8 = a2;
      v10 = 0LL;
    }
    v5 = Event;
    v36 = v6 | v74;
    v74 |= v6;
    if ( v11 != 1 )
    {
      v37 = v6 & 0xFFFFFF3C | v75;
      Blink = (int)Event[1].Header.WaitListHead.Blink;
      v75 = v37;
      if ( v37 == Blink )
      {
        BYTE1(Event[2].Header.SignalState) = 0;
        if ( (v36 & 5) != 0 )
          LOBYTE(Event[2].Header.SignalState) = 0;
        if ( Blink )
        {
          LODWORD(Event[1].Header.WaitListHead.Blink) = 0;
          KeSetEvent(Event, 0, 0);
        }
        if ( (v36 & 0x83) != 0 )
        {
          Event[100].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 8);
          *(_QWORD *)&Event[101].Header.Lock = *(_QWORD *)(a2 + 16);
          Event[101].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(a2 + 24);
          Event[101].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 32);
          *(_QWORD *)&Event[102].Header.Lock = *(_QWORD *)(a2 + 40);
          Event[102].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(a2 + 48);
          Event[102].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 56);
          v39 = *(_QWORD *)(a2 + 64);
          *(_QWORD *)&Event[103].Header.Lock = v39;
          Event[100].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)Event[102].Header.WaitListHead.Blink
                                                                      + v39);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v40 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v66 = KeGetCurrentIrql();
            if ( v66 <= 0xFu && LockHandle.OldIrql <= 0xFu && v66 >= 2u )
            {
              v67 = KeGetCurrentPrcb();
              v68 = v67->SchedulerAssist;
              v69 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v56 = (v69 & v68[5]) == 0;
              v68[5] &= v69;
              if ( v56 )
                goto LABEL_134;
            }
          }
        }
        goto LABEL_59;
      }
      v6 = v37 ^ Blink;
      v73 = v6;
      if ( (v6 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      *(_BYTE *)(v8 + 2) = 6;
      continue;
    }
    break;
  }
  BYTE1(Event[2].Header.SignalState) = 0;
  if ( (v36 & 5) != 0 )
    LOBYTE(Event[2].Header.SignalState) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v40 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v70 = KeGetCurrentIrql();
      if ( v70 <= 0xFu && LockHandle.OldIrql <= 0xFu && v70 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v71 = v67->SchedulerAssist;
        v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v56 = (v72 & v71[5]) == 0;
        v71[5] &= v72;
        if ( v56 )
LABEL_134:
          KiRemoveSystemWorkPriorityKick(v67);
      }
    }
  }
LABEL_59:
  __writecr8(v40);
  return MiLogProcessWorkingSetsStop(v3);
}
