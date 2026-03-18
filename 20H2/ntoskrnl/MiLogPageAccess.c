/*
 * XREFs of MiLogPageAccess @ 0x1402BDB30
 * Callers:
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x1402BD2E0 (MiClearPteAccessed.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402CFBA0 (MI_WSLE_LOG_ACCESS.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     MiResetAccessBitPte @ 0x14039AF20 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140539F80 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAllocateAccessLog @ 0x14022D1E0 (MiAllocateAccessLog.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiLogPageAccess(__int64 a1, __int64 Flink)
{
  _QWORD *v2; // r15
  __int64 v3; // r9
  unsigned __int64 v4; // rbx
  unsigned int v6; // r13d
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  struct _LIST_ENTRY *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int64 *v15; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v18; // eax
  _QWORD *v19; // rdx
  _QWORD *AccessLog; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // r12
  __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  bool v25; // cc
  __int64 v26; // rbx
  bool v27; // zf
  __int64 v28; // r13
  signed __int64 *v29; // r14
  ULONG_PTR v30; // r15
  volatile LONG *v31; // rbx
  KIRQL v32; // al
  _QWORD *v33; // rcx
  unsigned __int64 v34; // r13
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  unsigned __int64 v41; // rax
  unsigned int v42; // edx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rdx
  unsigned __int64 v46; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  int v50; // eax
  unsigned int v51; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  void *retaddr; // [rsp+88h] [rbp+40h]
  unsigned __int64 v54; // [rsp+90h] [rbp+48h] BYREF
  int v55; // [rsp+98h] [rbp+50h]
  int v56; // [rsp+9Ch] [rbp+54h]
  unsigned __int64 v57; // [rsp+A0h] [rbp+58h]
  unsigned __int64 v58; // [rsp+A8h] [rbp+60h]

  v3 = *(unsigned __int8 *)(a1 + 184);
  v2 = &unk_140C4F628;
  v56 = 3;
  LOBYTE(v3) = v3 & 7;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v55 = 0;
  v4 = Flink;
  if ( (_BYTE)v3 != 2 )
    v2 = (_QWORD *)(a1 + 232);
  v6 = Flink & 1;
  v51 = v6;
  if ( (Flink & 1) != 0 )
    v4 = Flink & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = *(_QWORD *)v4;
  v8 = 0xFFFFF6FB7DBED000uLL;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL
    && v4 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, Flink, v7, v3)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *(_QWORD *)(Flink + 8 * ((v4 >> 3) & 0x1FF));
      Flink = v7 | 0x20;
      if ( (v10 & 0x20) == 0 )
        Flink = v7;
      v7 = Flink;
      if ( (v10 & 0x42) != 0 )
        v7 = Flink | 0x42;
    }
  }
  v54 = v7;
  if ( (unsigned __int64)&v54 >= v8
    && (unsigned __int64)&v54 <= v9
    && (unsigned int)MiPteHasShadow(&v54, Flink, v7, v3)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v11 )
    {
      v12 = *((_QWORD *)&v11->Flink + (((unsigned __int64)&v54 >> 3) & 0x1FF));
      v13 = v7 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v7;
      v7 = v13;
      if ( (v12 & 0x42) != 0 )
        v7 = v13 | 0x42;
    }
  }
  v14 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v15 = (unsigned __int64 *)&unk_140C4F640;
  if ( (_BYTE)v3 != 2 )
    v15 = (unsigned __int64 *)(a1 + 256);
  LockHandle.LockQueue.Lock = v15;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v18 = SchedulerAssist[6];
      SchedulerAssist[6] = v18 + 1;
      if ( v18 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v15);
  }
  else
  {
    v19 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v15, (__int64)&LockHandle);
    if ( v19 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v19);
  }
  AccessLog = (_QWORD *)*v2;
  if ( !*v2 || (unsigned __int64)(AccessLog[4] + 8LL) > AccessLog[5] )
  {
    AccessLog = MiAllocateAccessLog(a1);
    if ( !AccessLog )
      goto LABEL_81;
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(v14) || (v21 = *(_QWORD *)(v14 + 16), (v21 & 0x400) == 0) )
  {
    v46 = (v4 << 16) | ((unsigned __int64)v6 << 9);
    goto LABEL_71;
  }
  if ( qword_140C4DDC0 && (v21 & 0x10) == 0 )
    v21 &= ~qword_140C4DDC0;
  v22 = AccessLog[6];
  v23 = v21 >> 16;
  v24 = (*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) << 16;
  v25 = AccessLog[7] <= 1uLL;
  v58 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
  if ( v25 )
  {
    v27 = (*(_BYTE *)(v23 + 34) & 2) == 0;
    v28 = *(_QWORD *)v23;
    v57 = *(_QWORD *)v23;
    if ( v27 || (*(_DWORD *)(v28 + 56) & 0x4000000) == 0 )
    {
      v29 = (signed __int64 *)(v28 + 64);
      v30 = ObFastReferenceObject((signed __int64 *)(v28 + 64));
      if ( !v30 )
      {
        v31 = (volatile LONG *)(v28 + 72);
        v32 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v28 + 72));
        v33 = (_QWORD *)(v28 + 64);
        v34 = v32;
        v30 = ObFastReferenceObjectLocked(v33);
        ExReleaseSpinLockSharedFromDpcLevel(v31);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v34 <= 0xFu && CurrentIrql >= 2u )
            {
              v36 = KeGetCurrentPrcb();
              v37 = v36->SchedulerAssist;
              v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
              v27 = (v38 & v37[5]) == 0;
              v37[5] &= v38;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
          }
        }
        __writecr8(v34);
        v28 = v57;
      }
      v26 = *(_QWORD *)(v30 + 24);
      _m_prefetchw(v29);
      v39 = *v29;
      if ( (v30 ^ *v29) >= 0xF )
      {
LABEL_61:
        ObDereferenceObjectDeferDelete((PVOID)v30);
      }
      else
      {
        while ( 1 )
        {
          v40 = v39;
          v39 = _InterlockedCompareExchange64(v29, v39 + 1, v39);
          if ( v40 == v39 )
            break;
          if ( (v30 ^ v39) >= 0xF )
            goto LABEL_61;
        }
      }
      v41 = MiStartingOffset((__int64 *)v23, v58, 0xFFFFFFFF);
      v42 = *(_DWORD *)(v28 + 56);
      v6 = v51;
      v43 = v41 << *((_BYTE *)&v55 + 4 * (((unsigned __int64)v42 >> 5) & 1));
      v57 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)(32 * v42)) & 0x400;
      v22 -= 8LL;
      v24 = v57;
      goto LABEL_63;
    }
LABEL_81:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return;
  }
  v26 = v23;
LABEL_63:
  v44 = AccessLog[5];
  v45 = (__int64 *)(v44 + 8);
  if ( v44 + 8 > v22 )
    goto LABEL_68;
  while ( *v45 != v26 )
  {
    if ( (unsigned __int64)++v45 > v22 )
      goto LABEL_68;
  }
  if ( (unsigned __int64)v45 > v22 )
  {
LABEL_68:
    v45 = (__int64 *)AccessLog[5];
    AccessLog[5] = v44 - 8;
    *v45 = v26;
  }
  v46 = v24 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v6 << 9) | ((__int64)(AccessLog[6] - (_QWORD)v45) >> 3) & 0x1FF;
LABEL_71:
  *(_QWORD *)AccessLog[4] = v46;
  AccessLog[4] += 8LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_77;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_77;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_77:
  v48 = KeGetCurrentPrcb();
  v49 = v48->SchedulerAssist;
  if ( v49 && v48->NestingLevel <= 1u )
  {
    v50 = v49[6] - 1;
    v49[6] = v50;
    if ( !v50 )
      KiRemoveSystemWorkPriorityKick(v48);
  }
}
