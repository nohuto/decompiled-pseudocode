/*
 * XREFs of KiInSwapProcesses @ 0x14030A250
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B2C70 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiReadyOutSwappedThreads @ 0x14028D410 (KiReadyOutSwappedThreads.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140335260 (KeMakeKernelDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x140336088 (MiMarkPfnTradable.c)
 *     MiSetPageTablePfnBuddy @ 0x140336A64 (MiSetPageTablePfnBuddy.c)
 *     MiReturnWsToExpansionList @ 0x140338E08 (MiReturnWsToExpansionList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052A868 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x14052AEE0 (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x1405A5E90 (EtwTraceInswapProcess.c)
 */

char __fastcall KiInSwapProcesses(_QWORD *a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v5; // rsi
  int v6; // eax
  unsigned __int8 v7; // bl
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  char result; // al
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // r12d
  unsigned __int64 v17; // rbx
  unsigned __int64 *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // rbx
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  int v36; // eax
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r10
  int v39; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v41; // [rsp+A0h] [rbp+48h]
  unsigned __int8 v42; // [rsp+A8h] [rbp+50h] BYREF
  __int64 OutswappedPageResident; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v44; // [rsp+B8h] [rbp+60h]

  do
  {
    v5 = a1 - 45;
    a1 = (_QWORD *)*a1;
    v41 = a1;
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 6u);
    OutswappedPageResident = 0LL;
    v6 = *((_DWORD *)v5 + 281);
    v42 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_2;
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               (_DWORD)v5,
                               (_DWORD)a2,
                               a3,
                               (_DWORD)a4,
                               *((unsigned __int16 *)v5 + 418));
    v11 = OutswappedPageResident;
    v12 = OutswappedPageResident;
    if ( MiPteInShadowRange((unsigned __int64)&OutswappedPageResident)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v14 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&OutswappedPageResident >> 3) & 0x1FF));
        if ( (v14 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v14 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
      else
      {
        v11 = OutswappedPageResident;
      }
    }
    v15 = (v11 >> 12) & 0xFFFFFFFFFLL;
    v44 = MiMapPageInHyperSpaceWorker(v15, &v42, 0x80000000LL);
    v16 = 0;
    v17 = v12;
    v18 = (unsigned __int64 *)(v44 + 3944);
    if ( MiPteInShadowRange(v44 + 3944) )
    {
      if ( (unsigned int)MiPteHasShadow(v20, v19, v21, v22) )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v23 = (v12 & 1) == 0;
          goto LABEL_33;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v23 = (v12 & 1) == 0;
LABEL_33:
        if ( !v23 )
          v17 = v12 | 0x8000000000000000uLL;
      }
    }
    *v18 = v17;
    if ( v16 )
      MiWritePteShadow(v18, v17);
    MiUnmapPageInHyperSpaceWorker(v44, v42, 0x80000000);
    v24 = 48 * v15 - 0x58000000000LL;
    v25 = (unsigned __int8)MiLockPageInline(v24);
    v26 = v15 | *(_QWORD *)(v24 + 40) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v24 + 24) ^= ((*(_QWORD *)(v24 + 24) + 1LL) ^ *(_QWORD *)(v24 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v24 + 40) = v26;
    MiSetPageTablePfnBuddy(v24, v5, 1LL);
    *(_QWORD *)(v24 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v24 & 1) == 0 )
      MiMarkPfnTradable(48 * v15 - 0x58000000000LL, 1LL, v27, v28);
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
          v23 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v25);
    v5[225] = 1LL;
    v5[226] = 1LL;
    v5[5] = KeMakeKernelDirectoryTableBase(v15 << 12);
    KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
    if ( (*((_DWORD *)v5 + 281) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFF7FFFFF);
      MiUpdateSystemPdes(v5);
    }
    MiReturnWsToExpansionList(v5 + 208, 0LL);
    _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && LockHandle.OldIrql <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          a4 = v35->SchedulerAssist;
          a2 = (_QWORD *)(-1LL << (LockHandle.OldIrql + 1));
          v36 = ~(unsigned __int16)a2;
          v23 = (v36 & a4[5]) == 0;
          a3 = (unsigned int)v36 & a4[5];
          a4[5] = a3;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
    a1 = v41;
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)v5 + 281, 0xFFFFFFBF);
    if ( (*((_BYTE *)v5 + 1851) & 0x60) == 0x40 )
      MiReAcquireOutSwappedProcessCommit(v5);
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
    {
      a4 = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (_QWORD *)((-1LL << (v7 + 1)) & 4);
      a3 = (unsigned int)a2 | a4[5];
      a4[5] = a3;
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v5, (__int64)a2, a3, (__int64)a4);
    v8 = v5 + 43;
    v9 = (_QWORD *)v5[43];
    if ( v9 == v5 + 43 )
    {
      v9 = 0LL;
    }
    else
    {
      a2 = (_QWORD *)v5[44];
      if ( (_QWORD *)v9[1] != v8 || (_QWORD *)*a2 != v8 )
        __fastfail(3u);
      *a2 = v9;
      v9[1] = a2;
      v5[44] = v5 + 43;
      *v8 = v8;
    }
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v9 )
    {
      result = KiReadyOutSwappedThreads(v9, v7);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v37 = KeGetCurrentIrql();
          if ( v37 <= 0xFu && v7 <= 0xFu && v37 >= 2u )
          {
            v38 = KeGetCurrentPrcb();
            a2 = (_QWORD *)(-1LL << (v7 + 1));
            a4 = v38->SchedulerAssist;
            v39 = ~(unsigned __int16)a2;
            v23 = (v39 & a4[5]) == 0;
            a3 = (unsigned int)v39 & a4[5];
            a4[5] = a3;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
      }
      result = v7;
      __writecr8(v7);
    }
  }
  while ( a1 );
  return result;
}
