/*
 * XREFs of MiLogPageAccess @ 0x140245760
 * Callers:
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x140244F10 (MiClearPteAccessed.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140247160 (MI_WSLE_LOG_ACCESS.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiResetAccessBitPte @ 0x140398A60 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x1405365B0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiAllocateAccessLog @ 0x140247E40 (MiAllocateAccessLog.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
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
  _QWORD *AccessLog; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  bool v24; // cc
  __int64 v25; // rbx
  bool v26; // zf
  unsigned __int64 v27; // r13
  signed __int64 *v28; // r14
  __int64 v29; // r15
  volatile LONG *v30; // rbx
  KIRQL v31; // al
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r13
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  signed __int64 v38; // rax
  signed __int64 v39; // rtt
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 *v44; // rdx
  unsigned __int64 v45; // rax
  __int64 Next; // rax
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  int v49; // eax
  unsigned int v50; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+40h]
  unsigned __int64 v53; // [rsp+90h] [rbp+48h] BYREF
  int v54; // [rsp+98h] [rbp+50h]
  int v55; // [rsp+9Ch] [rbp+54h]
  unsigned __int64 v56; // [rsp+A0h] [rbp+58h]
  unsigned __int64 v57; // [rsp+A8h] [rbp+60h]

  v3 = *(unsigned __int8 *)(a1 + 184);
  v2 = &unk_140C4F5A8;
  v55 = 3;
  LOBYTE(v3) = v3 & 7;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v54 = 0;
  v4 = Flink;
  if ( (_BYTE)v3 != 2 )
    v2 = (_QWORD *)(a1 + 232);
  v6 = Flink & 1;
  v50 = v6;
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
  v53 = v7;
  if ( (unsigned __int64)&v53 >= v8
    && (unsigned __int64)&v53 <= v9
    && (unsigned int)MiPteHasShadow(&v53, Flink, v7, v3)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v11 )
    {
      v12 = *((_QWORD *)&v11->Flink + (((unsigned __int64)&v53 >> 3) & 0x1FF));
      v13 = v7 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v7;
      v7 = v13;
      if ( (v12 & 0x42) != 0 )
        v7 = v13 | 0x42;
    }
  }
  v14 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v15 = (unsigned __int64 *)&unk_140C4F5C0;
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
  else if ( _InterlockedExchange64((volatile __int64 *)v15, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  AccessLog = (_QWORD *)*v2;
  if ( !*v2 || (unsigned __int64)(AccessLog[4] + 8LL) > AccessLog[5] )
  {
    AccessLog = (_QWORD *)MiAllocateAccessLog(a1);
    if ( !AccessLog )
      goto LABEL_81;
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(v14) || (v20 = *(_QWORD *)(v14 + 16), (v20 & 0x400) == 0) )
  {
    v45 = (v4 << 16) | ((unsigned __int64)v6 << 9);
    goto LABEL_71;
  }
  if ( qword_140C4DD40 && (v20 & 0x10) == 0 )
    v20 &= ~qword_140C4DD40;
  v21 = AccessLog[6];
  v22 = v20 >> 16;
  v23 = (*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) << 16;
  v24 = AccessLog[7] <= 1uLL;
  v57 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
  if ( v24 )
  {
    v26 = (*(_BYTE *)(v22 + 34) & 2) == 0;
    v27 = *(_QWORD *)v22;
    v56 = *(_QWORD *)v22;
    if ( v26 || (*(_DWORD *)(v27 + 56) & 0x4000000) == 0 )
    {
      v28 = (signed __int64 *)(v27 + 64);
      v29 = ObFastReferenceObject(v27 + 64);
      if ( !v29 )
      {
        v30 = (volatile LONG *)(v27 + 72);
        v31 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v27 + 72));
        v32 = v27 + 64;
        v33 = v31;
        v29 = ObFastReferenceObjectLocked(v32);
        ExReleaseSpinLockSharedFromDpcLevel(v30);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v33 <= 0xFu && CurrentIrql >= 2u )
            {
              v35 = KeGetCurrentPrcb();
              v36 = v35->SchedulerAssist;
              v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
              v26 = (v37 & v36[5]) == 0;
              v36[5] &= v37;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v35);
            }
          }
        }
        __writecr8(v33);
        v27 = v56;
      }
      v25 = *(_QWORD *)(v29 + 24);
      _m_prefetchw(v28);
      v38 = *v28;
      if ( (v29 ^ (unsigned __int64)*v28) >= 0xF )
      {
LABEL_61:
        ObDereferenceObjectDeferDelete((PVOID)v29);
      }
      else
      {
        while ( 1 )
        {
          v39 = v38;
          v38 = _InterlockedCompareExchange64(v28, v38 + 1, v38);
          if ( v39 == v38 )
            break;
          if ( (v29 ^ (unsigned __int64)v38) >= 0xF )
            goto LABEL_61;
        }
      }
      v40 = MiStartingOffset(v22, v57, 0xFFFFFFFFLL);
      v41 = *(_DWORD *)(v27 + 56);
      v6 = v50;
      v42 = v40 << *((_BYTE *)&v54 + 4 * (((unsigned __int64)v41 >> 5) & 1));
      v56 = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)(32 * v41)) & 0x400;
      v21 -= 8LL;
      v23 = v56;
      goto LABEL_63;
    }
LABEL_81:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return;
  }
  v25 = v22;
LABEL_63:
  v43 = AccessLog[5];
  v44 = (__int64 *)(v43 + 8);
  if ( v43 + 8 > v21 )
    goto LABEL_68;
  while ( *v44 != v25 )
  {
    if ( (unsigned __int64)++v44 > v21 )
      goto LABEL_68;
  }
  if ( (unsigned __int64)v44 > v21 )
  {
LABEL_68:
    v44 = (__int64 *)AccessLog[5];
    AccessLog[5] = v43 - 8;
    *v44 = v25;
  }
  v45 = v23 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v6 << 9) | ((__int64)(AccessLog[6] - (_QWORD)v44) >> 3) & 0x1FF;
LABEL_71:
  *(_QWORD *)AccessLog[4] = v45;
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
      Next = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_77;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_77:
  v47 = KeGetCurrentPrcb();
  v48 = v47->SchedulerAssist;
  if ( v48 && v47->NestingLevel <= 1u )
  {
    v49 = v48[6] - 1;
    v48[6] = v49;
    if ( !v49 )
      KiRemoveSystemWorkPriorityKick(v47);
  }
}
