/*
 * XREFs of MiInsertPartitionPages @ 0x140562780
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1408DB3DC (MiHotAddPartitionMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiIncreaseCommitLimits @ 0x1403BFBD8 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x1403BFCEC (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReduceCommitLimits @ 0x14055087C (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x140561694 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x140562524 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14056257C (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x140562D24 (MiMergePageNodes.c)
 *     RtlNumberOfSetBitsEx @ 0x1405880E0 (RtlNumberOfSetBitsEx.c)
 *     MiMakePartitionMemoryBlock @ 0x1408DB6E0 (MiMakePartitionMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertPartitionPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 *v5; // r13
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v9; // rsi
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // rcx
  int v17; // r8d
  unsigned int v18; // esi
  __m128i v19; // xmm2
  unsigned __int64 v20; // rdi
  int v21; // ecx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // r15
  _QWORD *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 *v28; // rax
  unsigned __int64 *v29; // rbx
  volatile LONG *v30; // rdi
  unsigned __int64 *v31; // r13
  __int64 v32; // rax
  unsigned __int64 *v33; // rcx
  unsigned __int64 v34; // r12
  unsigned __int64 *v35; // rdx
  unsigned __int64 v36; // rdi
  int v37; // r15d
  int v38; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  bool v43; // zf
  int v44; // r8d
  _QWORD *v45; // rdx
  bool v46; // r8
  _QWORD *v47; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  unsigned __int64 *v53; // rax
  unsigned __int64 *v54; // rbx
  unsigned __int64 *v55; // rax
  unsigned __int64 *v56; // rdi
  unsigned __int64 *v57; // rcx
  unsigned __int64 *v59; // [rsp+30h] [rbp-71h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int128 v61; // [rsp+50h] [rbp-51h] BYREF
  __int128 v62; // [rsp+60h] [rbp-41h]
  __int128 v63; // [rsp+70h] [rbp-31h]
  __int64 v64; // [rsp+80h] [rbp-21h]
  __int128 v65; // [rsp+88h] [rbp-19h] BYREF
  __int128 v66; // [rsp+98h] [rbp-9h]
  __int128 v67; // [rsp+A8h] [rbp+7h]
  __int64 v68; // [rsp+B8h] [rbp+17h]
  int v69; // [rsp+100h] [rbp+5Fh]
  __int64 v70; // [rsp+108h] [rbp+67h]
  _QWORD *v71; // [rsp+110h] [rbp+6Fh] BYREF

  v5 = *(unsigned __int64 **)a3;
  v69 = 0;
  v71 = 0LL;
  v61 = 0LL;
  v64 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v9 = a2;
  v68 = 0LL;
  v11 = *(_DWORD *)(a3 + 24);
  v70 = (__int64)CurrentThread;
  v61 = __PAIR128__(a1, a2);
  v59 = v5;
  v62 = 0LL;
  v63 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( (v11 & 2) != 0 )
  {
    v12 = (_QWORD *)*v5;
    v13 = 0LL;
    while ( v12 )
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
    }
    while ( v13 )
    {
      v14 = (_QWORD *)v13[1];
      v15 = (__int64)v13;
      v16 = v13;
      if ( v14 )
      {
        do
        {
          v13 = v14;
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
      }
      else
      {
        while ( 1 )
        {
          v13 = (_QWORD *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v13 || (_QWORD *)*v13 == v16 )
            break;
          v16 = v13;
        }
      }
      MiActOnPartitionNodePages(v15, 8u, (__int16 **)&v61);
    }
    CurrentThread = (struct _KTHREAD *)v70;
  }
  if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      _InterlockedExchangeAdd64(&qword_140C4E690, a4);
    }
    else
    {
      MiClearPartitionPageBitMap(a1, (_QWORD **)v5);
      MiReduceCommitLimits((_QWORD *)a1, a4, a4);
      MiReturnCommit(a1, a4);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
      MiMakePartitionMemoryBlock(a1);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 192);
      KeAbPostRelease(a1 + 192);
      CurrentThread = (struct _KTHREAD *)v70;
      KiLeaveGuardedRegionUnsafe(v70);
    }
  }
  if ( (ULONG_PTR *)v9 == &MiSystemPartition )
  {
    v17 = *(_DWORD *)(a3 + 24);
    if ( (v17 & 0x10) == 0 )
      _InterlockedExchangeAdd64(&qword_140C4E690, -(__int64)a4);
    v69 = MiFreePartitionTree(v9, v5, v17, 1);
    v18 = v69;
    if ( v69 >= 0 )
      goto LABEL_91;
    v19 = (__m128i)v61;
    *(_DWORD *)(a3 + 24) &= ~4u;
    v20 = 0LL;
    v21 = *(_DWORD *)(a3 + 24);
    v9 = a1;
    v22 = (_QWORD *)*v5;
    v23 = 0LL;
    *((_QWORD *)&v65 + 1) = v19.m128i_i64[0];
    v66 = v62;
    *(_QWORD *)&v65 = _mm_srli_si128(v19, 8).m128i_u64[0];
    v67 = v63;
    v68 = v64;
    while ( v22 )
    {
      v23 = v22;
      v22 = (_QWORD *)*v22;
    }
    while ( v23 )
    {
      v24 = (_QWORD *)v23[1];
      v25 = (__int64)v23;
      v26 = v23;
      if ( v24 )
      {
        do
        {
          v23 = v24;
          v24 = (_QWORD *)*v24;
        }
        while ( v24 );
      }
      else
      {
        while ( 1 )
        {
          v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v23 || (_QWORD *)*v23 == v26 )
            break;
          v26 = v23;
        }
      }
      v27 = RtlNumberOfSetBitsEx(v25 + 32);
      v21 = *(_DWORD *)(a3 + 24);
      v20 += v27;
      if ( (v21 & 2) != 0 )
      {
        MiActOnPartitionNodePages(v25, 8u, (__int16 **)&v65);
        v21 = *(_DWORD *)(a3 + 24);
      }
    }
    CurrentThread = (struct _KTHREAD *)v70;
    if ( (v21 & 0x10) == 0 )
      _InterlockedExchangeAdd64(&qword_140C4E690, v20);
  }
  if ( !v9 )
    goto LABEL_90;
  if ( !a5 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 192, 0LL);
  }
  v28 = (unsigned __int64 *)*v5;
  v29 = 0LL;
  while ( v28 )
  {
    v29 = v28;
    v28 = (unsigned __int64 *)*v28;
  }
  if ( !v29 )
    goto LABEL_75;
  v30 = (volatile LONG *)(v9 + 200);
  do
  {
    v31 = v29;
    v32 = RtlNumberOfSetBitsEx(v29 + 4);
    v33 = (unsigned __int64 *)v29[1];
    v34 = v32;
    v35 = v29;
    if ( v33 )
    {
      do
      {
        v29 = v33;
        v33 = (unsigned __int64 *)*v33;
      }
      while ( v33 );
    }
    else
    {
      while ( 1 )
      {
        v29 = (unsigned __int64 *)(v29[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v29 || (unsigned __int64 *)*v29 == v35 )
          break;
        v35 = v29;
      }
    }
    v36 = ExAcquireSpinLockExclusive(v30);
    RtlAvlRemoveNode(v59, v31);
    if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    {
      v37 = 1;
    }
    else
    {
      v38 = MiMergePageNodes(v9, v31);
      *(_QWORD *)(v9 + 6928) += v34;
      v37 = v38;
      *(_BYTE *)(v9 + 12) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 200));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v36 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
          v43 = (v42 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v42;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v36);
    v44 = *(_DWORD *)(a3 + 24);
    if ( (v44 & 0x10) == 0 )
    {
      MiIncreaseCommitLimits(v9, v34, v34, 1, 0LL);
      v44 = *(_DWORD *)(a3 + 24);
    }
    MiFreePartitionNodePages(v9, (__int64)v31, v44);
    if ( v37 != 1 )
      goto LABEL_74;
    v45 = v71;
    v46 = 0;
    if ( !v71 )
      goto LABEL_73;
    while ( (v31[3] & 0x7FFFFFFFFFFFFFFFLL) >= (v45[3] & 0x7FFFFFFFFFFFFFFFuLL) )
    {
      v47 = (_QWORD *)v45[1];
      if ( !v47 )
      {
        v46 = 1;
        goto LABEL_73;
      }
LABEL_71:
      v45 = v47;
    }
    v47 = (_QWORD *)*v45;
    if ( *v45 )
      goto LABEL_71;
    v46 = 0;
LABEL_73:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v71, (unsigned __int64)v45, v46, v31);
LABEL_74:
    v30 = (volatile LONG *)(v9 + 200);
  }
  while ( v29 );
LABEL_75:
  if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
    MiMakePartitionMemoryBlock(v9);
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 192);
    KeAbPostRelease(v9 + 192);
    KiLeaveGuardedRegionUnsafe(v70);
  }
  if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 6248), &LockHandle);
    MiComputeCommitThresholds((_QWORD *)v9);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v52 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v43 = (v52 & v51[5]) == 0;
          v51[5] &= v52;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick((__int64)v50);
        }
      }
    }
    __writecr8(OldIrql);
  }
LABEL_90:
  v18 = v69;
LABEL_91:
  v53 = v71;
  v54 = 0LL;
  while ( v53 )
  {
    v54 = v53;
    v53 = (unsigned __int64 *)*v53;
  }
  while ( v54 )
  {
    v55 = (unsigned __int64 *)v54[1];
    v56 = v54;
    v57 = v54;
    if ( v55 )
    {
      do
      {
        v54 = v55;
        v55 = (unsigned __int64 *)*v55;
      }
      while ( v55 );
    }
    else
    {
      while ( 1 )
      {
        v54 = (unsigned __int64 *)(v54[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v54 || (unsigned __int64 *)*v54 == v57 )
          break;
        v57 = v54;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v71, v56);
    ExFreePoolWithTag((PVOID)v56[5], 0);
    ExFreePoolWithTag(v56, 0);
  }
  return v18;
}
