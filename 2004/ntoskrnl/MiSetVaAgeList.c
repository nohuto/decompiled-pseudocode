/*
 * XREFs of MiSetVaAgeList @ 0x140237D20
 * Callers:
 *     MiAgePteWorker @ 0x140244AA0 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x140244F10 (MiClearPteAccessed.c)
 *     MiLockWsle @ 0x140250290 (MiLockWsle.c)
 *     MiUnlockWsle @ 0x14025DF90 (MiUnlockWsle.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiTrimWorkingSetBuildup @ 0x1402D3C98 (MiTrimWorkingSetBuildup.c)
 *     MiUpdateWsleAge @ 0x14034C4B8 (MiUpdateWsleAge.c)
 *     MiResetAccessBitPte @ 0x140398A60 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x1405365B0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiVolunteerForTrimFirst @ 0x140245C40 (MiVolunteerForTrimFirst.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiCountWslesInPageTable @ 0x1403018B0 (MiCountWslesInPageTable.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  char v7; // r14
  unsigned __int64 v8; // r9
  char v9; // al
  int v10; // edi
  unsigned __int64 *v11; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v14; // rcx
  _BYTE *v15; // r12
  unsigned __int8 v16; // bl
  BOOL v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 *v20; // rdx
  __int64 v21; // r8
  unsigned __int8 v22; // al
  unsigned __int8 v23; // bl
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int8 v30; // al
  bool v31; // zf
  __int64 Next; // rax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 *v38; // rbx
  char v40; // cl
  int v41; // r8d
  unsigned __int64 v42; // rbx
  struct _LIST_ENTRY *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  struct _LIST_ENTRY *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  struct _LIST_ENTRY *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  struct _LIST_ENTRY *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  struct _LIST_ENTRY *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // eax
  struct _LIST_ENTRY *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  struct _LIST_ENTRY *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  int v69; // [rsp+20h] [rbp-49h]
  unsigned int v71; // [rsp+28h] [rbp-41h]
  BOOL v72; // [rsp+2Ch] [rbp-3Dh]
  unsigned __int64 v73; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v75; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v76; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v77; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v78[8]; // [rsp+68h] [rbp-1h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]

  v71 = a3;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v72 = 0;
  v73 = v8;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 1;
    v69 = 1;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 0;
    v69 = 0;
    v72 = (v9 & 7) != 0;
  }
  if ( (v9 & 7) == 2 )
    v11 = (unsigned __int64 *)&unk_140C4F5C0;
  else
    v11 = (unsigned __int64 *)(a1 + 256);
  LockHandle.LockQueue.Lock = v11;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v46 = SchedulerAssist[6];
      SchedulerAssist[6] = v46 + 1;
      if ( v46 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v8 = v73;
        a3 = v71;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    goto LABEL_83;
  }
  if ( _InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
LABEL_83:
    a3 = v71;
    v8 = v73;
  }
  if ( a4 == 8 && *(_QWORD *)(a1 + 112) < *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 6LL + (unsigned __int64)a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 0LL;
  }
  if ( a3 )
  {
    do
    {
      if ( v10 )
      {
        v14 = *(_QWORD *)v8;
        v15 = 0LL;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v14 & 1) != 0
          && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v48 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
            v49 = v14 | 0x20;
            if ( (v48 & 0x20) == 0 )
              v49 = *(_QWORD *)v8;
            v14 = v49;
            if ( (v48 & 0x42) != 0 )
              v14 = v49 | 0x42;
          }
        }
        v7 = HIBYTE(v14) & 0xF | (16 * ((v14 >> 60) & 7));
        v16 = HIBYTE(v14) & 0xF;
        v17 = (HIBYTE(v14) & 0xF) == 8;
        v72 = v17;
      }
      else
      {
        v42 = *(_QWORD *)v8;
        if ( (unsigned int)MiPteInShadowRange(v8)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v42 & 1) != 0
          && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
        {
          v43 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v43 )
          {
            v44 = *((_QWORD *)&v43->Flink + ((v73 >> 3) & 0x1FF));
            v45 = v42 | 0x20;
            if ( (v44 & 0x20) == 0 )
              v45 = v42;
            v42 = v45;
            if ( (v44 & 0x42) != 0 )
              v42 = v45 | 0x42;
          }
        }
        v17 = v72;
        v15 = (_BYTE *)(48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v16 = (*v15 >> 1) & 7;
      }
      if ( v16 == 8 )
        --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( !v17 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v18 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v19 = *(_QWORD *)v18;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL
            && v18 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v19 & 1) != 0
            && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v50 )
            {
              v51 = *((_QWORD *)&v50->Flink + ((v18 >> 3) & 0x1FF));
              v52 = v19 | 0x20;
              if ( (v51 & 0x20) == 0 )
                v52 = v19;
              v19 = v52;
              if ( (v51 & 0x42) != 0 )
                v19 = v52 | 0x42;
            }
          }
          v75 = v19;
          if ( (unsigned int)MiPteInShadowRange(&v75)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v19 & 1) != 0
            && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v53 )
            {
              v54 = *((_QWORD *)&v53->Flink + (((unsigned __int64)&v75 >> 3) & 0x1FF));
              v55 = v19 | 0x20;
              if ( (v54 & 0x20) == 0 )
                v55 = v19;
              v19 = v55;
              if ( (v54 & 0x42) != 0 )
                v19 = v55 | 0x42;
            }
          }
          v20 = (__int64 *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v21 = *v20;
          v22 = ((unsigned __int64)*v20 >> 14) & 7;
          if ( (((unsigned __int64)*v20 >> 4) & 0x3FF) != 0 )
          {
            if ( v16 == v22 )
            {
              *v20 = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v20 >> 4) & 0x3FF) - 1))) & 0x3FF0;
            }
            else if ( v16 > v22 )
            {
              *v20 = v21 ^ ((unsigned int)v21 ^ (v16 << 14)) & 0x1C000 | 0x3FF0;
            }
          }
          v10 = v69;
        }
        --*(_QWORD *)(a1 + 8LL * v16 + 40);
        if ( v16 == 7 )
          MiVolunteerForTrimFirst(a1, -1LL);
      }
      v23 = a4;
      if ( (unsigned __int8)(a4 - 1) <= 5u
        && (MI_READ_PTE_LOCK_FREE(v73) & 0x20) != 0
        && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624)) )
      {
        v23 = 0;
      }
      if ( v15 )
      {
        *(_QWORD *)v15 ^= ((unsigned __int8)*(_QWORD *)v15 ^ (unsigned __int8)(2 * v23)) & 0xE;
      }
      else
      {
        v7 ^= (v23 ^ v7) & 0xF;
        v24 = *(_QWORD *)v73;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v73,
                  ((unsigned __int64)(v7 & 0x7F) << 56) | v24 & 0x80FFFFFFFFFFFFFFuLL,
                  v24);
        }
        while ( v25 != v24 );
      }
      if ( v23 >= 8u )
      {
        if ( v23 == 8 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      }
      else if ( v10 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v26 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v27 = *(_QWORD *)v26;
          if ( v26 >= 0xFFFFF6FB7DBED000uLL
            && v26 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v27 & 1) != 0
            && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
          {
            v56 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v56 )
            {
              v57 = *((_QWORD *)&v56->Flink + ((v26 >> 3) & 0x1FF));
              v58 = v27 | 0x20;
              if ( (v57 & 0x20) == 0 )
                v58 = v27;
              v27 = v58;
              if ( (v57 & 0x42) != 0 )
                v27 = v58 | 0x42;
            }
          }
          v76 = v27;
          if ( (unsigned int)MiPteInShadowRange(&v76)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v27 & 1) != 0
            && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
          {
            v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v59 )
            {
              v60 = *((_QWORD *)&v59->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
              v61 = v27 | 0x20;
              if ( (v60 & 0x20) == 0 )
                v61 = v27;
              v27 = v61;
              if ( (v60 & 0x42) != 0 )
                v27 = v61 | 0x42;
            }
          }
          v28 = (unsigned __int64 *)(48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v29 = *v28;
          v30 = (*v28 >> 14) & 7;
          if ( ((*v28 >> 4) & 0x3FF) != 0 )
          {
            if ( v23 == v30 )
            {
              *v28 = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(16 * (((*v28 >> 4) & 0x3FF) + 1))) & 0x3FF0;
            }
            else if ( v23 > v30 )
            {
              *v28 = v29 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v23 & 7) << 14) | 0x10;
            }
          }
          v10 = v69;
        }
        ++*(_QWORD *)(a1 + 8LL * v23 + 40);
        if ( v23 == 7 )
          MiVolunteerForTrimFirst(a1, 1LL);
      }
      v31 = v71-- == 1;
      v8 = v73;
    }
    while ( !v31 );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_47;
      Next = KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_47:
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v62 = v34[6] - 1;
      v34[6] = v62;
      if ( !v62 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  if ( v10 )
  {
    v35 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v36 = *(_QWORD *)v35;
    if ( v35 >= 0xFFFFF6FB7DBED000uLL
      && v35 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      v63 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v63 )
      {
        v64 = *((_QWORD *)&v63->Flink + ((v35 >> 3) & 0x1FF));
        v65 = v36 | 0x20;
        if ( (v64 & 0x20) == 0 )
          v65 = v36;
        v36 = v65;
        if ( (v64 & 0x42) != 0 )
          v36 = v65 | 0x42;
      }
    }
    v77 = v36;
    if ( (unsigned int)MiPteInShadowRange(&v77) )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v66 = Process[1].ProcessListEntry.Flink;
          if ( v66 )
          {
            v67 = *((_QWORD *)&v66->Flink + (((unsigned __int64)&v77 >> 3) & 0x1FF));
            v68 = v36 | 0x20;
            Process = (_KPROCESS *)(unsigned __int8)v67;
            LOBYTE(Process) = v67 & 0x20;
            if ( (v67 & 0x20) == 0 )
              v68 = v36;
            v36 = v68;
            if ( (v67 & 0x42) != 0 )
              v36 = v68 | 0x42;
          }
        }
      }
    }
    v38 = (unsigned __int64 *)(48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v38 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(Process, a2, v78);
      v40 = 8;
      while ( 1 )
      {
        v41 = v78[(unsigned __int8)--v40];
        if ( v41 )
          break;
        if ( !v40 )
          return 1LL;
      }
      *v38 = *v38 & 0xFFFFFFFFFFFE000FuLL | (16 * (v41 & 0x3FF | ((unsigned __int64)(v40 & 7) << 10)));
    }
  }
  return 1LL;
}
