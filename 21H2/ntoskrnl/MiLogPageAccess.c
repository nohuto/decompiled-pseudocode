/*
 * XREFs of MiLogPageAccess @ 0x1403453A0
 * Callers:
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x140344B50 (MiClearPteAccessed.c)
 *     MiResetAccessBitPte @ 0x14039B940 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053BCC0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiAllocateAccessLog @ 0x140262C80 (MiAllocateAccessLog.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  char v2; // r9
  _QWORD *v3; // r15
  char v4; // r9
  unsigned __int64 v5; // rbx
  unsigned int v7; // r13d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned __int64 *v18; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v21; // eax
  _QWORD *v22; // rdx
  _QWORD *AccessLog; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // r12
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  bool v28; // cc
  __int64 v29; // rbx
  bool v30; // zf
  __int64 v31; // r13
  signed __int64 *v32; // r14
  ULONG_PTR v33; // r15
  volatile LONG *v34; // rbx
  KIRQL v35; // al
  _QWORD *v36; // rcx
  unsigned __int64 v37; // r13
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  signed __int64 v42; // rax
  signed __int64 v43; // rtt
  unsigned __int64 v44; // rax
  unsigned int v45; // edx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rdx
  unsigned __int64 v49; // rax
  __int64 Next; // rax
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  int v53; // eax
  unsigned int v54; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  void *retaddr; // [rsp+88h] [rbp+40h]
  unsigned __int64 v57; // [rsp+90h] [rbp+48h] BYREF
  int v58; // [rsp+98h] [rbp+50h]
  int v59; // [rsp+9Ch] [rbp+54h]
  unsigned __int64 v60; // [rsp+A0h] [rbp+58h]
  unsigned __int64 v61; // [rsp+A8h] [rbp+60h]

  v2 = *(_BYTE *)(a1 + 184);
  v3 = &unk_140C4F7E8;
  v59 = 3;
  v4 = v2 & 7;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v58 = 0;
  v5 = a2;
  if ( v4 != 2 )
    v3 = (_QWORD *)(a1 + 232);
  v7 = a2 & 1;
  v54 = v7;
  if ( (a2 & 1) != 0 )
    v5 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = *(_QWORD *)v5;
  v9 = 0xFFFFF6FB7DBED000uLL;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
      v13 = v8 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v8;
      v8 = v13;
      if ( (v12 & 0x42) != 0 )
        v8 = v13 | 0x42;
    }
  }
  v57 = v8;
  if ( (unsigned __int64)&v57 >= v9
    && (unsigned __int64)&v57 <= v10
    && (unsigned int)MiPteHasShadow()
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v57 >> 3) & 0x1FF));
      v16 = v8 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v8;
      v8 = v16;
      if ( (v15 & 0x42) != 0 )
        v8 = v16 | 0x42;
    }
  }
  v17 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v18 = (unsigned __int64 *)&unk_140C4F800;
  if ( v4 != 2 )
    v18 = (unsigned __int64 *)(a1 + 256);
  LockHandle.LockQueue.Lock = v18;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v21 = SchedulerAssist[6];
      SchedulerAssist[6] = v21 + 1;
      if ( v21 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v18);
  }
  else
  {
    v22 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v18, (__int64)&LockHandle);
    if ( v22 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v22);
  }
  AccessLog = (_QWORD *)*v3;
  if ( !*v3 || (unsigned __int64)(AccessLog[4] + 8LL) > AccessLog[5] )
  {
    AccessLog = MiAllocateAccessLog(a1);
    if ( !AccessLog )
      goto LABEL_81;
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(v17) || (v24 = *(_QWORD *)(v17 + 16), (v24 & 0x400) == 0) )
  {
    v49 = (v5 << 16) | ((unsigned __int64)v7 << 9);
    goto LABEL_71;
  }
  if ( qword_140C4DF80 && (v24 & 0x10) == 0 )
    v24 &= ~qword_140C4DF80;
  v25 = AccessLog[6];
  v26 = v24 >> 16;
  v27 = (*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) << 16;
  v28 = AccessLog[7] <= 1uLL;
  v61 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
  if ( v28 )
  {
    v30 = (*(_BYTE *)(v26 + 34) & 2) == 0;
    v31 = *(_QWORD *)v26;
    v60 = *(_QWORD *)v26;
    if ( v30 || (*(_DWORD *)(v31 + 56) & 0x4000000) == 0 )
    {
      v32 = (signed __int64 *)(v31 + 64);
      v33 = ObFastReferenceObject((signed __int64 *)(v31 + 64));
      if ( !v33 )
      {
        v34 = (volatile LONG *)(v31 + 72);
        v35 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v31 + 72));
        v36 = (_QWORD *)(v31 + 64);
        v37 = v35;
        v33 = ObFastReferenceObjectLocked(v36);
        ExReleaseSpinLockSharedFromDpcLevel(v34);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v37 <= 0xFu && CurrentIrql >= 2u )
            {
              v39 = KeGetCurrentPrcb();
              v40 = v39->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v37 + 1));
              v30 = (v41 & v40[5]) == 0;
              v40[5] &= v41;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(v39);
            }
          }
        }
        __writecr8(v37);
        v31 = v60;
      }
      v29 = *(_QWORD *)(v33 + 24);
      _m_prefetchw(v32);
      v42 = *v32;
      if ( (v33 ^ *v32) >= 0xF )
      {
LABEL_61:
        ObDereferenceObjectDeferDelete((PVOID)v33);
      }
      else
      {
        while ( 1 )
        {
          v43 = v42;
          v42 = _InterlockedCompareExchange64(v32, v42 + 1, v42);
          if ( v43 == v42 )
            break;
          if ( (v33 ^ v42) >= 0xF )
            goto LABEL_61;
        }
      }
      v44 = MiStartingOffset((__int64 *)v26, v61, 0xFFFFFFFF);
      v45 = *(_DWORD *)(v31 + 56);
      v7 = v54;
      v46 = v44 << *((_BYTE *)&v58 + 4 * (((unsigned __int64)v45 >> 5) & 1));
      v60 = v46 ^ ((unsigned __int16)v46 ^ (unsigned __int16)(32 * v45)) & 0x400;
      v25 -= 8LL;
      v27 = v60;
      goto LABEL_63;
    }
LABEL_81:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return;
  }
  v29 = v26;
LABEL_63:
  v47 = AccessLog[5];
  v48 = (__int64 *)(v47 + 8);
  if ( v47 + 8 > v25 )
    goto LABEL_68;
  while ( *v48 != v29 )
  {
    if ( (unsigned __int64)++v48 > v25 )
      goto LABEL_68;
  }
  if ( (unsigned __int64)v48 > v25 )
  {
LABEL_68:
    v48 = (__int64 *)AccessLog[5];
    AccessLog[5] = v47 - 8;
    *v48 = v29;
  }
  v49 = v27 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v7 << 9) | ((__int64)(AccessLog[6] - (_QWORD)v48) >> 3) & 0x1FF;
LABEL_71:
  *(_QWORD *)AccessLog[4] = v49;
  AccessLog[4] += 8LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_77;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_77;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_77:
  v51 = KeGetCurrentPrcb();
  v52 = v51->SchedulerAssist;
  if ( v52 && v51->NestingLevel <= 1u )
  {
    v53 = v52[6] - 1;
    v52[6] = v53;
    if ( !v53 )
      KiRemoveSystemWorkPriorityKick(v51);
  }
}
