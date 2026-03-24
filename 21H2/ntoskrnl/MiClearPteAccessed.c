/*
 * XREFs of MiClearPteAccessed @ 0x140339E00
 * Callers:
 *     MiAgePteWorker @ 0x140339990 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x140367B74 (MiCrcStillIntact.c)
 *     MiResetAccessBitPte @ 0x14039B7F0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053BA80 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiCompressTbFlushList @ 0x1402A32E0 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiUnlockNestedPageTableWritePte @ 0x14030C84C (MiUnlockNestedPageTableWritePte.c)
 *     MiSetVaAgeList @ 0x14032D6B0 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     qsort @ 0x1403D2AC0 (qsort.c)
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
  __int64 v37; // r8
  __int64 v38; // rbp
  unsigned __int64 v39; // r15
  int v40; // r12d
  char v41; // cl
  unsigned int v42; // r8d
  __int64 v43; // r10
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rbx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r8
  int v50; // eax
  int v51; // ebx
  __int64 v52; // r9
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rdx
  unsigned __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rax
  __int64 *v59; // r8
  __int64 v60; // rdx
  unsigned __int64 v61; // r8
  struct _LIST_ENTRY *v62; // rax
  __int64 v63; // rax
  char v64; // r8^7
  int v65; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  int v68; // [rsp+90h] [rbp+18h]

  v68 = 0;
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
    MiLockPageTableInternal(a1, a3, 0LL);
  }
  if ( !v13 )
    goto LABEL_38;
  if ( v12 )
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
LABEL_19:
  v65 = 0;
  v68 = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v65, v18, v10, v15);
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
    v40 = a6;
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
  if ( !HIBYTE(word_140C4E008) && (v36 & 1) != 0 )
    v36 |= 0x8000000000000000uLL;
  *(_QWORD *)a3 = v36;
  MiWritePteShadow(a3, v36, v37);
LABEL_74:
  v38 = 1LL;
  v39 = v16;
  v40 = 1;
  if ( *(_DWORD *)a4 != 1 )
  {
    v41 = *(_BYTE *)(a4 + 4);
    if ( (v41 & 8) == 0 && v16 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a4 + 4) = v41 | 8;
  }
  v42 = *(_DWORD *)(a4 + 12);
  if ( !v42 )
    goto LABEL_106;
  if ( (*(_BYTE *)(a4 + 4) & 4) == 0 )
  {
    v43 = a4 + 8LL * (v42 - 1);
    v44 = *(_QWORD *)(v43 + 24);
    if ( (v44 & 0xC00) == 0 )
    {
      v45 = *(_QWORD *)(v43 + 24) & 0x3FFLL;
      if ( (v44 & 0xFFFFFFFFFFFFF000uLL) + ((v45 + 1) << 12) == v16 && v45 + 1 >= v45 && v45 + 1 <= 0x3FF )
      {
        ++*(_QWORD *)(a4 + 16);
        *(_QWORD *)(v43 + 24) = ((unsigned __int16)v44 ^ (unsigned __int16)(v44 + 1)) & 0x3FF ^ v44;
        goto LABEL_86;
      }
    }
  }
  if ( (*(_BYTE *)(a4 + 4) & 4) != 0
    || (v52 = a4 + 8LL * (v42 - 1), v53 = *(_QWORD *)(v52 + 24), (v53 & 0xC00) != 0)
    || (v53 & 0xFFFFFFFFFFFFF000uLL) != v16 + 4096
    || (v54 = *(_QWORD *)(v52 + 24) & 0x3FFLL, v54 + 1 < v54)
    || v54 + 1 > 0x3FF )
  {
LABEL_106:
    if ( v42 < *(_DWORD *)(a4 + 8) )
    {
      while ( 1 )
      {
        v55 = 1024LL;
        if ( (unsigned __int64)(v38 - 1) <= 0x3FF )
          v55 = v38;
        v38 -= v55;
        v56 = v39 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v55 - 1) & 0x3FF;
        v39 += v55 << 12;
        *(_QWORD *)(a4 + 8LL * (unsigned int)(*(_DWORD *)(a4 + 12))++ + 24) = v56;
        v57 = *(_DWORD *)(a4 + 12);
        *(_QWORD *)(a4 + 16) += v55;
        if ( v57 == *(_DWORD *)(a4 + 8) && (*(_BYTE *)(a4 + 4) & 4) == 0 )
        {
          qsort((void *)(a4 + 24), v57, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
          MiCompressTbFlushList(a4);
          v58 = *(unsigned int *)(a4 + 12);
          if ( (_DWORD)v58 == *(_DWORD *)(a4 + 8) )
            break;
        }
        if ( !v38 )
          goto LABEL_86;
      }
      if ( v38 )
      {
        *(_BYTE *)(a4 + 5) = 1;
        *(_QWORD *)(a4 + 16) = v58;
      }
    }
    else
    {
      *(_BYTE *)(a4 + 5) = 1;
    }
    goto LABEL_86;
  }
  ++*(_QWORD *)(a4 + 16);
  *(_QWORD *)(v52 + 24) = ((unsigned __int16)(v53 - 4096) ^ (unsigned __int16)(v53 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v53 - 4096);
LABEL_86:
  if ( v68 == 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v46 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && LockHandle.OldIrql <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
      }
      __writecr8(v46);
    }
  }
  if ( v40 )
  {
    if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v59 = (__int64 *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v60 = *v59;
      if ( (unsigned __int64)v59 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v59 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v60 & 1) != 0
        && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
      {
        v62 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v62 )
        {
          v63 = *((_QWORD *)&v62->Flink + ((v61 >> 3) & 0x1FF));
          v64 = HIBYTE(v60);
          if ( (v63 & 0x20) == 0 )
            v64 = HIBYTE(v60);
          HIBYTE(v60) = v64;
          if ( (v63 & 0x42) != 0 )
            HIBYTE(v60) = v64;
        }
      }
      v51 = HIBYTE(v60) & 0xF;
    }
    else
    {
      v51 = (*(_DWORD *)(48
                       * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x58000000000LL) >> 1) & 7;
    }
    if ( a5 && v51 != 7 )
      MiLogPageAccess(a1, a3);
    if ( !v51 )
      MiSetVaAgeList(a1, v16, 1LL, 1u);
  }
  return 1LL;
}
