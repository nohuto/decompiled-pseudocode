/*
 * XREFs of MiInsertPartitionPages @ 0x14055CA50
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408D6028 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1408D692C (MiHotAddPartitionMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiIncreaseCommitLimits @ 0x1403BB7B8 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x1403BB8CC (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReduceCommitLimits @ 0x14054AB4C (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x14055ADB0 (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x14055B964 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x14055C7F4 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14055C84C (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x14055CFF4 (MiMergePageNodes.c)
 *     RtlNumberOfSetBitsEx @ 0x140582410 (RtlNumberOfSetBitsEx.c)
 *     MiMakePartitionMemoryBlock @ 0x1408D6C30 (MiMakePartitionMemoryBlock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r8d
  unsigned int v21; // esi
  __m128i v22; // xmm2
  unsigned __int64 v23; // rdi
  int v24; // ecx
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v27; // rax
  __int64 v28; // r15
  _QWORD *v29; // rcx
  __int64 v30; // rax
  unsigned __int64 *v31; // rax
  unsigned __int64 *v32; // rbx
  volatile LONG *v33; // rdi
  unsigned __int64 *v34; // r13
  __int64 v35; // rax
  unsigned __int64 *v36; // rcx
  unsigned __int64 v37; // r12
  unsigned __int64 *v38; // rdx
  unsigned __int64 v39; // rdi
  int v40; // r15d
  int v41; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  bool v46; // zf
  int v47; // r8d
  _QWORD *v48; // rdx
  bool v49; // r8
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  unsigned __int64 *v59; // rax
  unsigned __int64 *v60; // rbx
  unsigned __int64 *v61; // rax
  unsigned __int64 *v62; // rdi
  unsigned __int64 *v63; // rcx
  unsigned __int64 *v65; // [rsp+30h] [rbp-71h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int128 v67; // [rsp+50h] [rbp-51h] BYREF
  __int128 v68; // [rsp+60h] [rbp-41h]
  __int128 v69; // [rsp+70h] [rbp-31h]
  __int64 v70; // [rsp+80h] [rbp-21h]
  __int128 v71; // [rsp+88h] [rbp-19h] BYREF
  __int128 v72; // [rsp+98h] [rbp-9h]
  __int128 v73; // [rsp+A8h] [rbp+7h]
  __int64 v74; // [rsp+B8h] [rbp+17h]
  int v75; // [rsp+100h] [rbp+5Fh]
  __int64 v76; // [rsp+108h] [rbp+67h]
  _QWORD *v77; // [rsp+110h] [rbp+6Fh] BYREF

  v5 = *(unsigned __int64 **)a3;
  v75 = 0;
  v77 = 0LL;
  v67 = 0LL;
  v70 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v9 = a2;
  v74 = 0LL;
  v11 = *(_DWORD *)(a3 + 24);
  v76 = (__int64)CurrentThread;
  v67 = __PAIR128__(a1, a2);
  v65 = v5;
  v68 = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
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
      MiActOnPartitionNodePages(v15, 8u, (__int16 **)&v67);
    }
    CurrentThread = (struct _KTHREAD *)v76;
  }
  if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      _InterlockedExchangeAdd64(&qword_140C4E590, a4);
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
      CurrentThread = (struct _KTHREAD *)v76;
      KiLeaveGuardedRegionUnsafe(v76, v17, v18, v19);
    }
  }
  if ( (ULONG_PTR *)v9 == &MiSystemPartition )
  {
    v20 = *(_DWORD *)(a3 + 24);
    if ( (v20 & 0x10) == 0 )
      _InterlockedExchangeAdd64(&qword_140C4E590, -(__int64)a4);
    v75 = MiFreePartitionTree(v9, v5, v20, 1);
    v21 = v75;
    if ( v75 >= 0 )
      goto LABEL_91;
    v22 = (__m128i)v67;
    *(_DWORD *)(a3 + 24) &= ~4u;
    v23 = 0LL;
    v24 = *(_DWORD *)(a3 + 24);
    v9 = a1;
    v25 = (_QWORD *)*v5;
    v26 = 0LL;
    *((_QWORD *)&v71 + 1) = v22.m128i_i64[0];
    v72 = v68;
    *(_QWORD *)&v71 = _mm_srli_si128(v22, 8).m128i_u64[0];
    v73 = v69;
    v74 = v70;
    while ( v25 )
    {
      v26 = v25;
      v25 = (_QWORD *)*v25;
    }
    while ( v26 )
    {
      v27 = (_QWORD *)v26[1];
      v28 = (__int64)v26;
      v29 = v26;
      if ( v27 )
      {
        do
        {
          v26 = v27;
          v27 = (_QWORD *)*v27;
        }
        while ( v27 );
      }
      else
      {
        while ( 1 )
        {
          v26 = (_QWORD *)(v26[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v26 || (_QWORD *)*v26 == v29 )
            break;
          v29 = v26;
        }
      }
      v30 = RtlNumberOfSetBitsEx(v28 + 32);
      v24 = *(_DWORD *)(a3 + 24);
      v23 += v30;
      if ( (v24 & 2) != 0 )
      {
        MiActOnPartitionNodePages(v28, 8u, (__int16 **)&v71);
        v24 = *(_DWORD *)(a3 + 24);
      }
    }
    CurrentThread = (struct _KTHREAD *)v76;
    if ( (v24 & 0x10) == 0 )
      _InterlockedExchangeAdd64(&qword_140C4E590, v23);
  }
  if ( !v9 )
    goto LABEL_90;
  if ( !a5 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v9 + 192, 0LL);
  }
  v31 = (unsigned __int64 *)*v5;
  v32 = 0LL;
  while ( v31 )
  {
    v32 = v31;
    v31 = (unsigned __int64 *)*v31;
  }
  if ( !v32 )
    goto LABEL_75;
  v33 = (volatile LONG *)(v9 + 200);
  do
  {
    v34 = v32;
    v35 = RtlNumberOfSetBitsEx(v32 + 4);
    v36 = (unsigned __int64 *)v32[1];
    v37 = v35;
    v38 = v32;
    if ( v36 )
    {
      do
      {
        v32 = v36;
        v36 = (unsigned __int64 *)*v36;
      }
      while ( v36 );
    }
    else
    {
      while ( 1 )
      {
        v32 = (unsigned __int64 *)(v32[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v32 || (unsigned __int64 *)*v32 == v38 )
          break;
        v38 = v32;
      }
    }
    v39 = ExAcquireSpinLockExclusive(v33);
    RtlAvlRemoveNode(v65, v34);
    if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    {
      v40 = 1;
    }
    else
    {
      v41 = MiMergePageNodes(v9, v34);
      *(_QWORD *)(v9 + 6928) += v37;
      v40 = v41;
      *(_BYTE *)(v9 + 12) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 200));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v39 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
          v46 = (v45 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v45;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v39);
    v47 = *(_DWORD *)(a3 + 24);
    if ( (v47 & 0x10) == 0 )
    {
      MiIncreaseCommitLimits(v9, v37, v37, 1, 0LL);
      v47 = *(_DWORD *)(a3 + 24);
    }
    MiFreePartitionNodePages(v9, (__int64)v34, v47);
    if ( v40 != 1 )
      goto LABEL_74;
    v48 = v77;
    v49 = 0;
    if ( !v77 )
      goto LABEL_73;
    while ( (v34[3] & 0x7FFFFFFFFFFFFFFFLL) >= (v48[3] & 0x7FFFFFFFFFFFFFFFuLL) )
    {
      v50 = (_QWORD *)v48[1];
      if ( !v50 )
      {
        v49 = 1;
        goto LABEL_73;
      }
LABEL_71:
      v48 = v50;
    }
    v50 = (_QWORD *)*v48;
    if ( *v48 )
      goto LABEL_71;
    v49 = 0;
LABEL_73:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v77, (unsigned __int64)v48, v49, v34);
LABEL_74:
    v33 = (volatile LONG *)(v9 + 200);
  }
  while ( v32 );
LABEL_75:
  if ( (*(_DWORD *)(a3 + 24) & 0x10) == 0 )
    MiMakePartitionMemoryBlock(v9);
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 192), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9 + 192);
    KeAbPostRelease(v9 + 192);
    KiLeaveGuardedRegionUnsafe(v76, v51, v52, v53);
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
        v55 = KeGetCurrentIrql();
        if ( v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v46 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick((__int64)v56);
        }
      }
    }
    __writecr8(OldIrql);
  }
LABEL_90:
  v21 = v75;
LABEL_91:
  v59 = v77;
  v60 = 0LL;
  while ( v59 )
  {
    v60 = v59;
    v59 = (unsigned __int64 *)*v59;
  }
  while ( v60 )
  {
    v61 = (unsigned __int64 *)v60[1];
    v62 = v60;
    v63 = v60;
    if ( v61 )
    {
      do
      {
        v60 = v61;
        v61 = (unsigned __int64 *)*v61;
      }
      while ( v61 );
    }
    else
    {
      while ( 1 )
      {
        v60 = (unsigned __int64 *)(v60[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v60 || (unsigned __int64 *)*v60 == v63 )
          break;
        v63 = v60;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v77, v62);
    ExFreePoolWithTag((PVOID)v62[5], 0);
    ExFreePoolWithTag(v62, 0);
  }
  return v21;
}
