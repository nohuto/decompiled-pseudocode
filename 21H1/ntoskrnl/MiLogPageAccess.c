/*
 * XREFs of MiLogPageAccess @ 0x14029E790
 * Callers:
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14029DF40 (MiClearPteAccessed.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402A0190 (MI_WSLE_LOG_ACCESS.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiResetAccessBitPte @ 0x1403982D0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140535F60 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     MiAllocateAccessLog @ 0x1402A0E70 (MiAllocateAccessLog.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiLogPageAccess(__int64 a1, __int64 Flink)
{
  char v2; // r9
  _QWORD *v3; // r15
  char v4; // r9
  unsigned __int64 v5; // rbx
  unsigned int v7; // r13d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  struct _LIST_ENTRY *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r14
  unsigned __int64 *v17; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v20; // eax
  _QWORD *v21; // rdx
  _QWORD *AccessLog; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned __int64 v25; // r12
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  bool v28; // cc
  __int64 v29; // rbx
  bool v30; // zf
  unsigned __int64 v31; // r13
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
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 Next; // rax
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  int v54; // eax
  unsigned int v55; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+40h]
  unsigned __int64 v58; // [rsp+90h] [rbp+48h] BYREF
  int v59; // [rsp+98h] [rbp+50h]
  int v60; // [rsp+9Ch] [rbp+54h]
  unsigned __int64 v61; // [rsp+A0h] [rbp+58h]
  unsigned __int64 v62; // [rsp+A8h] [rbp+60h]

  v2 = *(_BYTE *)(a1 + 184);
  v3 = &unk_140C4F6E8;
  v60 = 3;
  v4 = v2 & 7;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v59 = 0;
  v5 = Flink;
  if ( v4 != 2 )
    v3 = (_QWORD *)(a1 + 232);
  v7 = Flink & 1;
  v55 = v7;
  if ( (Flink & 1) != 0 )
    v5 = Flink & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = *(_QWORD *)v5;
  v9 = 0xFFFFF6FB7DBED000uLL;
  v10 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, Flink)
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
      Flink = v8 | 0x20;
      if ( (v11 & 0x20) == 0 )
        Flink = v8;
      v8 = Flink;
      if ( (v11 & 0x42) != 0 )
        v8 = Flink | 0x42;
    }
  }
  v58 = v8;
  if ( (unsigned __int64)&v58 >= v9
    && (unsigned __int64)&v58 <= v10
    && (unsigned int)MiPteHasShadow(&v58, Flink)
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v12 )
    {
      v13 = *((_QWORD *)&v12->Flink + (((unsigned __int64)&v58 >> 3) & 0x1FF));
      v14 = v8 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v14 = v8;
      v8 = v14;
      if ( (v13 & 0x42) != 0 )
        v8 = v14 | 0x42;
    }
  }
  v15 = (v8 >> 12) & 0xFFFFFFFFFLL;
  v16 = 48 * v15 - 0x58000000000LL;
  v17 = (unsigned __int64 *)&unk_140C4F700;
  if ( v4 != 2 )
    v17 = (unsigned __int64 *)(a1 + 256);
  LockHandle.LockQueue.Lock = v17;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v20 = SchedulerAssist[6];
      SchedulerAssist[6] = v20 + 1;
      if ( v20 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
  }
  else
  {
    v21 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v17, (__int64)&LockHandle);
    if ( v21 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v21);
  }
  AccessLog = (_QWORD *)*v3;
  if ( !*v3 || (unsigned __int64)(AccessLog[4] + 8LL) > AccessLog[5] )
  {
    AccessLog = (_QWORD *)MiAllocateAccessLog(a1);
    if ( !AccessLog )
      goto LABEL_81;
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(v16, v21, v15) || (v24 = *(_QWORD *)(v16 + 16), (v24 & 0x400) == 0) )
  {
    v50 = (v5 << 16) | ((unsigned __int64)v7 << 9);
    goto LABEL_71;
  }
  if ( qword_140C4DE80 && (v24 & 0x10) == 0 )
    v24 &= ~qword_140C4DE80;
  v25 = AccessLog[6];
  v26 = v24 >> 16;
  v27 = (*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL) << 16;
  v28 = AccessLog[7] <= 1uLL;
  v62 = *(_QWORD *)(v16 + 8) | 0x8000000000000000uLL;
  if ( v28 )
  {
    v30 = (*(_BYTE *)(v26 + 34) & 2) == 0;
    v31 = *(_QWORD *)v26;
    v61 = *(_QWORD *)v26;
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
        v31 = v61;
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
      v44 = MiStartingOffset(v26, v62, 0xFFFFFFFFLL);
      v45 = *(_DWORD *)(v31 + 56);
      v7 = v55;
      v46 = v44 << *((_BYTE *)&v59 + 4 * (((unsigned __int64)v45 >> 5) & 1));
      v61 = v46 ^ ((unsigned __int16)v46 ^ (unsigned __int16)(32 * v45)) & 0x400;
      v25 -= 8LL;
      v27 = v61;
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
  v49 = AccessLog[6] - (_QWORD)v48;
  v23 = (unsigned __int64)v7 << 9;
  v50 = v27 & 0xFFFFFFFFFFFFFC00uLL | v23 | (v49 >> 3) & 0x1FF;
LABEL_71:
  *(_QWORD *)AccessLog[4] = v50;
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
      Next = KxWaitForLockChainValid(&LockHandle, v23);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_77;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_77:
  v52 = KeGetCurrentPrcb();
  v53 = v52->SchedulerAssist;
  if ( v53 && v52->NestingLevel <= 1u )
  {
    v54 = v53[6] - 1;
    v53[6] = v54;
    if ( !v54 )
      KiRemoveSystemWorkPriorityKick(v52);
  }
}
