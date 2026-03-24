/*
 * XREFs of MiLogPageAccess @ 0x14033A650
 * Callers:
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140309080 (MI_WSLE_LOG_ACCESS.c)
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x140339E00 (MiClearPteAccessed.c)
 *     MiResetAccessBitPte @ 0x14039B7F0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053BA80 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140206338 (ObFastReferenceObjectLocked.c)
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     MiAllocateAccessLog @ 0x140274CE0 (MiAllocateAccessLog.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  char v2; // r9
  PVOID ***v3; // r15
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
  PVOID **AccessLog; // rdi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  unsigned __int64 v28; // r12
  __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  bool v31; // cc
  __int64 v32; // rbx
  bool v33; // zf
  __int64 v34; // r13
  signed __int64 *v35; // r14
  ULONG_PTR v36; // r15
  volatile LONG *v37; // rbx
  KIRQL v38; // al
  _QWORD *v39; // rcx
  unsigned __int64 v40; // r13
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  signed __int64 v45; // rax
  signed __int64 v46; // rtt
  unsigned __int64 v47; // rax
  unsigned int v48; // edx
  unsigned __int64 v49; // rax
  PVOID *v50; // rax
  char *v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 Next; // rax
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  int v57; // eax
  unsigned int v58; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  void *retaddr; // [rsp+88h] [rbp+40h]
  unsigned __int64 v61; // [rsp+90h] [rbp+48h] BYREF
  int v62; // [rsp+98h] [rbp+50h]
  int v63; // [rsp+9Ch] [rbp+54h]
  unsigned __int64 v64; // [rsp+A0h] [rbp+58h]
  unsigned __int64 v65; // [rsp+A8h] [rbp+60h]

  v2 = *(_BYTE *)(a1 + 184);
  v3 = (PVOID ***)&unk_140C4F7A8;
  v63 = 3;
  v4 = v2 & 7;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v62 = 0;
  v5 = a2;
  if ( v4 != 2 )
    v3 = (PVOID ***)(a1 + 232);
  v7 = a2 & 1;
  v58 = v7;
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
  v61 = v8;
  if ( (unsigned __int64)&v61 >= v9
    && (unsigned __int64)&v61 <= v10
    && (unsigned int)MiPteHasShadow()
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v61 >> 3) & 0x1FF));
      v16 = v8 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v8;
      v8 = v16;
      if ( (v15 & 0x42) != 0 )
        v8 = v16 | 0x42;
    }
  }
  v17 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v18 = (unsigned __int64 *)&unk_140C4F7C0;
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
  AccessLog = *v3;
  if ( !*v3 || AccessLog[4] + 1 > AccessLog[5] )
  {
    AccessLog = MiAllocateAccessLog(a1);
    if ( !AccessLog )
      goto LABEL_81;
  }
  if ( !(unsigned int)MI_PFN_IS_PROTO(v17) || (v27 = *(_QWORD *)(v17 + 16), (v27 & 0x400) == 0) )
  {
    v53 = (v5 << 16) | ((unsigned __int64)v7 << 9);
    goto LABEL_71;
  }
  if ( qword_140C4DF40 && (v27 & 0x10) == 0 )
    v27 &= ~qword_140C4DF40;
  v28 = (unsigned __int64)AccessLog[6];
  v29 = v27 >> 16;
  v30 = (*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) << 16;
  v31 = (unsigned __int64)AccessLog[7] <= 1;
  v65 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
  if ( v31 )
  {
    v33 = (*(_BYTE *)(v29 + 34) & 2) == 0;
    v34 = *(_QWORD *)v29;
    v64 = *(_QWORD *)v29;
    if ( v33 || (*(_DWORD *)(v34 + 56) & 0x4000000) == 0 )
    {
      v35 = (signed __int64 *)(v34 + 64);
      v36 = ObFastReferenceObject((signed __int64 *)(v34 + 64));
      if ( !v36 )
      {
        v37 = (volatile LONG *)(v34 + 72);
        v38 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v34 + 72));
        v39 = (_QWORD *)(v34 + 64);
        v40 = v38;
        v36 = ObFastReferenceObjectLocked(v39);
        ExReleaseSpinLockSharedFromDpcLevel(v37);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v40 <= 0xFu && CurrentIrql >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = v42->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
              v33 = (v44 & v43[5]) == 0;
              v43[5] &= v44;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(v42);
            }
          }
        }
        __writecr8(v40);
        v34 = v64;
      }
      v32 = *(_QWORD *)(v36 + 24);
      _m_prefetchw(v35);
      v45 = *v35;
      if ( (v36 ^ *v35) >= 0xF )
      {
LABEL_61:
        ObDereferenceObjectDeferDelete((PVOID)v36);
      }
      else
      {
        while ( 1 )
        {
          v46 = v45;
          v45 = _InterlockedCompareExchange64(v35, v45 + 1, v45);
          if ( v46 == v45 )
            break;
          if ( (v36 ^ v45) >= 0xF )
            goto LABEL_61;
        }
      }
      v47 = MiStartingOffset((__int64 *)v29, v65, 0xFFFFFFFF);
      v48 = *(_DWORD *)(v34 + 56);
      v7 = v58;
      v49 = v47 << *((_BYTE *)&v62 + 4 * (((unsigned __int64)v48 >> 5) & 1));
      v64 = v49 ^ ((unsigned __int16)v49 ^ (unsigned __int16)(32 * v48)) & 0x400;
      v28 -= 8LL;
      v30 = v64;
      goto LABEL_63;
    }
LABEL_81:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return;
  }
  v32 = v29;
LABEL_63:
  v50 = AccessLog[5];
  v51 = (char *)(v50 + 1);
  if ( (unsigned __int64)(v50 + 1) > v28 )
    goto LABEL_68;
  while ( *(_QWORD *)v51 != v32 )
  {
    v51 += 8;
    if ( (unsigned __int64)v51 > v28 )
      goto LABEL_68;
  }
  if ( (unsigned __int64)v51 > v28 )
  {
LABEL_68:
    v51 = (char *)AccessLog[5];
    AccessLog[5] = v50 - 1;
    *(_QWORD *)v51 = v32;
  }
  v52 = (char *)AccessLog[6] - v51;
  v24 = (unsigned __int64)v7 << 9;
  v53 = v30 & 0xFFFFFFFFFFFFFC00uLL | v24 | (v52 >> 3) & 0x1FF;
LABEL_71:
  *AccessLog[4]++ = (PVOID)v53;
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
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle, v24, v25, v26);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_77;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_77:
  v55 = KeGetCurrentPrcb();
  v56 = v55->SchedulerAssist;
  if ( v56 && v55->NestingLevel <= 1u )
  {
    v57 = v56[6] - 1;
    v56[6] = v57;
    if ( !v57 )
      KiRemoveSystemWorkPriorityKick(v55);
  }
}
