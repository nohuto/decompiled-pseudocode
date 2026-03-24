/*
 * XREFs of MiSetVaAgeList @ 0x14032D6B0
 * Callers:
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiTrimWorkingSetBuildup @ 0x1402672B8 (MiTrimWorkingSetBuildup.c)
 *     MiUnlockWsle @ 0x14026FC1C (MiUnlockWsle.c)
 *     MiLockWsle @ 0x140270EB0 (MiLockWsle.c)
 *     MiUpdateWsleAge @ 0x1402BEC28 (MiUpdateWsleAge.c)
 *     MiAgePteWorker @ 0x140339990 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x140339E00 (MiClearPteAccessed.c)
 *     MiResetAccessBitPte @ 0x14039B7F0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x14053BA80 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     MiCountWslesInPageTable @ 0x140285180 (MiCountWslesInPageTable.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVolunteerForTrimFirst @ 0x140337230 (MiVolunteerForTrimFirst.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int8 a4)
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
  unsigned __int8 v22; // al
  unsigned __int8 v23; // bl
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // al
  bool v29; // zf
  __int64 Next; // rax
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  __int64 v35; // rcx
  unsigned __int64 *v36; // rbx
  char v38; // cl
  int v39; // r8d
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v45; // rax
  struct _LIST_ENTRY *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  struct _LIST_ENTRY *v49; // rax
  __int64 v50; // rax
  struct _LIST_ENTRY *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  struct _LIST_ENTRY *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // [rsp+20h] [rbp-49h]
  unsigned int v62; // [rsp+28h] [rbp-41h]
  BOOL v63; // [rsp+2Ch] [rbp-3Dh]
  unsigned __int64 v64; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v66; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v68; // [rsp+60h] [rbp-9h] BYREF
  _OWORD v69[2]; // [rsp+68h] [rbp-1h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v62 = a3;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 0;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v63 = 0;
  v64 = v8;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 1;
    v60 = 1;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 184);
    v10 = 0;
    v60 = 0;
    v63 = (v9 & 7) != 0;
  }
  if ( (v9 & 7) == 2 )
    v11 = (unsigned __int64 *)&unk_140C4F7C0;
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
      v42 = SchedulerAssist[6];
      SchedulerAssist[6] = v42 + 1;
      if ( v42 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v8 = v64;
        a3 = v62;
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
    a3 = v62;
    v8 = v64;
  }
  if ( a4 == 8
    && *(_QWORD *)(a1 + 112) < *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 6LL + (unsigned __int64)(unsigned int)a3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 0LL;
  }
  Process = 0xFFFFF6FB7DBED7F8uLL;
  if ( (_DWORD)a3 )
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
            a3 = *(_QWORD *)(Process + 1928);
            if ( a3 )
            {
              v43 = *(_QWORD *)(a3 + 8 * ((v8 >> 3) & 0x1FF));
              a3 = v16 | 0x20;
              Process = (unsigned __int8)v43;
              LOBYTE(Process) = v43 & 0x20;
              if ( (v43 & 0x20) == 0 )
                a3 = *(_QWORD *)v8;
              v16 = a3;
              if ( (v43 & 0x42) != 0 )
                v16 = a3 | 0x42;
            }
          }
        }
        v7 = HIBYTE(v16) & 0xF | (16 * ((v16 >> 60) & 7));
        v18 = HIBYTE(v16) & 0xF;
        v19 = (HIBYTE(v16) & 0xF) == 8;
        v63 = v19;
      }
      else
      {
        v40 = *(_QWORD *)v8;
        if ( (unsigned int)MiPteInShadowRange(v8, 0xFFFFF6FB7DBED7F8uLL)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v40 & 1) != 0
          && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Process )
          {
            v41 = *(_QWORD *)(Process + 8 * ((v64 >> 3) & 0x1FF));
            Process = v40 | 0x20;
            if ( (v41 & 0x20) == 0 )
              Process = v40;
            v40 = Process;
            if ( (v41 & 0x42) != 0 )
              v40 = Process | 0x42;
          }
        }
        v19 = v63;
        v17 = (_BYTE *)(48 * ((v40 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
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
              v45 = *((_QWORD *)&Flink->Flink + ((v20 >> 3) & 0x1FF));
              v20 = v21 | 0x20;
              if ( (v45 & 0x20) == 0 )
                v20 = v21;
              v21 = v20;
              if ( (v45 & 0x42) != 0 )
                v21 = v20 | 0x42;
            }
          }
          v66 = v21;
          if ( (unsigned int)MiPteInShadowRange(&v66, v20)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v21 & 1) != 0
            && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            v46 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v46 )
            {
              v47 = *((_QWORD *)&v46->Flink + (((unsigned __int64)&v66 >> 3) & 0x1FF));
              v48 = v21 | 0x20;
              if ( (v47 & 0x20) == 0 )
                v48 = v21;
              v21 = v48;
              if ( (v47 & 0x42) != 0 )
                v21 = v48 | 0x42;
            }
          }
          Process = 48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          a3 = *(_QWORD *)Process;
          v22 = (*(_QWORD *)Process >> 14) & 7;
          if ( ((*(_QWORD *)Process >> 4) & 0x3FF) != 0 )
          {
            if ( v18 == v22 )
            {
              *(_QWORD *)Process = a3 ^ ((unsigned __int16)a3 ^ (unsigned __int16)(16
                                                                                 * (((*(_QWORD *)Process >> 4) & 0x3FF)
                                                                                  - 1))) & 0x3FF0;
            }
            else if ( v18 > v22 )
            {
              *(_QWORD *)Process = a3 ^ ((unsigned int)a3 ^ (v18 << 14)) & 0x1C000 | 0x3FF0;
            }
          }
          v10 = v60;
        }
        --*(_QWORD *)(a1 + 8LL * v18 + 40);
        if ( v18 == 7 )
          MiVolunteerForTrimFirst(a1, -1LL);
      }
      v23 = a4;
      if ( (unsigned __int8)(a4 - 1) <= 5u
        && (MI_READ_PTE_LOCK_FREE(v64) & 0x20) != 0
        && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 624)) )
      {
        v23 = 0;
      }
      if ( v17 )
      {
        *(_QWORD *)v17 ^= ((unsigned __int8)*(_QWORD *)v17 ^ (unsigned __int8)(2 * v23)) & 0xE;
      }
      else
      {
        a3 = v64;
        v7 ^= (v23 ^ v7) & 0xF;
        v24 = *(_QWORD *)v64;
        Process = (unsigned __int64)(v7 & 0x7F) << 56;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v64,
                  Process | v24 & 0x80FFFFFFFFFFFFFFuLL,
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
            v49 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v49 )
            {
              v50 = *((_QWORD *)&v49->Flink + ((v26 >> 3) & 0x1FF));
              v26 = v27 | 0x20;
              if ( (v50 & 0x20) == 0 )
                v26 = v27;
              v27 = v26;
              if ( (v50 & 0x42) != 0 )
                v27 = v26 | 0x42;
            }
          }
          v67 = v27;
          if ( (unsigned int)MiPteInShadowRange(&v67, v26)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v27 & 1) != 0
            && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
          {
            v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v51 )
            {
              v52 = *((_QWORD *)&v51->Flink + (((unsigned __int64)&v67 >> 3) & 0x1FF));
              v53 = v27 | 0x20;
              if ( (v52 & 0x20) == 0 )
                v53 = v27;
              v27 = v53;
              if ( (v52 & 0x42) != 0 )
                v27 = v53 | 0x42;
            }
          }
          Process = 48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          a3 = *(_QWORD *)Process;
          v28 = (*(_QWORD *)Process >> 14) & 7;
          if ( ((*(_QWORD *)Process >> 4) & 0x3FF) != 0 )
          {
            if ( v23 == v28 )
            {
              *(_QWORD *)Process = a3 ^ ((unsigned __int16)a3 ^ (unsigned __int16)(16
                                                                                 * (((*(_QWORD *)Process >> 4) & 0x3FF)
                                                                                  + 1))) & 0x3FF0;
            }
            else if ( v23 > v28 )
            {
              a3 &= 0xFFFFFFFFFFFE001FuLL;
              *(_QWORD *)Process = a3 | ((unsigned __int64)(v23 & 7) << 14) | 0x10;
            }
          }
          v10 = v60;
        }
        ++*(_QWORD *)(a1 + 8LL * v23 + 40);
        if ( v23 == 7 )
          MiVolunteerForTrimFirst(a1, 1LL);
      }
      v29 = v62-- == 1;
      v8 = v64;
      if ( v29 )
        break;
      Process = 0xFFFFF6FB7DBED7F8uLL;
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
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle, Process, a3, v8);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_47:
  v31 = KeGetCurrentPrcb();
  v32 = v31->SchedulerAssist;
  if ( v32 )
  {
    if ( v31->NestingLevel <= 1u )
    {
      v54 = v32[6] - 1;
      v32[6] = v54;
      if ( !v54 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  if ( v10 )
  {
    v33 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v34 = *(_QWORD *)v33;
    if ( v33 >= 0xFFFFF6FB7DBED000uLL
      && v33 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v34 & 1) != 0
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v55 )
      {
        v56 = *((_QWORD *)&v55->Flink + ((v33 >> 3) & 0x1FF));
        v33 = v34 | 0x20;
        if ( (v56 & 0x20) == 0 )
          v33 = v34;
        v34 = v33;
        if ( (v56 & 0x42) != 0 )
          v34 = v33 | 0x42;
      }
    }
    v68 = v34;
    if ( (unsigned int)MiPteInShadowRange(&v68, v33) )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        v35 = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(v35 + 912) != 1 && (v34 & 1) != 0 && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
        {
          v35 = (__int64)KeGetCurrentThread()->ApcState.Process;
          v57 = *(_QWORD *)(v35 + 1928);
          if ( v57 )
          {
            v58 = *(_QWORD *)(v57 + 8 * (((unsigned __int64)&v68 >> 3) & 0x1FF));
            v59 = v34 | 0x20;
            v35 = (unsigned __int8)v58;
            LOBYTE(v35) = v58 & 0x20;
            if ( (v58 & 0x20) == 0 )
              v59 = v34;
            v34 = v59;
            if ( (v58 & 0x42) != 0 )
              v34 = v59 | 0x42;
          }
        }
      }
    }
    v36 = (unsigned __int64 *)(48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    if ( ((*(_DWORD *)v36 >> 4) & 0x3FF) == 0 )
    {
      MiCountWslesInPageTable(v35, a2, v69);
      v38 = 8;
      while ( 1 )
      {
        v39 = *((_DWORD *)v69 + (unsigned __int8)--v38);
        if ( v39 )
          break;
        if ( !v38 )
          return 1LL;
      }
      *v36 = *v36 & 0xFFFFFFFFFFFE000FuLL | (16 * (v39 & 0x3FF | ((unsigned __int64)(v38 & 7) << 10)));
    }
  }
  return 1LL;
}
