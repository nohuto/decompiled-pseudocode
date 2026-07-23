/*
 * XREFs of MiAgePte @ 0x140344190
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     MiIsPageTableLocked @ 0x14023B6D8 (MiIsPageTableLocked.c)
 *     MiAgeWorkingSetTail @ 0x1402D2CB0 (MiAgeWorkingSetTail.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x1403446E0 (MiAgePteWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiInsertVmAccessedEntry @ 0x14053B640 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  int v10; // r14d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  __int64 v13; // rbx
  volatile signed __int64 *v14; // rbp
  char v15; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v18; // eax
  _QWORD *v19; // rdx
  __int64 v20; // r14
  unsigned __int64 v21; // rbp
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _LIST_ENTRY *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  unsigned __int64 i; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  int v42; // r8d
  __int64 v43; // [rsp+30h] [rbp-68h] BYREF
  volatile signed __int64 *v44; // [rsp+38h] [rbp-60h]
  __int64 v45; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v50; // [rsp+B8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a1;
  v7 = *(_QWORD *)(v5 + 16);
  if ( *(_BYTE *)(v3 + 6) == 1 )
  {
    *(_BYTE *)(v3 + 6) = 0;
    v7 = *(_QWORD *)(v5 + 16);
    v8 = *(_QWORD *)(v5 + 136);
    v9 = *(_QWORD *)(v7 + 32);
    if ( v8 <= v9 )
      return 3LL;
    v10 = *(_DWORD *)v3;
    v11 = v8 - v9;
    v12 = *(unsigned int *)(v3 + 12);
    v13 = 0LL;
    if ( (*(_DWORD *)v3 & 4) != 0 )
    {
LABEL_30:
      v26 = v12 * (v13 + v11) / 0x3E8;
      if ( v26 > v11 )
        v26 = v11 * v12 / 0x3E8;
      *(_QWORD *)(v3 + 48) = v26;
      if ( *(_QWORD *)(v3 + 40) < v26 )
      {
        v4 = a2;
        v6 = a1;
        goto LABEL_34;
      }
      return 3LL;
    }
    v14 = (volatile signed __int64 *)&unk_140C4F800;
    v15 = *(_BYTE *)(v5 + 184) & 7;
    v45 = 0LL;
    if ( v15 != 2 )
      v14 = (volatile signed __int64 *)(v5 + 256);
    v44 = v14;
    v43 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[6];
        SchedulerAssist[6] = v18 + 1;
        if ( v18 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v43, v14);
    }
    else
    {
      v19 = (_QWORD *)_InterlockedExchange64(v14, (__int64)&v43);
      if ( v19 )
        KxWaitForLockOwnerShip((__int64)&v43, v19);
    }
    if ( (v10 & 2) != 0 )
    {
      v20 = *(unsigned int *)(v7 + 24);
      v21 = v20 + v11;
      *(_DWORD *)(v7 + 24) = (v20 + v11) % v12;
    }
    else
    {
      v20 = *(unsigned int *)(v7 + 28);
      v21 = v20 + v11;
      *(_DWORD *)(v7 + 28) = (v20 + v11) % v12;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v43, retaddr);
      goto LABEL_23;
    }
    _m_prefetchw(&v43);
    v22 = v43;
    if ( !v43 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v44, 0LL, (signed __int64)&v43) == &v43 )
        goto LABEL_23;
      v22 = KxWaitForLockChainValid(&v43);
    }
    v43 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
LABEL_23:
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v25 = v24[6] - 1;
        v24[6] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    if ( v21 < v11 )
      v20 = 0LL;
    v13 = v20;
    goto LABEL_30;
  }
LABEL_34:
  v27 = v4 << 25 >> 16;
  v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = *(_QWORD *)v28;
  if ( v28 >= 0xFFFFF6FB7DBED000uLL
    && v28 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v31 = *((_QWORD *)&Flink->Flink + ((v28 >> 3) & 0x1FF));
      v32 = v29 | 0x20;
      if ( (v31 & 0x20) == 0 )
        v32 = *(_QWORD *)v28;
      v29 = v32;
      if ( (v31 & 0x42) != 0 )
        v29 = v32 | 0x42;
    }
  }
  v50 = v29;
  if ( (unsigned int)MiPteInShadowRange(&v50)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v33 )
    {
      v34 = *((_QWORD *)&v33->Flink + (((unsigned __int64)&v50 >> 3) & 0x1FF));
      v35 = v29 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v35 = v29;
      v29 = v35;
      if ( (v34 & 0x42) != 0 )
        v29 = v35 | 0x42;
    }
  }
  v36 = (_QWORD *)(48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a3 )
  {
    v37 = (__int64)((v28 << 25) + 0x10000000) >> 16;
    for ( i = v37 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v37 = i;
    }
  }
  else
  {
    v37 = v28 + 8;
  }
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    *(_QWORD *)(v7 + 16) = v37;
  }
  else if ( (*(_DWORD *)v3 & 4) == 0 )
  {
    *(_QWORD *)(v7 + 8) = v37;
  }
  if ( !a3
    || (v36[3] & 0x3FFFFFFFFFFFFFFFLL) == 1
    && !(unsigned int)MiIsPageTableLocked(v5, ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    if ( (v36[5] & 0x1000000000LL) == 0 )
    {
      v39 = v36[1];
      if ( v39 > 0
        && (unsigned int)MiDemoteCombinedPte(
                           v5,
                           ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                           v39 | 0x8000000000000000uLL) == 1 )
      {
        v50 = MI_READ_PTE_LOCK_FREE(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
    }
    if ( ((v50 >> 5) & 1) != 0 && (v40 = *(_QWORD *)(v3 + 248)) != 0 && v27 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v40, v27) )
        return MiAgeWorkingSetTail(v6);
    }
    else
    {
      v42 = (v50 >> 5) & 1 | 2;
      if ( (*(_DWORD *)v3 & 3) == 0 )
        v42 = (v50 >> 5) & 1;
      MiAgePteWorker(v5, (v27 >> 9) & 0xFFFFFFF8, v27, (_DWORD)v36, v3, v42);
    }
    if ( ++*(_QWORD *)(v3 + 40) >= *(_QWORD *)(v3 + 48) )
      return 3LL;
  }
  return 0LL;
}
