/*
 * XREFs of MiSetVaAgeList @ 0x140338400
 * Callers:
 *     MiUpdateWsleAge @ 0x14023D07C (MiUpdateWsleAge.c)
 *     MiTrimWorkingSetBuildup @ 0x140255258 (MiTrimWorkingSetBuildup.c)
 *     MiUnlockWsle @ 0x14025DBBC (MiUnlockWsle.c)
 *     MiLockWsle @ 0x14025EE50 (MiLockWsle.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiAgePteWorker @ 0x1403446E0 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x140344B50 (MiClearPteAccessed.c)
 *     MiResetAccessBitPte @ 0x14039B940 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053BCC0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x140202320 (MiCountWslesInPageTable.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVolunteerForTrimFirst @ 0x140341F80 (MiVolunteerForTrimFirst.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
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
  unsigned __int64 v15; // rcx
  _BYTE *v16; // r12
  unsigned __int8 v17; // bl
  BOOL v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 *v21; // rdx
  __int64 v22; // r8
  unsigned __int8 v23; // al
  unsigned __int8 v24; // bl
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int8 v31; // al
  bool v32; // zf
  __int64 Next; // rax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 Process; // rcx
  unsigned __int64 *v39; // rbx
  char v41; // cl
  int v42; // r8d
  unsigned __int64 v43; // rbx
  struct _LIST_ENTRY *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v49; // rax
  __int64 v50; // r8
  struct _LIST_ENTRY *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  struct _LIST_ENTRY *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  struct _LIST_ENTRY *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  struct _LIST_ENTRY *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  struct _LIST_ENTRY *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // [rsp+20h] [rbp-49h]
  unsigned int v72; // [rsp+28h] [rbp-41h]
  BOOL v73; // [rsp+2Ch] [rbp-3Dh]
  unsigned __int64 v74; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v76; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v77; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v78; // [rsp+60h] [rbp-9h] BYREF
  _OWORD v79[2]; // [rsp+68h] [rbp-1h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v72 = a3;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = 0;
  v74 = v8;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 1;
    v70 = 1;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 0;
    v70 = 0;
    v73 = (v9 & 7) != 0;
  }
  if ( (v9 & 7) == 2 )
    v11 = (unsigned __int64 *)&unk_140C4F800;
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
      v47 = SchedulerAssist[6];
      SchedulerAssist[6] = v47 + 1;
      if ( v47 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v8 = v74;
        a3 = v72;
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
    a3 = v72;
    v8 = v74;
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
        v15 = *(_QWORD *)v8;
        v16 = 0LL;
        if ( v8 >= 0xFFFFF6FB7DBED000uLL
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v49 = *((_QWORD *)&Flink->Flink + ((v8 >> 3) & 0x1FF));
            v50 = v15 | 0x20;
            if ( (v49 & 0x20) == 0 )
              v50 = *(_QWORD *)v8;
            v15 = v50;
            if ( (v49 & 0x42) != 0 )
              v15 = v50 | 0x42;
          }
        }
        v7 = HIBYTE(v15) & 0xF | (16 * ((v15 >> 60) & 7));
        v17 = HIBYTE(v15) & 0xF;
        v18 = (HIBYTE(v15) & 0xF) == 8;
        v73 = v18;
      }
      else
      {
        v43 = *(_QWORD *)v8;
        if ( (unsigned int)MiPteInShadowRange(v8)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v43 & 1) != 0
          && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
        {
          v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v44 )
          {
            v45 = *((_QWORD *)&v44->Flink + ((v74 >> 3) & 0x1FF));
            v46 = v43 | 0x20;
            if ( (v45 & 0x20) == 0 )
              v46 = v43;
            v43 = v46;
            if ( (v45 & 0x42) != 0 )
              v43 = v46 | 0x42;
          }
        }
        v18 = v73;
        v16 = (_BYTE *)(48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v17 = (*v16 >> 1) & 7;
      }
      if ( v17 == 8 )
        --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( !v18 )
      {
        if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v19 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          v20 = *(_QWORD *)v19;
          if ( v19 >= 0xFFFFF6FB7DBED000uLL
            && v19 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v51 )
            {
              v52 = *((_QWORD *)&v51->Flink + ((v19 >> 3) & 0x1FF));
              v53 = v20 | 0x20;
              if ( (v52 & 0x20) == 0 )
                v53 = v20;
              v20 = v53;
              if ( (v52 & 0x42) != 0 )
                v20 = v53 | 0x42;
            }
          }
          v76 = v20;
          if ( (unsigned int)MiPteInShadowRange(&v76)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v54 )
            {
              v55 = *((_QWORD *)&v54->Flink + (((unsigned __int64)&v76 >> 3) & 0x1FF));
              v56 = v20 | 0x20;
              if ( (v55 & 0x20) == 0 )
                v56 = v20;
              v20 = v56;
              if ( (v55 & 0x42) != 0 )
                v20 = v56 | 0x42;
            }
          }
          v21 = (__int64 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v22 = *v21;
          v23 = ((unsigned __int64)*v21 >> 14) & 7;
          if ( (((unsigned __int64)*v21 >> 4) & 0x3FF) != 0 )
          {
            if ( v17 == v23 )
            {
              *v21 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(16 * ((((unsigned __int64)*v21 >> 4) & 0x3FF) - 1))) & 0x3FF0;
            }
            else if ( v17 > v23 )
            {
              *v21 = v22 ^ ((unsigned int)v22 ^ (v17 << 14)) & 0x1C000 | 0x3FF0;
            }
          }
          v10 = v70;
        }
        --*(_QWORD *)(a1 + 8LL * v17 + 40);
        if ( v17 == 7 )
          MiVolunteerForTrimFirst(a1, -1LL);
      }
      v24 = a4;
      if ( (unsigned __int8)(a4 - 1) <= 5u
        && (MI_READ_PTE_LOCK_FREE(v74) & 0x20) != 0
        && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624)) )
      {
        v24 = 0;
      }
      if ( v16 )
      {
        *(_QWORD *)v16 ^= ((unsigned __int8)*(_QWORD *)v16 ^ (unsigned __int8)(2 * v24)) & 0xE;
      }
      else
      {
        v7 ^= (v24 ^ v7) & 0xF;
        v25 = *(_QWORD *)v74;
        do
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v74,
                  ((unsigned __int64)(v7 & 0x7F) << 56) | v25 & 0x80FFFFFFFFFFFFFFuLL,
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
            v57 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v57 )
            {
              v58 = *((_QWORD *)&v57->Flink + ((v27 >> 3) & 0x1FF));
              v59 = v28 | 0x20;
              if ( (v58 & 0x20) == 0 )
                v59 = v28;
              v28 = v59;
              if ( (v58 & 0x42) != 0 )
                v28 = v59 | 0x42;
            }
          }
          v77 = v28;
          if ( (unsigned int)MiPteInShadowRange(&v77)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v28 & 1) != 0
            && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
          {
            v60 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v60 )
            {
              v61 = *((_QWORD *)&v60->Flink + (((unsigned __int64)&v77 >> 3) & 0x1FF));
              v62 = v28 | 0x20;
              if ( (v61 & 0x20) == 0 )
                v62 = v28;
              v28 = v62;
              if ( (v61 & 0x42) != 0 )
                v28 = v62 | 0x42;
            }
          }
          v29 = (unsigned __int64 *)(48 * ((v28 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v30 = *v29;
          v31 = (*v29 >> 14) & 7;
          if ( ((*v29 >> 4) & 0x3FF) != 0 )
          {
            if ( v24 == v31 )
            {
              *v29 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)(16 * (((*v29 >> 4) & 0x3FF) + 1))) & 0x3FF0;
            }
            else if ( v24 > v31 )
            {
              *v29 = v30 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v24 & 7) << 14) | 0x10;
            }
          }
          v10 = v70;
        }
        ++*(_QWORD *)(a1 + 8LL * v24 + 40);
        if ( v24 == 7 )
          MiVolunteerForTrimFirst(a1, 1LL);
      }
      v32 = v72-- == 1;
      v8 = v74;
    }
    while ( !v32 );
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
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_47:
  v34 = KeGetCurrentPrcb();
  v35 = v34->SchedulerAssist;
  if ( v35 )
  {
    if ( v34->NestingLevel <= 1u )
    {
      v63 = v35[6] - 1;
      v35[6] = v63;
      if ( !v63 )
        KiRemoveSystemWorkPriorityKick(v34);
    }
  }
  if ( v10 )
  {
    v36 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v37 = *(_QWORD *)v36;
    if ( v36 >= 0xFFFFF6FB7DBED000uLL
      && v36 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v37 & 1) != 0
      && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
    {
      v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v64 )
      {
        v65 = *((_QWORD *)&v64->Flink + ((v36 >> 3) & 0x1FF));
        v66 = v37 | 0x20;
        if ( (v65 & 0x20) == 0 )
          v66 = v37;
        v37 = v66;
        if ( (v65 & 0x42) != 0 )
          v37 = v66 | 0x42;
      }
    }
    v78 = v37;
    if ( (unsigned int)MiPteInShadowRange(&v78) )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 912) != 1 && (v37 & 1) != 0 && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process;
          v67 = *(_QWORD *)(Process + 1928);
          if ( v67 )
          {
            v68 = *(_QWORD *)(v67 + 8 * (((unsigned __int64)&v78 >> 3) & 0x1FF));
            v69 = v37 | 0x20;
            Process = (unsigned __int8)v68;
            LOBYTE(Process) = v68 & 0x20;
            if ( (v68 & 0x20) == 0 )
              v69 = v37;
            v37 = v69;
            if ( (v68 & 0x42) != 0 )
              v37 = v69 | 0x42;
          }
        }
      }
    }
    v39 = (unsigned __int64 *)(48 * ((v37 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v39 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(Process, a2, v79);
      v41 = 8;
      while ( 1 )
      {
        v42 = *((_DWORD *)v79 + (unsigned __int8)--v41);
        if ( v42 )
          break;
        if ( !v41 )
          return 1LL;
      }
      *v39 = *v39 & 0xFFFFFFFFFFFE000FuLL | (16 * (v42 & 0x3FF | ((unsigned __int64)(v41 & 7) << 10)));
    }
  }
  return 1LL;
}
