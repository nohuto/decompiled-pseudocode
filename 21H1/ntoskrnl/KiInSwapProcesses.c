/*
 * XREFs of KiInSwapProcesses @ 0x1402445C8
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B1FF0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x140244A20 (KiReadyOutSwappedThreads.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiReturnWsToExpansionList @ 0x1402C2288 (MiReturnWsToExpansionList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x140328594 (KeMakeKernelDirectoryTableBase.c)
 *     MiSetPageTablePfnBuddy @ 0x1403292B4 (MiSetPageTablePfnBuddy.c)
 *     MiMarkPfnTradable @ 0x14032A278 (MiMarkPfnTradable.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526848 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x140526EC0 (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x1405A1D00 (EtwTraceInswapProcess.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v5; // rsi
  int v6; // eax
  unsigned __int8 v7; // bl
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r9
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // r12d
  unsigned __int64 v19; // rbx
  unsigned __int64 *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  int v40; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v42; // [rsp+A0h] [rbp+48h]
  char v43; // [rsp+A8h] [rbp+50h] BYREF
  __int64 OutswappedPageResident; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp+60h]

  do
  {
    v5 = a1 - 45;
    a1 = (_QWORD *)*a1;
    v42 = a1;
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 6u);
    OutswappedPageResident = 0LL;
    v6 = *((_DWORD *)v5 + 281);
    v43 = 0;
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
    if ( (unsigned int)MiPteInShadowRange(&OutswappedPageResident, v13)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v11 & 1) != 0
      && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v16 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&OutswappedPageResident >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v11 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
      else
      {
        v11 = OutswappedPageResident;
      }
    }
    v17 = (v11 >> 12) & 0xFFFFFFFFFLL;
    v45 = MiMapPageInHyperSpaceWorker(v17, &v43, 0x80000000LL, v14);
    v18 = 0;
    v19 = v12;
    v20 = (unsigned __int64 *)(v45 + 3944);
    if ( (unsigned int)MiPteInShadowRange(v45 + 3944, v21) )
    {
      if ( (unsigned int)MiPteHasShadow(v23, v22) )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v24 = (v12 & 1) == 0;
          goto LABEL_33;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v24 = (v12 & 1) == 0;
LABEL_33:
        if ( !v24 )
          v19 = v12 | 0x8000000000000000uLL;
      }
    }
    *v20 = v19;
    if ( v18 )
      MiWritePteShadow(v20, v19);
    LOBYTE(v22) = v43;
    MiUnmapPageInHyperSpaceWorker(v45, v22, 0x80000000LL);
    v25 = 48 * v17 - 0x58000000000LL;
    v28 = (unsigned __int8)MiLockPageInline(v25, v26, v27);
    v29 = v17 | *(_QWORD *)(v25 + 40) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v25 + 24) ^= ((*(_QWORD *)(v25 + 24) + 1LL) ^ *(_QWORD *)(v25 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v25 + 40) = v29;
    MiSetPageTablePfnBuddy(v25, v5, 1LL);
    *(_QWORD *)(v25 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v25 & 1) == 0 )
      MiMarkPfnTradable(48 * v17 - 0x58000000000LL, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v28 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v24 = (v33 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v33;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v28);
    v5[225] = 1LL;
    v5[226] = 1LL;
    v5[5] = KeMakeKernelDirectoryTableBase(v17 << 12);
    KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
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
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && LockHandle.OldIrql <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          a4 = v36->SchedulerAssist;
          a2 = (_QWORD *)(-1LL << (LockHandle.OldIrql + 1));
          v37 = ~(unsigned __int16)a2;
          v24 = (v37 & a4[5]) == 0;
          a3 = (unsigned int)v37 & a4[5];
          a4[5] = a3;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
    a1 = v42;
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
    v9 = v5[43];
    if ( (_QWORD *)v9 == v5 + 43 )
    {
      v9 = 0LL;
    }
    else
    {
      a2 = (_QWORD *)v5[44];
      if ( *(_QWORD **)(v9 + 8) != v8 || (_QWORD *)*a2 != v8 )
        __fastfail(3u);
      *a2 = v9;
      *(_QWORD *)(v9 + 8) = a2;
      v5[44] = v5 + 43;
      *v8 = v8;
    }
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v9 )
    {
      LOBYTE(a2) = v7;
      result = KiReadyOutSwappedThreads(v9, a2);
    }
    else
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && v7 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            a2 = (_QWORD *)(-1LL << (v7 + 1));
            a4 = v39->SchedulerAssist;
            v40 = ~(unsigned __int16)a2;
            v24 = (v40 & a4[5]) == 0;
            a3 = (unsigned int)v40 & a4[5];
            a4[5] = a3;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v39);
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
