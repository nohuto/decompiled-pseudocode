/*
 * XREFs of MiClearPteAccessed @ 0x14029DF40
 * Callers:
 *     MiAgePteWorker @ 0x14029DAD0 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x140364F24 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x1403982D0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140535F60 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetVaAgeList @ 0x140290D70 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402F2CE8 (MiUnlockNestedPageTableWritePte.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x1402F66E0 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rsi
  unsigned __int64 v10; // r8
  unsigned int v12; // r13d
  int v13; // ebp
  int v14; // r15d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 Process; // rcx
  __int64 v18; // rdx
  __int64 v19; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  struct _LIST_ENTRY *Flink; // r9
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // rbp
  unsigned __int64 v38; // r15
  int v39; // r12d
  unsigned int v40; // r8d
  __int64 v41; // r10
  __int64 v42; // rax
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // rbx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r8
  int v48; // eax
  int v49; // ebx
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // r8
  __int64 v57; // rdx
  unsigned __int64 v58; // r8
  struct _LIST_ENTRY *v59; // rax
  __int64 v60; // rax
  char v61; // r8^7
  int v62; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v65; // [rsp+90h] [rbp+18h]

  v65 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a3 << 25;
  v10 = 0xFFFFF68000000000uLL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  Process = *(unsigned __int8 *)(a1 + 184);
  v15 = 0xFFFFF6FFFFFFFFFFuLL;
  v16 = v7 >> 16;
  LOBYTE(Process) = Process & 7;
  if ( (_BYTE)Process && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  v18 = 0x3FFFFFFFFFFFFFFFLL;
  v19 = 0x7FFFFFFFF8LL;
  if ( !(_BYTE)Process )
    goto LABEL_12;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1
    && !(unsigned int)MI_PFN_IS_PROTO(a2, 0x3FFFFFFFFFFFFFFFLL, 0xFFFFF68000000000uLL)
    || *(_WORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v13 = 1;
  if ( !a4 )
    goto LABEL_19;
  if ( v16 >= v10 && v16 <= v15 )
  {
    Process = v10 + (v19 & (a3 >> 9));
    LOBYTE(v12) = Process == 0xFFFFF6FB7DBEDF68uLL;
  }
LABEL_12:
  if ( a4 && v16 >= v10 && v16 <= v15 )
  {
    v14 = 1;
    MiLockPageTableInternal(a1, a3, 0LL);
  }
  if ( !v13 )
    goto LABEL_38;
  if ( v12 )
    KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
LABEL_19:
  v62 = 0;
  v65 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v62, v18, v10, v15);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  Process = 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(a2, v18, v10)
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
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    if ( v14 )
      MiUnlockPageTableInternal(a1, a3);
    return 0LL;
  }
LABEL_38:
  v27 = 0xFFFFF6FB7DBED000uLL;
  if ( !a4 )
  {
    v39 = a6;
    goto LABEL_86;
  }
  if ( v14 )
  {
    v28 = MI_READ_PTE_LOCK_FREE(a3);
    MiUnlockNestedPageTableWritePte(a1, a3, v28 & 0xCFFFFFFFFFFFFFDFuLL, v12, v62);
    goto LABEL_74;
  }
  v29 = *(_QWORD *)a3;
  v30 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v29)
    && (v30 & 1) != 0
    && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    v31 = *(_QWORD *)(Process + 1928);
    if ( v31 )
    {
      v30 |= 0x20uLL;
      v32 = *(_QWORD *)(v31 + 8 * ((a3 >> 3) & 0x1FF));
      Process = (unsigned __int8)v32;
      LOBYTE(Process) = v32 & 0x20;
      if ( (v32 & 0x20) == 0 )
        v30 = v29;
      if ( (v32 & 0x42) != 0 )
        v30 |= 0x42uLL;
    }
  }
  if ( a3 >= v27
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(Process, v29)
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v34 = *((_QWORD *)&Flink->Flink + ((a3 >> 3) & 0x1FF));
      v35 = v29 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v35 = v29;
      v29 = v35;
      if ( (v34 & 0x42) != 0 )
        v29 = v35 | 0x42;
    }
  }
  Process = 0x7000000000000000LL;
  v36 = (v30 & 0xF0FFFFFFFFFFFFDFuLL | v29 & 0xF00000000000000LL) ^ ((v30 & 0xF0FFFFFFFFFFFFDFuLL | v29 & 0xF00000000000000LL) ^ v29) & 0x7000000000000000LL;
  if ( a3 < v27 || a3 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_73:
    *(_QWORD *)a3 = v36;
    goto LABEL_74;
  }
  if ( !(unsigned int)MiPteHasShadow(0x7000000000000000LL, v36) )
  {
    Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    if ( (*(_DWORD *)(Process + 2172) & 0x1000) != 0 && (v36 & 1) != 0 )
      v36 |= 0x8000000000000000uLL;
    goto LABEL_73;
  }
  if ( !HIBYTE(word_140C4DF48) && (v36 & 1) != 0 )
    v36 |= 0x8000000000000000uLL;
  *(_QWORD *)a3 = v36;
  MiWritePteShadow(a3, v36);
LABEL_74:
  v37 = 1LL;
  v38 = v16;
  v39 = 1;
  if ( *(_DWORD *)a4 != 1 )
  {
    Process = *(unsigned __int8 *)(a4 + 4);
    if ( (Process & 8) == 0 && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      LOBYTE(Process) = Process | 8;
      *(_BYTE *)(a4 + 4) = Process;
    }
  }
  v40 = *(_DWORD *)(a4 + 12);
  if ( !v40 )
    goto LABEL_106;
  if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
  {
    v41 = a4 + 8LL * (v40 - 1);
    v42 = *(_QWORD *)(v41 + 24);
    if ( (v42 & 0xC00) == 0 )
    {
      v43 = *(_QWORD *)(v41 + 24) & 0x3FFLL;
      Process = v42 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v42 & 0xFFFFFFFFFFFFF000uLL) + ((v43 + 1) << 12) == v16 )
      {
        Process = v43 + 1;
        if ( v43 + 1 >= v43 && Process <= 0x3FF )
        {
          Process = ((unsigned __int16)v42 ^ (unsigned __int16)(v42 + 1)) & 0x3FF;
          ++*(_QWORD *)(a4 + 16);
          *(_QWORD *)(v41 + 24) = Process ^ v42;
          goto LABEL_86;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a4 + 4) & 4) != 0
    || (v50 = a4 + 8LL * (v40 - 1), v51 = *(_QWORD *)(v50 + 24), (v51 & 0xC00) != 0)
    || (Process = v16 + 4096, (v51 & 0xFFFFFFFFFFFFF000uLL) != v16 + 4096)
    || (Process = *(_QWORD *)(v50 + 24) & 0x3FFLL, Process + 1 < Process)
    || Process + 1 > 0x3FF )
  {
LABEL_106:
    if ( v40 < *(_DWORD *)(a4 + 8) )
    {
      while ( 1 )
      {
        v53 = 1024LL;
        if ( (unsigned __int64)(v37 - 1) <= 0x3FF )
          v53 = v37;
        v37 -= v53;
        v54 = v38 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v53 - 1) & 0x3FF;
        v38 += v53 << 12;
        *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v54;
        Process = *(unsigned int *)(a4 + 12);
        *(_QWORD *)(a4 + 16) += v53;
        if ( (_DWORD)Process == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
        {
          qsort((void *)(a4 + 24), (unsigned int)Process, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(a4);
          v55 = *(unsigned int *)(a4 + 12);
          if ( (_DWORD)v55 == *(_DWORD *)(a4 + 8) )
            break;
        }
        if ( !v37 )
          goto LABEL_86;
      }
      if ( v37 )
      {
        *(_BYTE *)(a4 + 5) = 1;
        *(_QWORD *)(a4 + 16) = v55;
      }
    }
    else
    {
      *(_BYTE *)(a4 + 5) = 1;
    }
    goto LABEL_86;
  }
  v52 = v51 - 4096;
  Process = ((unsigned __int16)v52 ^ (unsigned __int16)(v52 + 1)) & 0x3FF;
  ++*(_QWORD *)(a4 + 16);
  *(_QWORD *)(v50 + 24) = Process ^ v52;
LABEL_86:
  if ( v65 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v44 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v45 = KeGetCurrentIrql();
          if ( v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
          {
            v46 = KeGetCurrentPrcb();
            v47 = v46->SchedulerAssist;
            Process = (unsigned int)LockHandle.OldIrql + 1;
            v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v48 & v47[5]) == 0;
            v47[5] &= v48;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v46);
          }
        }
      }
      __writecr8(v44);
    }
  }
  if ( v39 )
  {
    if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v56 = (__int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v57 = *v56;
      if ( (unsigned __int64)v56 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v56 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(Process, v57)
        && (v57 & 1) != 0
        && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
      {
        v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v59 )
        {
          v60 = *((_QWORD *)&v59->Flink + ((v58 >> 3) & 0x1FF));
          v61 = HIBYTE(v57);
          if ( (v60 & 0x20) == 0 )
            v61 = HIBYTE(v57);
          HIBYTE(v57) = v61;
          if ( (v60 & 0x42) != 0 )
            HIBYTE(v57) = v61;
        }
      }
      v49 = HIBYTE(v57) & 0xF;
    }
    else
    {
      v49 = (*(_DWORD *)(48
                       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL) >> 1) & 7;
    }
    if ( a5 && v49 != 7 )
      MiLogPageAccess(a1, a3);
    if ( !v49 )
      MiSetVaAgeList(a1, v16, 1u, 1u);
  }
  return 1LL;
}
