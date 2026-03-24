/*
 * XREFs of MiAgePte @ 0x140339440
 * Callers:
 *     <none>
 * Callees:
 *     MiAgeWorkingSetTail @ 0x14022E460 (MiAgeWorkingSetTail.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     MiIsPageTableLocked @ 0x1402BD028 (MiIsPageTableLocked.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x140339990 (MiAgePteWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDemoteCombinedPte @ 0x14036B260 (MiDemoteCombinedPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiInsertVmAccessedEntry @ 0x14053B400 (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  int v11; // r14d
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r12
  __int64 v14; // rbx
  volatile signed __int64 *v15; // rbp
  char v16; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v19; // eax
  _QWORD *v20; // rdx
  __int64 v21; // r14
  unsigned __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 Flink; // rdx
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
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
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v50; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v51; // [rsp+B8h] [rbp+20h] BYREF

  v50 = a3;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = a1;
  v8 = *(_QWORD *)(v6 + 16);
  if ( *(_BYTE *)(v4 + 6) == 1 )
  {
    *(_BYTE *)(v4 + 6) = 0;
    v8 = *(_QWORD *)(v6 + 16);
    v9 = *(_QWORD *)(v6 + 136);
    v10 = *(_QWORD *)(v8 + 32);
    if ( v9 <= v10 )
      return 3LL;
    v11 = *(_DWORD *)v4;
    v12 = v9 - v10;
    v13 = *(unsigned int *)(v4 + 12);
    v14 = 0LL;
    if ( (*(_DWORD *)v4 & 4) != 0 )
    {
LABEL_30:
      v28 = v13 * (v14 + v12) / 0x3E8;
      if ( v28 > v12 )
        v28 = v12 * v13 / 0x3E8;
      *(_QWORD *)(v4 + 48) = v28;
      if ( *(_QWORD *)(v4 + 40) < v28 )
      {
        v5 = a2;
        v7 = a1;
        goto LABEL_34;
      }
      return 3LL;
    }
    v15 = (volatile signed __int64 *)&unk_140C4F7C0;
    v16 = *(_BYTE *)(v6 + 184) & 7;
    v46 = 0LL;
    if ( v16 != 2 )
      v15 = (volatile signed __int64 *)(v6 + 256);
    v45 = v15;
    v44 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[6];
        SchedulerAssist[6] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v44, v15);
    }
    else
    {
      v20 = (_QWORD *)_InterlockedExchange64(v15, (__int64)&v44);
      if ( v20 )
        KxWaitForLockOwnerShip((__int64)&v44, v20);
    }
    if ( (v11 & 2) != 0 )
    {
      v21 = *(unsigned int *)(v8 + 24);
      v22 = v21 + v12;
      v23 = (v21 + v12) % v13;
      *(_DWORD *)(v8 + 24) = v23;
    }
    else
    {
      v21 = *(unsigned int *)(v8 + 28);
      v22 = v21 + v12;
      v23 = (v21 + v12) % v13;
      *(_DWORD *)(v8 + 28) = v23;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v44, retaddr);
      goto LABEL_23;
    }
    _m_prefetchw(&v44);
    v24 = v44;
    if ( !v44 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v45, 0LL, (signed __int64)&v44) == &v44 )
        goto LABEL_23;
      v24 = KxWaitForLockChainValid(&v44, v23, a3, a4);
    }
    v44 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v24 + 8), 1uLL);
LABEL_23:
    v25 = KeGetCurrentPrcb();
    v26 = v25->SchedulerAssist;
    if ( v26 )
    {
      if ( v25->NestingLevel <= 1u )
      {
        v27 = v26[6] - 1;
        v26[6] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    if ( v22 < v12 )
      v21 = 0LL;
    v14 = v21;
    goto LABEL_30;
  }
LABEL_34:
  Flink = 0xFFFFF68000000000uLL;
  v30 = v5 << 25 >> 16;
  v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = *(_QWORD *)v31;
  if ( v31 >= 0xFFFFF6FB7DBED000uLL
    && v31 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v32 & 1) != 0
    && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
  {
    Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v33 = *(_QWORD *)(Flink + 8 * ((v31 >> 3) & 0x1FF));
      Flink = v32 | 0x20;
      if ( (v33 & 0x20) == 0 )
        Flink = *(_QWORD *)v31;
      v32 = Flink;
      if ( (v33 & 0x42) != 0 )
        v32 = Flink | 0x42;
    }
  }
  v51 = v32;
  if ( (unsigned int)MiPteInShadowRange(&v51, Flink)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v32 & 1) != 0
    && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
  {
    v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v34 )
    {
      v35 = *((_QWORD *)&v34->Flink + (((unsigned __int64)&v51 >> 3) & 0x1FF));
      v36 = v32 | 0x20;
      if ( (v35 & 0x20) == 0 )
        v36 = v32;
      v32 = v36;
      if ( (v35 & 0x42) != 0 )
        v32 = v36 | 0x42;
    }
  }
  v37 = (_QWORD *)(48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( v50 )
  {
    v38 = (__int64)((v31 << 25) + 0x10000000) >> 16;
    for ( i = v38 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v38 = i;
    }
  }
  else
  {
    v38 = v31 + 8;
  }
  if ( (*(_DWORD *)v4 & 2) != 0 )
  {
    *(_QWORD *)(v8 + 16) = v38;
  }
  else if ( (*(_DWORD *)v4 & 4) == 0 )
  {
    *(_QWORD *)(v8 + 8) = v38;
  }
  if ( !v50
    || (v37[3] & 0x3FFFFFFFFFFFFFFFLL) == 1
    && !(unsigned int)MiIsPageTableLocked(v6, ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    if ( (v37[5] & 0x1000000000LL) == 0 )
    {
      v40 = v37[1];
      if ( v40 > 0
        && (unsigned int)MiDemoteCombinedPte(
                           v6,
                           ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                           v40 | 0x8000000000000000uLL) == 1 )
      {
        v51 = MI_READ_PTE_LOCK_FREE(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
    }
    if ( ((v51 >> 5) & 1) != 0 && (v41 = *(_QWORD *)(v4 + 248)) != 0 && v30 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v41, v30) )
        return MiAgeWorkingSetTail(v7);
    }
    else
    {
      v43 = (v51 >> 5) & 1 | 2;
      if ( (*(_DWORD *)v4 & 3) == 0 )
        v43 = (v51 >> 5) & 1;
      MiAgePteWorker(v6, (v30 >> 9) & 0xFFFFFFF8, v30, (_DWORD)v37, v4, v43);
    }
    if ( ++*(_QWORD *)(v4 + 40) >= *(_QWORD *)(v4 + 48) )
      return 3LL;
  }
  return 0LL;
}
