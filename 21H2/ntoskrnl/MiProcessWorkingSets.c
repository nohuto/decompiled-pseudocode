/*
 * XREFs of MiProcessWorkingSets @ 0x1402AC4A0
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     MiDrainZeroLookasides @ 0x1402375D0 (MiDrainZeroLookasides.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     MiComputeSystemTrimCriteria @ 0x14025F3E0 (MiComputeSystemTrimCriteria.c)
 *     MiComputeAgingPercent @ 0x14025F778 (MiComputeAgingPercent.c)
 *     MiLogProcessWorkingSetsStart @ 0x140286424 (MiLogProcessWorkingSetsStart.c)
 *     MiLogProcessWorkingSetsStop @ 0x140286490 (MiLogProcessWorkingSetsStop.c)
 *     MiReturnWsToExpansionList @ 0x1402A3628 (MiReturnWsToExpansionList.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CBE74 (MiInitializeWorkingSetManagerParameters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x140513B08 (KeRetryOutswapProcess.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiCheckSystemTrimEndCriteria @ 0x14053AF6C (MiCheckSystemTrimEndCriteria.c)
 *     MiOrderTrimList @ 0x14053B880 (MiOrderTrimList.c)
 */

void __fastcall MiProcessWorkingSets(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  PRKEVENT v4; // rdi
  int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 *v8; // r12
  _DWORD *v9; // r9
  int v10; // r13d
  __int16 v11; // dx
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // r14
  int v16; // r15d
  __int64 Next; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v21; // r10
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 **v28; // rax
  __int64 v29; // rcx
  __int64 **v30; // rax
  __int64 **v31; // rdi
  __int64 *v32; // rax
  __int64 **v33; // rdi
  char v34; // r14
  unsigned int v35; // eax
  int Blink; // esi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  struct _KPRCB *v40; // r9
  unsigned __int64 v41; // rbx
  _QWORD *v42; // r8
  _QWORD *v43; // rcx
  _QWORD *v44; // rdx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r9
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 **v51; // rax
  unsigned __int64 v52; // rsi
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  bool v57; // zf
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  int v60; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v62; // r10
  int v63; // eax
  struct _KPRCB *v64; // rax
  int v65; // eax
  int v66; // eax
  unsigned __int8 v67; // al
  int v68; // eax
  unsigned __int8 v69; // al
  int v70; // eax
  unsigned int v71; // [rsp+20h] [rbp-60h]
  int v72; // [rsp+24h] [rbp-5Ch]
  unsigned int v73; // [rsp+28h] [rbp-58h]
  int v74; // [rsp+2Ch] [rbp-54h]
  PRKEVENT Event; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]
  __int16 v80; // [rsp+B0h] [rbp+30h]
  int v81; // [rsp+B8h] [rbp+38h]
  __int16 v82; // [rsp+B8h] [rbp+38h]
  int v83; // [rsp+B8h] [rbp+38h]
  int v84; // [rsp+B8h] [rbp+38h]

  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(a1 + 12) )
    MiInitializeWorkingSetManagerParameters();
  if ( (*(_DWORD *)(v3 + 4) & 0x20) != 0 )
    return;
  v4 = *(PRKEVENT *)(v3 + 6848);
  Event = v4;
  MiComputeAgingPercent(v3);
  v71 = MiComputeSystemTrimCriteria((_QWORD *)v3, a2);
  v5 = v71;
  MiLogProcessWorkingSetsStart(v3, a2, v71);
  if ( (v71 & 5) != 0 )
    MiDrainZeroLookasides(v3, 0LL, 0LL, 0);
  v72 = 0;
  v73 = 0;
  if ( (v71 & 5) != 0 )
    LOBYTE(v4[2].Header.SignalState) = 1;
  if ( (v71 & 2) != 0 )
    ++HIDWORD(v4[3].Header.WaitListHead.Flink);
  v6 = 0LL;
  if ( (v71 & 0x40) != 0 )
  {
    if ( WORD1(v4[97].Header.WaitListHead.Blink) > 0xAu )
      WORD1(v4[97].Header.WaitListHead.Blink) = 10;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( BYTE2(v4[2].Header.SignalState) == 1 )
    {
      v42 = (_QWORD *)(v3 + 6856);
      BYTE2(v4[2].Header.SignalState) = 0;
      v43 = *(_QWORD **)(v3 + 6856);
      if ( v43 != (_QWORD *)(v3 + 6856) )
      {
        do
        {
          v44 = v43;
          v43 = (_QWORD *)*v43;
          if ( (struct _LIST_ENTRY *)v44[9] >= v4[2].Header.WaitListHead.Flink )
          {
            v47 = *v44;
            v48 = (_QWORD *)v44[1];
            if ( *(_QWORD **)(*v44 + 8LL) != v44
              || (_QWORD *)*v48 != v44
              || (*v48 = v47, *(_QWORD *)(v47 + 8) = v48, v49 = *v42, *(_QWORD **)(*v42 + 8LL) != v42) )
            {
LABEL_83:
              __fastfail(3u);
            }
            *v44 = v49;
            v44[1] = v42;
            *(_QWORD *)(v49 + 8) = v44;
            *v42 = v44;
          }
        }
        while ( v43 != v42 );
      }
    }
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  v7 = a2;
  v8 = (__int64 *)(v3 + 6856);
  BYTE1(v4[2].Header.SignalState) = 1;
  v9 = 0LL;
LABEL_13:
  while ( 2 )
  {
    v10 = 0;
    v74 = v5 & 1;
    if ( (v5 & 1) != 0 )
    {
      v50 = MiOrderTrimList(v3, *((unsigned __int8 *)MiTrimPassToAge + (*(_BYTE *)v7 & 0x7F)), v5 & 1, 0LL);
      v7 = a2;
      v9 = 0LL;
      *(_QWORD *)(a2 + 104) = v50;
    }
    v11 = ++LOWORD(v4[97].Header.WaitListHead.Blink);
    *(_QWORD *)(v7 + 88) = *(_QWORD *)(v7 + 80) - *(_QWORD *)(v7 + 96);
    v80 = v11;
    while ( 1 )
    {
      v12 = (__int64 *)*v8;
      if ( (__int64 *)*v8 == v8 )
        goto LABEL_46;
      v13 = *v12;
      if ( (__int64 *)v12[1] != v8 || *(__int64 **)(v13 + 8) != v12 )
        goto LABEL_83;
      *v8 = v13;
      v14 = (__int64)(v12 - 3);
      *(_QWORD *)(v13 + 8) = v8;
      v15 = v12;
      *v12 = 0LL;
      if ( *((_WORD *)v12 + 74) == v11 )
      {
        v32 = (__int64 *)*v8;
        v33 = (__int64 **)(v14 + 24);
        if ( *(__int64 **)(*v8 + 8) != v8 )
          goto LABEL_83;
        v3 = a1;
        *v33 = v32;
        v33[1] = v8;
        v32[1] = (__int64)v33;
        *v8 = (__int64)v33;
        if ( !v74 )
          goto LABEL_49;
        v66 = MiCheckSystemTrimEndCriteria(a1, v7, &LockHandle, 0LL);
        v7 = a2;
        v9 = 0LL;
        v4 = Event;
        if ( v66 )
          goto LABEL_49;
        goto LABEL_13;
      }
      *(_WORD *)(v14 + 172) = v11;
      v16 = v5 & 0x40;
      if ( (v5 & 0x40) != 0 && (struct _LIST_ENTRY *)*(_QWORD *)(v14 + 96) < Event[2].Header.WaitListHead.Flink )
        break;
      if ( *(_QWORD *)(v14 + 136) > 1uLL || (*(_BYTE *)(v14 + 184) & 7) != 0 )
      {
        v81 = *(_DWORD *)(v14 + 184);
        BYTE1(v81) = BYTE1(v81) & 0xF9 | 2;
        *(_WORD *)(v14 + 184) = v81;
        if ( *(_BYTE *)(v7 + 2) == 2 )
        {
          v58 = *(_QWORD *)(v14 + 136);
          v59 = *(_QWORD *)(v14 + 112);
          if ( v58 <= v59 || v58 - v59 < 0x40000 )
            goto LABEL_35;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          v7 = a2;
        }
        else
        {
          _m_prefetchw(&LockHandle);
          Next = (__int64)LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_26;
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
            v7 = a2;
            v9 = 0LL;
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        }
LABEL_26:
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v60 = SchedulerAssist[6] - 1;
            SchedulerAssist[6] = v60;
            if ( !v60 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v7 = a2;
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
              v62 = KeGetCurrentPrcb();
              v9 = v62->SchedulerAssist;
              v63 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v57 = (v63 & v9[5]) == 0;
              v9[5] &= v63;
              if ( v57 )
              {
                KiRemoveSystemWorkPriorityKick(v62);
                v7 = a2;
              }
            }
          }
        }
        __writecr8(OldIrql);
        v5 = v71;
        v10 = MiTrimOrAgeWorkingSet(v14, v7, v71, v9);
        if ( v10 == 1 )
          *(_BYTE *)(a2 + 4) = 2;
        LockHandle.LockQueue.Lock = &SpinLock;
        LockHandle.LockQueue.Next = 0LL;
        v21 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
        {
          v64 = KeGetCurrentPrcb();
          *((_DWORD *)v64->SchedulerAssist + 5) |= (-1 << (v21 + 1)) & 4;
        }
        LockHandle.OldIrql = v21;
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            v65 = v23[6];
            v23[6] = v65 + 1;
            if ( v65 == -1 )
              KiRemoveSystemWorkPriorityKick(v22);
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
        if ( !v16
          || (v24 = 0, (struct _LIST_ENTRY *)*(_QWORD *)(v14 + 96) < Event[2].Header.WaitListHead.Flink)
          || *(_QWORD *)(v14 + 104) )
        {
          v24 = 1;
        }
        v25 = *(_DWORD *)(v14 + 184);
        LOBYTE(v82) = v25;
        if ( v24 )
        {
          HIBYTE(v82) = BYTE1(v25) & 0xF9;
          *(_WORD *)(v14 + 184) = v82;
          v26 = *(unsigned __int16 *)(v14 + 174);
          v27 = *(_QWORD *)(qword_140C4E688 + 8 * v26) + 6856LL;
          v28 = *(__int64 ***)(*(_QWORD *)(qword_140C4E688 + 8 * v26) + 6864LL);
          if ( *v28 != (__int64 *)v27 )
            goto LABEL_83;
          *v15 = v27;
          v15[1] = (__int64)v28;
          *v28 = v15;
          *(_QWORD *)(v27 + 8) = v15;
          v29 = *(_QWORD *)(v14 + 104);
          if ( v29 )
            KeSignalGate(v29, 1);
        }
        else
        {
          *(_QWORD *)(v14 + 32) = v6;
          HIBYTE(v82) = BYTE1(v25) | 6;
          v6 = v14 + 32;
          *(_WORD *)(v14 + 184) = v82;
        }
        v7 = a2;
        v9 = 0LL;
        if ( v10 == 1 )
          goto LABEL_46;
        v11 = v80;
      }
      else if ( *(_QWORD *)(v14 + 104) )
      {
        v51 = (__int64 **)v8[1];
        if ( *v51 != v8 )
          goto LABEL_83;
        *v15 = (__int64)v8;
        v15[1] = (__int64)v51;
        *v51 = v15;
        v8[1] = (__int64)v15;
      }
      else
      {
        v83 = *(_DWORD *)(v14 + 184);
        BYTE1(v83) |= 6u;
        *(_WORD *)(v14 + 184) = v83;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v52 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v53 = KeGetCurrentIrql();
            if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
            {
              v54 = KeGetCurrentPrcb();
              v55 = v54->SchedulerAssist;
              v56 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v57 = (v56 & v55[5]) == 0;
              v55[5] &= v56;
              if ( v57 )
                KiRemoveSystemWorkPriorityKick(v54);
            }
          }
        }
        __writecr8(v52);
        KeRetryOutswapProcess(v14 - 1664);
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v84 = *(_DWORD *)(v14 + 184);
        BYTE1(v84) &= 0xF9u;
        *(_WORD *)(v14 + 184) = v84;
        MiReturnWsToExpansionList(v14, 0);
        v11 = v80;
        v9 = 0LL;
        v7 = a2;
        v5 = v71;
      }
    }
    v30 = (__int64 **)v8[1];
    v31 = (__int64 **)(v14 + 24);
    if ( *v30 != v8 )
      goto LABEL_83;
    *v31 = v8;
    v31[1] = (__int64 *)v30;
    *v30 = (__int64 *)v31;
    v8[1] = (__int64)v31;
LABEL_46:
    v3 = a1;
LABEL_49:
    if ( (v5 & 0x40) != 0 )
    {
      while ( v6 )
      {
        v45 = *(_DWORD *)(v6 + 152);
        v46 = v6 - 32;
        v6 = *(_QWORD *)v6;
        *(_WORD *)(v46 + 184) = v45 & 0xF9FF;
        MiReturnWsToExpansionList(v46, 1);
      }
      v7 = a2;
      v9 = 0LL;
    }
    v4 = Event;
    v34 = v5 | v72;
    v72 |= v5;
    if ( v10 != 1 )
    {
      v35 = v5 & 0xFFFFFF3C | v73;
      Blink = (int)Event[1].Header.WaitListHead.Blink;
      v73 = v35;
      if ( v35 == Blink )
      {
        BYTE1(Event[2].Header.SignalState) = 0;
        if ( (v34 & 5) != 0 )
          LOBYTE(Event[2].Header.SignalState) = 0;
        if ( Blink )
        {
          LODWORD(Event[1].Header.WaitListHead.Blink) = 0;
          KeSetEvent(Event, 0, 0);
        }
        if ( (v34 & 0x83) != 0 )
        {
          Event[100].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 8);
          *(_QWORD *)&Event[101].Header.Lock = *(_QWORD *)(a2 + 16);
          Event[101].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(a2 + 24);
          Event[101].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 32);
          *(_QWORD *)&Event[102].Header.Lock = *(_QWORD *)(a2 + 40);
          Event[102].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(a2 + 48);
          Event[102].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a2 + 56);
          v37 = *(_QWORD *)(a2 + 64);
          *(_QWORD *)&Event[103].Header.Lock = v37;
          Event[100].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)((char *)Event[102].Header.WaitListHead.Blink
                                                                      + v37);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v41 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v67 = KeGetCurrentIrql();
            if ( v67 <= 0xFu && LockHandle.OldIrql <= 0xFu && v67 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v39 = (__int64)v40->SchedulerAssist;
              v68 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v57 = (v68 & *(_DWORD *)(v39 + 20)) == 0;
              v38 = (unsigned int)v68 & *(_DWORD *)(v39 + 20);
              *(_DWORD *)(v39 + 20) = v38;
              if ( v57 )
                goto LABEL_134;
            }
          }
        }
        goto LABEL_59;
      }
      v5 = v35 ^ Blink;
      v71 = v5;
      if ( (v5 & 5) != 0 )
        LOBYTE(Event[2].Header.SignalState) = 1;
      *(_BYTE *)(v7 + 2) = 6;
      continue;
    }
    break;
  }
  BYTE1(Event[2].Header.SignalState) = 0;
  if ( (v34 & 5) != 0 )
    LOBYTE(Event[2].Header.SignalState) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v41 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v69 = KeGetCurrentIrql();
      if ( v69 <= 0xFu && LockHandle.OldIrql <= 0xFu && v69 >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        v39 = (__int64)v40->SchedulerAssist;
        v70 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v57 = (v70 & *(_DWORD *)(v39 + 20)) == 0;
        v38 = (unsigned int)v70 & *(_DWORD *)(v39 + 20);
        *(_DWORD *)(v39 + 20) = v38;
        if ( v57 )
LABEL_134:
          KiRemoveSystemWorkPriorityKick(v40);
      }
    }
  }
LABEL_59:
  __writecr8(v41);
  MiLogProcessWorkingSetsStop(v3, v38, v39, (__int64)v40);
}
