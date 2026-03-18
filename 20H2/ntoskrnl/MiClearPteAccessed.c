/*
 * XREFs of MiClearPteAccessed @ 0x1402BD2E0
 * Callers:
 *     MiAgePteWorker @ 0x1402BCE70 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x1403678C4 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x14039AF20 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140539F80 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSetVaAgeList @ 0x1402B0AC0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402CC62C (MiUnlockNestedPageTableWritePte.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCompressTbFlushList @ 0x140306530 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rsi
  unsigned __int64 v10; // r8
  unsigned int v12; // r13d
  int v13; // ebp
  int v14; // r15d
  unsigned __int64 Flink; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 Process; // rcx
  __int64 v18; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax
  bool v24; // zf
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rbp
  unsigned __int64 v35; // r15
  int v36; // r12d
  unsigned int v37; // r8d
  __int64 v38; // r10
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r8
  int v44; // eax
  int v45; // ebx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 *v51; // r8
  __int64 v52; // rdx
  unsigned __int64 v53; // r8
  struct _LIST_ENTRY *v54; // rax
  __int64 v55; // rax
  char v56; // r8^7
  int v57; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v60; // [rsp+90h] [rbp+18h]

  v60 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a3 << 25;
  v10 = 0xFFFFF68000000000uLL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  Process = *(unsigned __int8 *)(a1 + 184);
  Flink = 0xFFFFF6FFFFFFFFFFuLL;
  v16 = v7 >> 16;
  LOBYTE(Process) = Process & 7;
  if ( (_BYTE)Process && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  v18 = 0x7FFFFFFFF8LL;
  if ( !(_BYTE)Process )
    goto LABEL_12;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(a2)
    || *(_WORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v13 = 1;
  if ( !a4 )
    goto LABEL_19;
  if ( v16 >= v10 && v16 <= Flink )
  {
    Process = v10 + (v18 & (a3 >> 9));
    LOBYTE(v12) = Process == 0xFFFFF6FB7DBEDF68uLL;
  }
LABEL_12:
  if ( a4 && v16 >= v10 && v16 <= Flink )
  {
    v14 = 1;
    MiLockPageTableInternal(a1, a3, 0LL);
  }
  if ( !v13 )
    goto LABEL_38;
  if ( v12 )
    KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
LABEL_19:
  v57 = 0;
  v60 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v57);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  Process = 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(a2)
    || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(a2 + 32) > 1u )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v24 = (v23 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    if ( v14 )
      MiUnlockPageTableInternal(a1);
    return 0LL;
  }
LABEL_38:
  v26 = 0xFFFFF6FB7DBED000uLL;
  if ( !a4 )
  {
    v36 = a6;
    goto LABEL_86;
  }
  if ( v14 )
  {
    v27 = MI_READ_PTE_LOCK_FREE(a3);
    MiUnlockNestedPageTableWritePte(a1, a3, v27 & 0xCFFFFFFFFFFFFFDFuLL, v12, v57);
    goto LABEL_74;
  }
  v28 = *(_QWORD *)a3;
  v29 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v28, v29, Flink)
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    Flink = *(_QWORD *)(Process + 1928);
    if ( Flink )
    {
      v29 |= 0x20uLL;
      v30 = *(_QWORD *)(Flink + 8 * ((a3 >> 3) & 0x1FF));
      Process = (unsigned __int8)v30;
      LOBYTE(Process) = v30 & 0x20;
      if ( (v30 & 0x20) == 0 )
        v29 = v28;
      if ( (v30 & 0x42) != 0 )
        v29 |= 0x42uLL;
    }
  }
  if ( a3 >= v26
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v28, v29, Flink)
    && (v28 & 1) != 0
    && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
  {
    Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v31 = *(_QWORD *)(Flink + 8 * ((a3 >> 3) & 0x1FF));
      Flink = v28 | 0x20;
      if ( (v31 & 0x20) == 0 )
        Flink = v28;
      v28 = Flink;
      if ( (v31 & 0x42) != 0 )
        v28 = Flink | 0x42;
    }
  }
  v32 = v29 & 0xF0FFFFFFFFFFFFDFuLL;
  Process = 0x7000000000000000LL;
  v33 = (v32 | v28 & 0xF00000000000000LL) ^ ((v32 | v28 & 0xF00000000000000LL) ^ v28) & 0x7000000000000000LL;
  if ( a3 < v26 || a3 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_73:
    *(_QWORD *)a3 = v33;
    goto LABEL_74;
  }
  if ( !(unsigned int)MiPteHasShadow(0x7000000000000000LL, v33, v32, Flink) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v33 & 1) != 0 )
      v33 |= 0x8000000000000000uLL;
    goto LABEL_73;
  }
  if ( !HIBYTE(word_140C4DE88) && (v33 & 1) != 0 )
    v33 |= 0x8000000000000000uLL;
  *(_QWORD *)a3 = v33;
  MiWritePteShadow(a3, v33);
LABEL_74:
  v34 = 1LL;
  v35 = v16;
  v36 = 1;
  if ( *(_DWORD *)a4 != 1 )
  {
    Process = *(unsigned __int8 *)(a4 + 4);
    if ( (Process & 8) == 0 && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      LOBYTE(Process) = Process | 8;
      *(_BYTE *)(a4 + 4) = Process;
    }
  }
  v37 = *(_DWORD *)(a4 + 12);
  if ( !v37 )
    goto LABEL_106;
  if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
  {
    v38 = a4 + 8LL * (v37 - 1);
    v39 = *(_QWORD *)(v38 + 24);
    if ( (v39 & 0xC00) == 0 )
    {
      Flink = *(_QWORD *)(v38 + 24) & 0x3FFLL;
      Process = v39 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v39 & 0xFFFFFFFFFFFFF000uLL) + ((Flink + 1) << 12) == v16 )
      {
        Process = Flink + 1;
        if ( Flink + 1 >= Flink && Process <= 0x3FF )
        {
          Process = ((unsigned __int16)v39 ^ (unsigned __int16)(v39 + 1)) & 0x3FF;
          ++*(_QWORD *)(a4 + 16);
          *(_QWORD *)(v38 + 24) = Process ^ v39;
          goto LABEL_86;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a4 + 4) & 4) != 0
    || (Flink = a4 + 8LL * (v37 - 1), v46 = *(_QWORD *)(Flink + 24), (v46 & 0xC00) != 0)
    || (Process = v16 + 4096, (v46 & 0xFFFFFFFFFFFFF000uLL) != v16 + 4096)
    || (Process = *(_QWORD *)(Flink + 24) & 0x3FFLL, Process + 1 < Process)
    || Process + 1 > 0x3FF )
  {
LABEL_106:
    if ( v37 < *(_DWORD *)(a4 + 8) )
    {
      while ( 1 )
      {
        v48 = 1024LL;
        if ( (unsigned __int64)(v34 - 1) <= 0x3FF )
          v48 = v34;
        v34 -= v48;
        v49 = v35 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v48 - 1) & 0x3FF;
        v35 += v48 << 12;
        *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v49;
        Process = *(unsigned int *)(a4 + 12);
        *(_QWORD *)(a4 + 16) += v48;
        if ( (_DWORD)Process == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
        {
          qsort((void *)(a4 + 24), (unsigned int)Process, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(a4);
          v50 = *(unsigned int *)(a4 + 12);
          if ( (_DWORD)v50 == *(_DWORD *)(a4 + 8) )
            break;
        }
        if ( !v34 )
          goto LABEL_86;
      }
      if ( v34 )
      {
        *(_BYTE *)(a4 + 5) = 1;
        *(_QWORD *)(a4 + 16) = v50;
      }
    }
    else
    {
      *(_BYTE *)(a4 + 5) = 1;
    }
    goto LABEL_86;
  }
  v47 = v46 - 4096;
  Process = ((unsigned __int16)v47 ^ (unsigned __int16)(v47 + 1)) & 0x3FF;
  ++*(_QWORD *)(a4 + 16);
  *(_QWORD *)(Flink + 24) = Process ^ v47;
LABEL_86:
  if ( v60 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v40 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v41 = KeGetCurrentIrql();
          if ( v41 <= 0xFu && LockHandle.OldIrql <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            Process = (unsigned int)LockHandle.OldIrql + 1;
            Flink = -1LL << (LockHandle.OldIrql + 1);
            v44 = ~(unsigned __int16)Flink;
            v24 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
      }
      __writecr8(v40);
    }
  }
  if ( v36 )
  {
    if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v51 = (__int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v52 = *v51;
      if ( (unsigned __int64)v51 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v51 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v52, v51, Flink)
        && (v52 & 1) != 0
        && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
      {
        v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v54 )
        {
          v55 = *((_QWORD *)&v54->Flink + ((v53 >> 3) & 0x1FF));
          v56 = HIBYTE(v52);
          if ( (v55 & 0x20) == 0 )
            v56 = HIBYTE(v52);
          HIBYTE(v52) = v56;
          if ( (v55 & 0x42) != 0 )
            HIBYTE(v52) = v56;
        }
      }
      v45 = HIBYTE(v52) & 0xF;
    }
    else
    {
      v45 = (*(_DWORD *)(48
                       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL) >> 1) & 7;
    }
    if ( a5 && v45 != 7 )
      MiLogPageAccess(a1, a3);
    if ( !v45 )
      MiSetVaAgeList(a1, v16, 1u, 1u);
  }
  return 1LL;
}
