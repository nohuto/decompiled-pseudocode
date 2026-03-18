/*
 * XREFs of MiHotRemoveHugeRange @ 0x140586A44
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 * Callees:
 *     RtlFindSetBitsAndClearEx @ 0x14023E100 (RtlFindSetBitsAndClearEx.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiRestrictRangeToNode @ 0x1403B7A10 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiHugePfnPartition @ 0x14058727C (MiHugePfnPartition.c)
 *     MiMakeEntireHugePfnGood @ 0x140587900 (MiMakeEntireHugePfnGood.c)
 *     MiUpdateHugePageCounts @ 0x14058938C (MiUpdateHugePageCounts.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140591AD0 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiSetPfnRemovalRequested @ 0x1405ADDA8 (MiSetPfnRemovalRequested.c)
 *     MiFlushCacheRange @ 0x1405B2400 (MiFlushCacheRange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiHotRemoveHugeRange(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v4; // rbx
  int v5; // r15d
  ULONG_PTR v7; // rdi
  signed __int64 *v8; // r12
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // r15
  _QWORD *v14; // rax
  __int64 EntireHugePfnGood; // rax
  _QWORD *v16; // rdx
  bool v17; // r8
  _QWORD *v18; // r9
  unsigned int v19; // ecx
  _QWORD *v20; // rax
  unsigned __int8 CurrentIrql; // al
  KIRQL v22; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int64 v27; // rsi
  void *v28; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  _QWORD *v34; // rsi
  unsigned __int64 v35; // rax
  unsigned __int64 SetBitsAndClear; // r14
  const signed __int64 *v37; // rbx
  __int64 v38; // rdi
  unsigned __int8 v39; // bl
  unsigned __int64 v40; // r15
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  volatile LONG *SpinLock; // [rsp+20h] [rbp-48h]
  unsigned __int64 v46[3]; // [rsp+28h] [rbp-40h] BYREF
  const signed __int64 *i; // [rsp+40h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  KIRQL v49; // [rsp+B0h] [rbp+48h]
  PVOID P; // [rsp+B8h] [rbp+50h] BYREF
  int v51; // [rsp+C0h] [rbp+58h]
  __int64 v52; // [rsp+C8h] [rbp+60h]

  v51 = a3;
  v3 = BugCheckParameter2;
  v4 = (BugCheckParameter2 >> 18) & 0x3FFFFF;
  v46[0] = v4;
  v5 = a3;
  P = 0LL;
  v7 = v4;
  v8 = (signed __int64 *)(qword_140C52968 + 8 * v4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v52 = MiHugePfnPartition(v8);
  if ( v9 )
  {
    v10 = v9;
    while ( 1 )
    {
      v11 = MiRestrictRangeToNode(v3, v10);
      v12 = v11 >> 18;
      v13 = v11;
      v14 = MiSearchNumaNodeTable(v3);
      SpinLock = (volatile LONG *)(*(_QWORD *)(v52 + 16) + 24512LL * *((unsigned int *)v14 + 2) + 22848);
      v49 = ExAcquireSpinLockExclusive(SpinLock);
      MiUpdateHugePageCounts(v52, v7, v12);
      if ( !v12 )
        goto LABEL_15;
      do
      {
        if ( !_bittest64(v8, 0x30u) )
          goto LABEL_14;
        EntireHugePfnGood = MiMakeEntireHugePfnGood(v7);
        v16 = P;
        v17 = 0;
        v18 = (_QWORD *)EntireHugePfnGood;
        if ( !P )
          goto LABEL_13;
        v19 = *(_QWORD *)(EntireHugePfnGood + 24) & 0x3FFFFF;
        while ( v19 < (v16[3] & 0x3FFFFFuLL) )
        {
          v20 = (_QWORD *)*v16;
          if ( !*v16 )
          {
            v17 = 0;
            goto LABEL_13;
          }
LABEL_11:
          v16 = v20;
        }
        v20 = (_QWORD *)v16[1];
        if ( v20 )
          goto LABEL_11;
        v17 = 1;
LABEL_13:
        RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v16, v17, v18);
LABEL_14:
        *v8 = *v8 & 0xF001FFFFFFFFFFFFuLL | 0x802000000000000LL;
        ++v8;
        v7 ^= ((unsigned int)v7 ^ ((_DWORD)v7 + 1)) & 0x3FFFFF;
        --v12;
      }
      while ( v12 );
LABEL_15:
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v22 = v49;
        if ( v49 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (v49 + 1));
          v26 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v22 = v49;
      }
      __writecr8(v22);
      if ( v51 )
        MiFlushCacheRange(v3, v13);
      MiMarkHugeRangeIoPfnDeleted(v3);
      v3 += v13;
      v10 -= v13;
      if ( !v10 )
      {
        v4 = v46[0];
        v5 = v51;
        break;
      }
    }
  }
  v27 = a2 >> 18;
  v28 = (void *)(qword_140C52968 + 8 * v4);
  KeAcquireInStackQueuedSpinLock(&qword_140C52980, &LockHandle);
  RtlClearBitsEx((__int64)&qword_140C52958, v4, v27);
  if ( v27 )
    memset(v28, 0, 8 * v27);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick((__int64)v31);
      }
    }
  }
  __writecr8(OldIrql);
  while ( P )
  {
    v34 = P;
    RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
    if ( !v5 )
    {
      v35 = v34[4];
      SetBitsAndClear = 0LL;
      v46[2] = 0LL;
      v46[0] = 0x40000LL;
      v46[1] = v35;
      v37 = (const signed __int64 *)(v35 + 0x8000);
      for ( i = (const signed __int64 *)(v35 + 0x8000); ; v37 = i )
      {
        SetBitsAndClear = RtlFindSetBitsAndClearEx(v46, 1uLL, SetBitsAndClear);
        if ( SetBitsAndClear == -1LL )
          break;
        v38 = 48 * (SetBitsAndClear + ((v34[3] & 0x3FFFFF) << 18)) - 0x220000000000LL;
        v39 = _bittest64(v37, SetBitsAndClear);
        MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
        v40 = (unsigned __int8)MiLockPageInline(v38);
        if ( v39 )
          *(_BYTE *)(v38 + 35) |= 0x80u;
        MiSetPfnRemovalRequested(v38, 1LL, 0LL);
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v41 >= 2u )
            {
              v42 = KeGetCurrentPrcb();
              v43 = v42->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
              v26 = (v44 & v43[5]) == 0;
              v43[5] &= v44;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick((__int64)v42);
            }
          }
        }
        __writecr8(v40);
      }
      v5 = v51;
    }
    ExFreePoolWithTag((PVOID)v34[4], 0);
    ExFreePoolWithTag(v34, 0);
  }
}
