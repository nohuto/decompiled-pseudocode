/*
 * XREFs of KiInSwapProcesses @ 0x1402EED88
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B4200 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402956D0 (KeMakeKernelDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x1402964F8 (MiMarkPfnTradable.c)
 *     MiSetPageTablePfnBuddy @ 0x140296ED4 (MiSetPageTablePfnBuddy.c)
 *     MiReturnWsToExpansionList @ 0x1402A3628 (MiReturnWsToExpansionList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiReadyOutSwappedThreads @ 0x1402ECCB0 (KiReadyOutSwappedThreads.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052C5A8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x14052CC20 (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x1405A7AF0 (EtwTraceInswapProcess.c)
 */

char __fastcall KiInSwapProcesses(_QWORD *a1, _QWORD *a2, int a3, _DWORD *a4)
{
  __int64 v5; // rsi
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
  bool v20; // zf
  __int64 v21; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  _DWORD *v33; // r9
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v38; // [rsp+A0h] [rbp+48h]
  char v39; // [rsp+A8h] [rbp+50h] BYREF
  __int64 OutswappedPageResident; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+60h]

  do
  {
    v5 = (__int64)(a1 - 45);
    a1 = (_QWORD *)*a1;
    v38 = a1;
    _InterlockedXor((volatile signed __int32 *)(v5 + 840), 6u);
    OutswappedPageResident = 0LL;
    v6 = *(_DWORD *)(v5 + 1124);
    v39 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_2;
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               v5,
                               (_DWORD)a2,
                               a3,
                               (_DWORD)a4,
                               *(unsigned __int16 *)(v5 + 836));
    v11 = OutswappedPageResident;
    v12 = OutswappedPageResident;
    if ( (unsigned int)MiPteInShadowRange(&OutswappedPageResident)
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
    v41 = MiMapPageInHyperSpaceWorker(v15, &v39, 0x80000000LL);
    v16 = 0;
    v17 = v12;
    v18 = (unsigned __int64 *)(v41 + 3944);
    if ( (unsigned int)MiPteInShadowRange(v41 + 3944) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v20 = (v12 & 1) == 0;
          goto LABEL_33;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (v12 & 1) == 0;
LABEL_33:
        if ( !v20 )
          v17 = v12 | 0x8000000000000000uLL;
      }
    }
    *v18 = v17;
    if ( v16 )
      MiWritePteShadow((__int64)v18, v17);
    LOBYTE(v19) = v39;
    MiUnmapPageInHyperSpaceWorker(v41, v19, 0x80000000LL);
    v21 = 48 * v15 - 0x58000000000LL;
    v22 = (unsigned __int8)MiLockPageInline(v21);
    v23 = v15 | *(_QWORD *)(v21 + 40) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v21 + 24) ^= ((*(_QWORD *)(v21 + 24) + 1LL) ^ *(_QWORD *)(v21 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v21 + 40) = v23;
    MiSetPageTablePfnBuddy(v21, v5, 1);
    *(_QWORD *)(v21 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v21 & 1) == 0 )
      MiMarkPfnTradable(48 * v15 - 0x58000000000LL, 1);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
          v20 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v22);
    *(_QWORD *)(v5 + 1800) = 1LL;
    *(_QWORD *)(v5 + 1808) = 1LL;
    *(_QWORD *)(v5 + 40) = KeMakeKernelDirectoryTableBase(v15 << 12);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( (*(_DWORD *)(v5 + 1124) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v5 + 1124), 0xFF7FFFFF);
      MiUpdateSystemPdes(v5);
    }
    MiReturnWsToExpansionList(v5 + 1664, 0);
    _InterlockedAnd((volatile signed __int32 *)(v5 + 1124), 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
    a1 = v38;
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)(v5 + 1124), 0xFFFFFFBF);
    if ( (*(_BYTE *)(v5 + 1851) & 0x60) == 0x40 )
      MiReAcquireOutSwappedProcessCommit((PVOID)v5);
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
    {
      v33 = KeGetCurrentPrcb()->SchedulerAssist;
      v33[5] |= (-1 << (v7 + 1)) & 4;
    }
    KiAcquireKobjectLockSafe(v5);
    v8 = (_QWORD *)(v5 + 344);
    v9 = *(_QWORD **)(v5 + 344);
    if ( v9 == (_QWORD *)(v5 + 344) )
    {
      v9 = 0LL;
    }
    else
    {
      a2 = *(_QWORD **)(v5 + 352);
      if ( (_QWORD *)v9[1] != v8 || (_QWORD *)*a2 != v8 )
        __fastfail(3u);
      *a2 = v9;
      v9[1] = a2;
      *(_QWORD *)(v5 + 352) = v5 + 344;
      *v8 = v8;
    }
    _InterlockedXor((volatile signed __int32 *)(v5 + 840), 4u);
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
          v34 = KeGetCurrentIrql();
          if ( v34 <= 0xFu && v7 <= 0xFu && v34 >= 2u )
          {
            v35 = KeGetCurrentPrcb();
            a2 = (_QWORD *)(-1LL << (v7 + 1));
            a4 = v35->SchedulerAssist;
            v36 = ~(unsigned __int16)a2;
            v20 = (v36 & a4[5]) == 0;
            a3 = v36 & a4[5];
            a4[5] = a3;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v35);
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
