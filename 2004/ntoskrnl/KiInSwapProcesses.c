/*
 * XREFs of KiInSwapProcesses @ 0x140280CC8
 * Callers:
 *     KeSwapProcessOrStack @ 0x1403B0300 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x140281200 (KiReadyOutSwappedThreads.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1402E2234 (KeMakeKernelDirectoryTableBase.c)
 *     MiSetPageTablePfnBuddy @ 0x1402E2F54 (MiSetPageTablePfnBuddy.c)
 *     MiMarkPfnTradable @ 0x1402E5148 (MiMarkPfnTradable.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiReturnWsToExpansionList @ 0x1402FDD68 (MiReturnWsToExpansionList.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x140527510 (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x1405A23F0 (EtwTraceInswapProcess.c)
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
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  int v37; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v39; // [rsp+A0h] [rbp+48h]
  unsigned __int8 v40; // [rsp+A8h] [rbp+50h] BYREF
  __int64 OutswappedPageResident; // [rsp+B0h] [rbp+58h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp+60h]

  do
  {
    v5 = a1 - 45;
    a1 = (_QWORD *)*a1;
    v39 = a1;
    _InterlockedXor((volatile signed __int32 *)v5 + 210, 6u);
    OutswappedPageResident = 0LL;
    v6 = *((_DWORD *)v5 + 281);
    v40 = 0;
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
    v42 = MiMapPageInHyperSpaceWorker(v15, &v40, 0x80000000LL);
    v16 = 0;
    v17 = v12;
    v18 = (unsigned __int64 *)(v42 + 3944);
    if ( MiPteInShadowRange(v42 + 3944) )
    {
      if ( (unsigned int)MiPteHasShadow(v20, v19, v21, v22) )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C4DE08) )
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
    MiUnmapPageInHyperSpaceWorker(v42, v40, 0x80000000);
    v24 = 48 * v15 - 0x58000000000LL;
    v25 = (unsigned __int8)MiLockPageInline(v24);
    v26 = v15 | *(_QWORD *)(v24 + 40) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v24 + 24) ^= ((*(_QWORD *)(v24 + 24) + 1LL) ^ *(_QWORD *)(v24 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v24 + 40) = v26;
    MiSetPageTablePfnBuddy(v24, v5, 1LL);
    *(_QWORD *)(v24 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v24 & 1) == 0 )
      MiMarkPfnTradable(48 * v15 - 0x58000000000LL, 1LL);
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
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
          v23 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v25);
    v5[225] = 1LL;
    v5[226] = 1LL;
    v5[5] = KeMakeKernelDirectoryTableBase(v15 << 12);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
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
        v32 = KeGetCurrentIrql();
        if ( v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          a4 = v33->SchedulerAssist;
          a2 = (_QWORD *)(-1LL << (LockHandle.OldIrql + 1));
          v34 = ~(unsigned __int16)a2;
          v23 = (v34 & a4[5]) == 0;
          a3 = (unsigned int)v34 & a4[5];
          a4[5] = a3;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
    a1 = v39;
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
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && v7 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            a2 = (_QWORD *)(-1LL << (v7 + 1));
            a4 = v36->SchedulerAssist;
            v37 = ~(unsigned __int16)a2;
            v23 = (v37 & a4[5]) == 0;
            a3 = (unsigned int)v37 & a4[5];
            a4[5] = a3;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick(v36);
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
