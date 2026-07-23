/*
 * XREFs of MiHotRemoveHugeRange @ 0x140532F38
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePfnPartition @ 0x1403F38E8 (MiHugePfnPartition.c)
 *     MiMakeEntireHugePfnGood @ 0x1403F394C (MiMakeEntireHugePfnGood.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiHotRemoveHugeRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int64 *v5; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // r15
  unsigned __int64 *EntireHugePfnGood; // rax
  _QWORD *v9; // rdx
  bool v10; // r8
  unsigned __int64 *v11; // r9
  unsigned int v12; // ecx
  _QWORD *v13; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  void *v20; // rbx
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  PVOID *v26; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  PVOID P; // [rsp+70h] [rbp+30h] BYREF

  P = 0LL;
  v2 = (a1 >> 18) & 0x3FFFF;
  v3 = v2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a2 >> 18;
  v5 = (unsigned __int64 *)(qword_140C4E6B0 + 8 * v2);
  v6 = MiHugePfnPartition(v5);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 4128), &LockHandle);
  if ( !v4 )
    goto LABEL_14;
  v7 = v4;
  do
  {
    if ( (*v5 & 0x10000000000LL) == 0 )
      goto LABEL_13;
    EntireHugePfnGood = MiMakeEntireHugePfnGood(v3);
    v9 = P;
    v10 = 0;
    v11 = EntireHugePfnGood;
    if ( !P )
      goto LABEL_12;
    v12 = EntireHugePfnGood[3] & 0x3FFFF;
    while ( v12 < (v9[3] & 0x3FFFFuLL) )
    {
      v13 = (_QWORD *)*v9;
      if ( !*v9 )
      {
        v10 = 0;
        goto LABEL_12;
      }
LABEL_10:
      v9 = v13;
    }
    v13 = (_QWORD *)v9[1];
    if ( v13 )
      goto LABEL_10;
    v10 = 1;
LABEL_12:
    RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v9, v10, v11);
LABEL_13:
    *v5 = *v5 & 0xFFF001FFFFFFFFFFuLL | 0x8020000000000LL;
    ++v5;
    v3 ^= (v3 ^ (v3 + 1)) & 0x3FFFF;
    --v7;
  }
  while ( v7 );
LABEL_14:
  *(_QWORD *)(v6 + 424) -= v4;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  v20 = (void *)(qword_140C4E6B0 + 8 * v2);
  KeAcquireInStackQueuedSpinLock(&qword_140C4E6C0, &LockHandle);
  RtlClearBitsEx((__int64)&qword_140C4E6A0, v2, v4);
  if ( v4 )
    memset(v20, 0, 8 * v4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v21 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
  }
  __writecr8(v21);
  while ( P )
  {
    v26 = (PVOID *)P;
    RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
    ExFreePoolWithTag(v26[4], 0);
    ExFreePoolWithTag(v26, 0);
  }
}
