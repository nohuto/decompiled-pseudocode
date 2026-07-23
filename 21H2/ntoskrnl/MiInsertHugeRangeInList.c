/*
 * XREFs of MiInsertHugeRangeInList @ 0x140533848
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403F39F4 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3DA8 (MiMarkHugePfnGood.c)
 *     MiAddPartitionHugeRange @ 0x1405329D8 (MiAddPartitionHugeRange.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiFreePartitionPageRun @ 0x1408DB194 (MiFreePartitionPageRun.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePfnPartition @ 0x1403F38E8 (MiHugePfnPartition.c)
 */

unsigned __int64 __fastcall MiInsertHugeRangeInList(int a1, char a2, _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 *v6; // r12
  _QWORD *v7; // rsi
  __int64 v8; // r13
  _QWORD *v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // r11
  unsigned __int64 v15; // r10
  unsigned __int64 *v16; // r13
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v26; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1 & 0x3FFFF;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = (unsigned __int64 *)(qword_140C4E6B0 + 8 * v3);
  if ( a3 )
    v7 = a3;
  else
    v7 = (_QWORD *)MiHugePfnPartition((_QWORD *)(qword_140C4E6B0 + 8 * v3));
  v8 = v7[770];
  v9 = MiSearchNumaNodeTable(v3 << 18);
  v10 = (unsigned int)dword_140C4DFC0[0];
  v11 = *((unsigned int *)v9 + 2);
  if ( a2 >= 0 )
    KeAcquireInStackQueuedSpinLock(v7 + 516, &LockHandle);
  v12 = *v6;
  if ( (*v6 & 0x10000000000LL) != 0 )
    a2 = a2 & 0xDE | 0x20;
  if ( (a2 & 1) != 0 )
  {
    v13 = 0;
    v14 = 0LL;
    v15 = (unsigned int)(2 * v10 * v11);
LABEL_12:
    v16 = (unsigned __int64 *)(v8 + 8 * (v15 + v3 % v10));
    goto LABEL_14;
  }
  if ( (a2 & 0x20) == 0 )
  {
    v13 = 1;
    v14 = 1LL;
    v15 = v10 + (unsigned int)(2 * v10 * v11);
    goto LABEL_12;
  }
  v13 = 5;
  v14 = 5LL;
  v16 = (unsigned __int64 *)(v8 + 16LL * (unsigned int)v10 * (unsigned __int16)KeNumberNodes);
LABEL_14:
  if ( a3 )
  {
    v12 ^= (v12 ^ ((unsigned __int64)*(unsigned __int16 *)v7 << 41)) & 0xFFE0000000000LL;
    ++v7[53];
  }
  if ( v13 )
  {
    if ( v13 == 1 )
      v17 = v12 & 0xFFFFFFFFFFE3FFFFuLL | 0x80000;
    else
      v17 = v12 & 0xFFFFFFFFFFE3FFFFuLL | 0x100000;
  }
  else
  {
    v17 = v12 & 0xFFFFFFFFFFE3FFFFuLL | 0x40000;
  }
  v18 = *v16;
  result = 0xFFFFFF80001C0000uLL;
  v20 = *v16 & 0x3FFFF;
  v21 = v3 << 21;
  v22 = v17 & 0xFFFFFF80001C0000uLL;
  if ( v20 )
  {
    *v6 = v22 | v20;
    result = v21 | *(_QWORD *)(qword_140C4E6B0 + 8 * v20) & 0xFFFFFF80001FFFFFuLL;
    *(_QWORD *)(qword_140C4E6B0 + 8 * v20) = result;
  }
  else
  {
    *v6 = v22;
    v18 = v21 | v18 & 0xFFFFFF80001FFFFFuLL;
  }
  *v16 = v3 | v18 & 0xFFFFFFFFFFFC0000uLL;
  if ( v13 != 5 )
  {
    ++*(_QWORD *)(v7[2] + 4544 * v11 + 8 * v14 + 4192);
    ++v7[771];
  }
  if ( a2 >= 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v26 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return result;
}
