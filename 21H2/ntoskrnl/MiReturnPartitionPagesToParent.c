/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x140562F04
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x1408DB250 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     MiDrainZeroLookasides @ 0x1402375D0 (MiDrainZeroLookasides.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleasePartitionHugeIoSpace @ 0x140533AC8 (MiReleasePartitionHugeIoSpace.c)
 *     MiActOnPartitionNodePages @ 0x140560AE0 (MiActOnPartitionNodePages.c)
 */

void __fastcall MiReturnPartitionPagesToParent(__int64 BugCheckParameter2)
{
  __int64 v2; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+30h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v2 = **(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 176) + 56LL);
  MiDrainZeroLookasides(BugCheckParameter2, 0LL, 0LL, 0);
  *(_QWORD *)&v15 = v2;
  *((_QWORD *)&v15 + 1) = BugCheckParameter2;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(BugCheckParameter2 + 200));
  v4 = *(_QWORD **)(BugCheckParameter2 + 24);
  v5 = 0LL;
  v6 = v3;
  LOBYTE(v16) = v3;
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v5 )
  {
    v7 = (_QWORD *)v5[1];
    v8 = (__int64)v5;
    v9 = v5;
    if ( v7 )
    {
      do
      {
        v5 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
    }
    else
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v5 || (_QWORD *)*v5 == v9 )
          break;
        v9 = v5;
      }
    }
    MiActOnPartitionNodePages(v8, 4u, (__int16 **)&v15);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 200));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  MiReleasePartitionHugeIoSpace((_QWORD *)BugCheckParameter2);
}
