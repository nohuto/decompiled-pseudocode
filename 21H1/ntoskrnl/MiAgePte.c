/*
 * XREFs of MiAgePte @ 0x14029D580
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     MiAgeWorkingSetTail @ 0x140279300 (MiAgeWorkingSetTail.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiAgePteWorker @ 0x14029DAD0 (MiAgePteWorker.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiIsPageTableLocked @ 0x1402F2A1C (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x140368610 (MiDemoteCombinedPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiInsertVmAccessedEntry @ 0x1405358E0 (MiInsertVmAccessedEntry.c)
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
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // eax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  struct _LIST_ENTRY *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  unsigned __int64 i; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  int v43; // r8d
  __int64 v44; // [rsp+30h] [rbp-68h] BYREF
  volatile signed __int64 *v45; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int64 v51; // [rsp+B8h] [rbp+20h] BYREF

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
      v27 = v12 * (v13 + v11) / 0x3E8;
      if ( v27 > v11 )
        v27 = v11 * v12 / 0x3E8;
      *(_QWORD *)(v3 + 48) = v27;
      if ( *(_QWORD *)(v3 + 40) < v27 )
      {
        v4 = a2;
        v6 = a1;
        goto LABEL_34;
      }
      return 3LL;
    }
    v14 = (volatile signed __int64 *)&unk_140C4F700;
    v15 = *(_BYTE *)(v5 + 184) & 7;
    v46 = 0LL;
    if ( v15 != 2 )
      v14 = (volatile signed __int64 *)(v5 + 256);
    v45 = v14;
    v44 = 0LL;
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
      KiAcquireQueuedSpinLockInstrumented(&v44, v14);
    }
    else
    {
      v19 = (_QWORD *)_InterlockedExchange64(v14, (__int64)&v44);
      if ( v19 )
        KxWaitForLockOwnerShip((__int64)&v44, v19);
    }
    if ( (v10 & 2) != 0 )
    {
      v20 = *(unsigned int *)(v7 + 24);
      v21 = v20 + v11;
      v22 = (v20 + v11) % v12;
      *(_DWORD *)(v7 + 24) = v22;
    }
    else
    {
      v20 = *(unsigned int *)(v7 + 28);
      v21 = v20 + v11;
      v22 = (v20 + v11) % v12;
      *(_DWORD *)(v7 + 28) = v22;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v44, retaddr);
      goto LABEL_23;
    }
    _m_prefetchw(&v44);
    v23 = v44;
    if ( !v44 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v45, 0LL, (signed __int64)&v44) == &v44 )
        goto LABEL_23;
      v23 = KxWaitForLockChainValid(&v44, v22);
    }
    v44 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v23 + 8), 1uLL);
LABEL_23:
    v24 = KeGetCurrentPrcb();
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v26 = v25[6] - 1;
        v25[6] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    if ( v21 < v11 )
      v20 = 0LL;
    v13 = v20;
    goto LABEL_30;
  }
LABEL_34:
  v28 = v4 << 25 >> 16;
  v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30 = *(_QWORD *)v29;
  if ( v29 >= 0xFFFFF6FB7DBED000uLL
    && v29 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v30 & 1) != 0
    && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v32 = *((_QWORD *)&Flink->Flink + ((v29 >> 3) & 0x1FF));
      v33 = v30 | 0x20;
      if ( (v32 & 0x20) == 0 )
        v33 = *(_QWORD *)v29;
      v30 = v33;
      if ( (v32 & 0x42) != 0 )
        v30 = v33 | 0x42;
    }
  }
  v51 = v30;
  if ( MiPteInShadowRange((unsigned __int64)&v51)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v30 & 1) != 0
    && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
  {
    v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v34 )
    {
      v35 = *((_QWORD *)&v34->Flink + (((unsigned __int64)&v51 >> 3) & 0x1FF));
      v36 = v30 | 0x20;
      if ( (v35 & 0x20) == 0 )
        v36 = v30;
      v30 = v36;
      if ( (v35 & 0x42) != 0 )
        v30 = v36 | 0x42;
    }
  }
  v37 = (_QWORD *)(48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( a3 )
  {
    v38 = (__int64)((v29 << 25) + 0x10000000) >> 16;
    for ( i = v38 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v38 = i;
    }
  }
  else
  {
    v38 = v29 + 8;
  }
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    *(_QWORD *)(v7 + 16) = v38;
  }
  else if ( (*(_DWORD *)v3 & 4) == 0 )
  {
    *(_QWORD *)(v7 + 8) = v38;
  }
  if ( !a3
    || (v37[3] & 0x3FFFFFFFFFFFFFFFLL) == 1
    && !(unsigned int)MiIsPageTableLocked(v5, ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    if ( (v37[5] & 0x1000000000LL) == 0 )
    {
      v40 = v37[1];
      if ( v40 > 0
        && (unsigned int)MiDemoteCombinedPte(
                           v5,
                           ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                           v40 | 0x8000000000000000uLL) == 1 )
      {
        v51 = MI_READ_PTE_LOCK_FREE(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
    }
    if ( ((v51 >> 5) & 1) != 0 && (v41 = *(_QWORD *)(v3 + 248)) != 0 && v28 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v41, v28) )
        return MiAgeWorkingSetTail(v6);
    }
    else
    {
      v43 = (v51 >> 5) & 1 | 2;
      if ( (*(_DWORD *)v3 & 3) == 0 )
        v43 = (v51 >> 5) & 1;
      MiAgePteWorker(v5, (v28 >> 9) & 0xFFFFFFF8, v28, (_DWORD)v37, v3, v43);
    }
    if ( ++*(_QWORD *)(v3 + 40) >= *(_QWORD *)(v3 + 48) )
      return 3LL;
  }
  return 0LL;
}
