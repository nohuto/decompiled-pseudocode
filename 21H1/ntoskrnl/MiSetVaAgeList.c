/*
 * XREFs of MiSetVaAgeList @ 0x140290D70
 * Callers:
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiAgePteWorker @ 0x14029DAD0 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x14029DF40 (MiClearPteAccessed.c)
 *     MiLockWsle @ 0x1402A92C0 (MiLockWsle.c)
 *     MiUnlockWsle @ 0x1402B6FC0 (MiUnlockWsle.c)
 *     MiUpdateWsleAge @ 0x14030EDEC (MiUpdateWsleAge.c)
 *     MiTrimWorkingSetBuildup @ 0x14034E5C8 (MiTrimWorkingSetBuildup.c)
 *     MiResetAccessBitPte @ 0x1403982D0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140535F60 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiVolunteerForTrimFirst @ 0x14029EC70 (MiVolunteerForTrimFirst.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiCountWslesInPageTable @ 0x1402DE480 (MiCountWslesInPageTable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
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
  _QWORD *v14; // rdx
  unsigned __int64 Process; // rdx
  unsigned __int64 v16; // rcx
  _BYTE *v17; // r12
  unsigned __int8 v18; // bl
  BOOL v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // r8
  unsigned __int8 v23; // al
  unsigned __int8 v24; // bl
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // r8
  unsigned __int8 v30; // al
  bool v31; // zf
  __int64 Next; // rax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rbx
  _KPROCESS *v37; // rcx
  unsigned __int64 *v38; // rbx
  char v40; // cl
  int v41; // r8d
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v49; // rax
  struct _LIST_ENTRY *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  struct _LIST_ENTRY *v53; // rax
  __int64 v54; // rax
  struct _LIST_ENTRY *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // eax
  struct _LIST_ENTRY *v59; // rax
  __int64 v60; // rax
  struct _LIST_ENTRY *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // [rsp+20h] [rbp-49h]
  unsigned int v66; // [rsp+28h] [rbp-41h]
  BOOL v67; // [rsp+2Ch] [rbp-3Dh]
  unsigned __int64 v68; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v70; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v71; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v72; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v73[8]; // [rsp+68h] [rbp-1h] BYREF
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+5Fh]

  v66 = a3;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v67 = 0;
  v68 = v8;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 1;
    v64 = 1;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 0;
    v64 = 0;
    v67 = (v9 & 7) != 0;
  }
  if ( (v9 & 7) == 2 )
    v11 = (unsigned __int64 *)&unk_140C4F700;
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
      v44 = SchedulerAssist[6];
      SchedulerAssist[6] = v44 + 1;
      if ( v44 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v8 = v68;
        a3 = v66;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    goto LABEL_83;
  }
  v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle);
  if ( v14 )
  {
    KxWaitForLockOwnerShip((__int64)&LockHandle, v14);
LABEL_83:
    a3 = v66;
    v8 = v68;
  }
  if ( a4 == 8 && *(_QWORD *)(a1 + 112) < *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 6LL + (unsigned __int64)a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 0LL;
  }
  LOBYTE(Process) = -8;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v10 )
      {
        v16 = *(_QWORD *)v8;
        v17 = 0LL;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v16 & 1) != 0 && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v45 = *(_QWORD *)(Process + 1928);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 8 * ((v8 >> 3) & 0x1FF));
              v47 = v16 | 0x20;
              LOBYTE(Process) = v46 & 0x20;
              if ( (v46 & 0x20) == 0 )
                v47 = *(_QWORD *)v8;
              v16 = v47;
              if ( (v46 & 0x42) != 0 )
                v16 = v47 | 0x42;
            }
          }
        }
        v7 = HIBYTE(v16) & 0xF | (16 * ((v16 >> 60) & 7));
        v18 = HIBYTE(v16) & 0xF;
        v19 = (HIBYTE(v16) & 0xF) == 8;
        v67 = v19;
      }
      else
      {
        v42 = *(_QWORD *)v8;
        if ( (unsigned int)MiPteInShadowRange(v8, 0xFFFFF6FB7DBED7F8uLL)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v42 & 1) != 0
          && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Process )
          {
            v43 = *(_QWORD *)(Process + 8 * ((v68 >> 3) & 0x1FF));
            Process = v42 | 0x20;
            if ( (v43 & 0x20) == 0 )
              Process = v42;
            v42 = Process;
            if ( (v43 & 0x42) != 0 )
              v42 = Process | 0x42;
          }
        }
        v19 = v67;
        v17 = (_BYTE *)(48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v18 = (*v17 >> 1) & 7;
      }
      if ( v18 == 8 )
        --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( !v19 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v20 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v21 = *(_QWORD *)v20;
          if ( v20 >= 0xFFFFF6FB7DBED000uLL
            && v20 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v21 & 1) != 0
            && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v49 = *((_QWORD *)&Flink->Flink + ((v20 >> 3) & 0x1FF));
              v20 = v21 | 0x20;
              if ( (v49 & 0x20) == 0 )
                v20 = v21;
              v21 = v20;
              if ( (v49 & 0x42) != 0 )
                v21 = v20 | 0x42;
            }
          }
          v70 = v21;
          if ( (unsigned int)MiPteInShadowRange(&v70, v20)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v21 & 1) != 0
            && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v50 )
            {
              v51 = *((_QWORD *)&v50->Flink + (((unsigned __int64)&v70 >> 3) & 0x1FF));
              v52 = v21 | 0x20;
              if ( (v51 & 0x20) == 0 )
                v52 = v21;
              v21 = v52;
              if ( (v51 & 0x42) != 0 )
                v21 = v52 | 0x42;
            }
          }
          Process = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v22 = *(_QWORD *)Process;
          v23 = (*(_QWORD *)Process >> 14) & 7;
          if ( ((*(_QWORD *)Process >> 4) & 0x3FF) != 0 )
          {
            if ( v18 == v23 )
            {
              *(_QWORD *)Process = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(16
                                                                                   * (((*(_QWORD *)Process >> 4) & 0x3FF)
                                                                                    - 1))) & 0x3FF0;
            }
            else if ( v18 > v23 )
            {
              *(_QWORD *)Process = v22 ^ ((unsigned int)v22 ^ (v18 << 14)) & 0x1C000 | 0x3FF0;
            }
          }
          v10 = v64;
        }
        --*(_QWORD *)(a1 + 8LL * v18 + 40);
        if ( v18 == 7 )
          MiVolunteerForTrimFirst(a1, -1LL);
      }
      v24 = a4;
      if ( (unsigned __int8)(a4 - 1) <= 5u
        && (MI_READ_PTE_LOCK_FREE(v68) & 0x20) != 0
        && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624)) )
      {
        v24 = 0;
      }
      if ( v17 )
      {
        *(_QWORD *)v17 ^= ((unsigned __int8)*(_QWORD *)v17 ^ (unsigned __int8)(2 * v24)) & 0xE;
      }
      else
      {
        v7 ^= (v24 ^ v7) & 0xF;
        v25 = *(_QWORD *)v68;
        Process = (unsigned __int64)(v7 & 0x7F) << 56;
        do
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v68,
                  Process | v25 & 0x80FFFFFFFFFFFFFFuLL,
                  v25);
        }
        while ( v26 != v25 );
      }
      if ( v24 >= 8u )
      {
        if ( v24 == 8 )
          ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      }
      else if ( v10 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v27 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v28 = *(_QWORD *)v27;
          if ( v27 >= 0xFFFFF6FB7DBED000uLL
            && v27 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v53 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v53 )
            {
              v54 = *((_QWORD *)&v53->Flink + ((v27 >> 3) & 0x1FF));
              v27 = v28 | 0x20;
              if ( (v54 & 0x20) == 0 )
                v27 = v28;
              v28 = v27;
              if ( (v54 & 0x42) != 0 )
                v28 = v27 | 0x42;
            }
          }
          v71 = v28;
          if ( (unsigned int)MiPteInShadowRange(&v71, v27)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v55 )
            {
              v56 = *((_QWORD *)&v55->Flink + (((unsigned __int64)&v71 >> 3) & 0x1FF));
              v57 = v28 | 0x20;
              if ( (v56 & 0x20) == 0 )
                v57 = v28;
              v28 = v57;
              if ( (v56 & 0x42) != 0 )
                v28 = v57 | 0x42;
            }
          }
          Process = 48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v29 = *(_QWORD *)Process;
          v30 = (*(_QWORD *)Process >> 14) & 7;
          if ( ((*(_QWORD *)Process >> 4) & 0x3FF) != 0 )
          {
            if ( v24 == v30 )
            {
              *(_QWORD *)Process = v29 ^ ((unsigned __int16)v29 ^ (unsigned __int16)(16
                                                                                   * (((*(_QWORD *)Process >> 4) & 0x3FF)
                                                                                    + 1))) & 0x3FF0;
            }
            else if ( v24 > v30 )
            {
              *(_QWORD *)Process = v29 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v24 & 7) << 14) | 0x10;
            }
          }
          v10 = v64;
        }
        ++*(_QWORD *)(a1 + 8LL * v24 + 40);
        if ( v24 == 7 )
          MiVolunteerForTrimFirst(a1, 1LL);
      }
      v31 = v66-- == 1;
      v8 = v68;
      if ( v31 )
        break;
      LOBYTE(Process) = -8;
    }
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
      Next = KxWaitForLockChainValid(&LockHandle, Process);
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
      v58 = v34[6] - 1;
      v34[6] = v58;
      if ( !v58 )
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
      v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v59 )
      {
        v60 = *((_QWORD *)&v59->Flink + ((v35 >> 3) & 0x1FF));
        v35 = v36 | 0x20;
        if ( (v60 & 0x20) == 0 )
          v35 = v36;
        v36 = v35;
        if ( (v60 & 0x42) != 0 )
          v36 = v35 | 0x42;
      }
    }
    v72 = v36;
    if ( (unsigned int)MiPteInShadowRange(&v72, v35) )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        v37 = KeGetCurrentThread()->ApcState.Process;
        if ( v37->AddressPolicy != 1 && (v36 & 1) != 0 && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
        {
          v37 = KeGetCurrentThread()->ApcState.Process;
          v61 = v37[1].ProcessListEntry.Flink;
          if ( v61 )
          {
            v62 = *((_QWORD *)&v61->Flink + (((unsigned __int64)&v72 >> 3) & 0x1FF));
            v63 = v36 | 0x20;
            v37 = (_KPROCESS *)(unsigned __int8)v62;
            LOBYTE(v37) = v62 & 0x20;
            if ( (v62 & 0x20) == 0 )
              v63 = v36;
            v36 = v63;
            if ( (v62 & 0x42) != 0 )
              v36 = v63 | 0x42;
          }
        }
      }
    }
    v38 = (unsigned __int64 *)(48 * ((v36 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v38 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(v37, a2, v73);
      v40 = 8;
      while ( 1 )
      {
        v41 = v73[(unsigned __int8)--v40];
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
