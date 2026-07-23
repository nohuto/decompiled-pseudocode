/*
 * XREFs of MiClearPteAccessed @ 0x140344B50
 * Callers:
 *     MiAgePteWorker @ 0x1403446E0 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x140367D24 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x14039B940 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053BCC0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCompressTbFlushList @ 0x140220720 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14031759C (MiUnlockNestedPageTableWritePte.c)
 *     MiSetVaAgeList @ 0x140338400 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiClearPteAccessed(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rsi
  unsigned __int64 v10; // r8
  int v12; // r13d
  int v13; // ebp
  int v14; // r15d
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rsi
  char v17; // cl
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
  volatile __int64 v30; // r8
  struct _LIST_ENTRY *Flink; // r9
  __int64 v32; // rax
  struct _LIST_ENTRY *v33; // r9
  __int64 v34; // rax
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // rbp
  unsigned __int64 v38; // r15
  int v39; // r12d
  char v40; // cl
  unsigned int v41; // r8d
  __int64 v42; // r10
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rbx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r8
  int v49; // eax
  int v50; // ebx
  __int64 v51; // r9
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned int v56; // ecx
  __int64 v57; // rax
  __int64 *v58; // r8
  __int64 v59; // rdx
  unsigned __int64 v60; // r8
  struct _LIST_ENTRY *v61; // rax
  __int64 v62; // rax
  char v63; // r8^7
  int v64; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v67; // [rsp+90h] [rbp+18h]

  v67 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a3 << 25;
  v10 = 0xFFFFF68000000000uLL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0xFFFFF6FFFFFFFFFFuLL;
  v16 = v7 >> 16;
  v17 = *(_BYTE *)(a1 + 184) & 7;
  if ( v17 && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  v18 = 0x3FFFFFFFFFFFFFFFLL;
  v19 = 0x7FFFFFFFF8LL;
  if ( !v17 )
    goto LABEL_12;
  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && !(unsigned int)MI_PFN_IS_PROTO(a2)
    || *(_WORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v13 = 1;
  if ( !a4 )
    goto LABEL_19;
  if ( v16 >= v10 && v16 <= v15 )
    LOBYTE(v12) = v10 + (v19 & (a3 >> 9)) == 0xFFFFF6FB7DBEDF68uLL;
LABEL_12:
  if ( a4 && v16 >= v10 && v16 <= v15 )
  {
    v14 = 1;
    MiLockPageTableInternal(a1, a3, 0);
  }
  if ( !v13 )
    goto LABEL_38;
  if ( v12 )
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
LABEL_19:
  v64 = 0;
  v67 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v64, v18, v10, v15);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
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
    MiUnlockNestedPageTableWritePte(a1, (volatile __int64 *)a3, v28 & 0xCFFFFFFFFFFFFFDFuLL, v12);
    goto LABEL_74;
  }
  v29 = *(_QWORD *)a3;
  v30 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v30 & 1) != 0
    && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v30 |= 0x20uLL;
      v32 = *((_QWORD *)&Flink->Flink + ((a3 >> 3) & 0x1FF));
      if ( (v32 & 0x20) == 0 )
        v30 = v29;
      if ( (v32 & 0x42) != 0 )
        v30 |= 0x42uLL;
    }
  }
  if ( a3 >= v27
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v33 )
    {
      v34 = *((_QWORD *)&v33->Flink + ((a3 >> 3) & 0x1FF));
      v35 = v29 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v35 = v29;
      v29 = v35;
      if ( (v34 & 0x42) != 0 )
        v29 = v35 | 0x42;
    }
  }
  v36 = (v30 & 0xF0FFFFFFFFFFFFDFuLL | v29 & 0xF00000000000000LL) ^ ((v30 & 0xF0FFFFFFFFFFFFDFuLL | v29 & 0xF00000000000000LL) ^ v29) & 0x7000000000000000LL;
  if ( a3 < v27 || a3 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_73:
    *(_QWORD *)a3 = v36;
    goto LABEL_74;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v36 & 1) != 0 )
      v36 |= 0x8000000000000000uLL;
    goto LABEL_73;
  }
  if ( !HIBYTE(word_140C4E048) && (v36 & 1) != 0 )
    v36 |= 0x8000000000000000uLL;
  *(_QWORD *)a3 = v36;
  MiWritePteShadow(a3, v36);
LABEL_74:
  v37 = 1LL;
  v38 = v16;
  v39 = 1;
  if ( *(_DWORD *)a4 != 1 )
  {
    v40 = *(_BYTE *)(a4 + 4);
    if ( (v40 & 8) == 0 && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a4 + 4) = v40 | 8;
  }
  v41 = *(_DWORD *)(a4 + 12);
  if ( !v41 )
    goto LABEL_106;
  if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
  {
    v42 = a4 + 8LL * (v41 - 1);
    v43 = *(_QWORD *)(v42 + 24);
    if ( (v43 & 0xC00) == 0 )
    {
      v44 = *(_QWORD *)(v42 + 24) & 0x3FFLL;
      if ( (v43 & 0xFFFFFFFFFFFFF000uLL) + ((v44 + 1) << 12) == v16 && v44 + 1 >= v44 && v44 + 1 <= 0x3FF )
      {
        ++*(_QWORD *)(a4 + 16);
        *(_QWORD *)(v42 + 24) = ((unsigned __int16)v43 ^ (unsigned __int16)(v43 + 1)) & 0x3FF ^ v43;
        goto LABEL_86;
      }
    }
  }
  if ( (*(_BYTE *)(a4 + 4) & 4) != 0
    || (v51 = a4 + 8LL * (v41 - 1), v52 = *(_QWORD *)(v51 + 24), (v52 & 0xC00) != 0)
    || (v52 & 0xFFFFFFFFFFFFF000uLL) != v16 + 4096
    || (v53 = *(_QWORD *)(v51 + 24) & 0x3FFLL, v53 + 1 < v53)
    || v53 + 1 > 0x3FF )
  {
LABEL_106:
    if ( v41 < *(_DWORD *)(a4 + 8) )
    {
      while ( 1 )
      {
        v54 = 1024LL;
        if ( (unsigned __int64)(v37 - 1) <= 0x3FF )
          v54 = v37;
        v37 -= v54;
        v55 = v38 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v54 - 1) & 0x3FF;
        v38 += v54 << 12;
        *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v55;
        v56 = *(_DWORD *)(a4 + 12);
        *(_QWORD *)(a4 + 16) += v54;
        if ( v56 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
        {
          qsort((void *)(a4 + 24), v56, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
          MiCompressTbFlushList(a4);
          v57 = *(unsigned int *)(a4 + 12);
          if ( (_DWORD)v57 == *(_DWORD *)(a4 + 8) )
            break;
        }
        if ( !v37 )
          goto LABEL_86;
      }
      if ( v37 )
      {
        *(_BYTE *)(a4 + 5) = 1;
        *(_QWORD *)(a4 + 16) = v57;
      }
    }
    else
    {
      *(_BYTE *)(a4 + 5) = 1;
    }
    goto LABEL_86;
  }
  ++*(_QWORD *)(a4 + 16);
  *(_QWORD *)(v51 + 24) = ((unsigned __int16)(v52 - 4096) ^ (unsigned __int16)(v52 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v52 - 4096);
LABEL_86:
  if ( v67 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v45 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v46 = KeGetCurrentIrql();
          if ( v46 <= 0xFu && LockHandle.OldIrql <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = v47->SchedulerAssist;
            v49 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v49 & v48[5]) == 0;
            v48[5] &= v49;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      __writecr8(v45);
    }
  }
  if ( v39 )
  {
    if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v58 = (__int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v59 = *v58;
      if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v59 & 1) != 0
        && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
      {
        v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v61 )
        {
          v62 = *((_QWORD *)&v61->Flink + ((v60 >> 3) & 0x1FF));
          v63 = HIBYTE(v59);
          if ( (v62 & 0x20) == 0 )
            v63 = HIBYTE(v59);
          HIBYTE(v59) = v63;
          if ( (v62 & 0x42) != 0 )
            HIBYTE(v59) = v63;
        }
      }
      v50 = HIBYTE(v59) & 0xF;
    }
    else
    {
      v50 = (*(_DWORD *)(48
                       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL) >> 1) & 7;
    }
    if ( a5 && v50 != 7 )
      MiLogPageAccess(a1, a3);
    if ( !v50 )
      MiSetVaAgeList(a1, v16, 1u, 1u);
  }
  return 1LL;
}
