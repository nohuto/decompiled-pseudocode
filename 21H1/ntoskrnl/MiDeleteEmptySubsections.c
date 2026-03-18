/*
 * XREFs of MiDeleteEmptySubsections @ 0x1402BE850
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403B9130 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReduceUnusedSubsectionCount @ 0x1402A5624 (MiReduceUnusedSubsectionCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402BCA00 (MiUpdateSystemProtoPtesTree.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  volatile LONG *v1; // rsi
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r14
  KIRQL v8; // bl
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r15
  void *v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v7 = (_QWORD *)(a1 + 1736);
  while ( 1 )
  {
    v8 = v3;
    v9 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    v10 = v9 - 10;
    v11 = *(v9 - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v11 + 72, v4, v5, v6) )
    {
      if ( (*((_BYTE *)v10 + 34) & 8) != 0 )
      {
        v12 = (void *)v10[1];
        MiUpdateSystemProtoPtesTree(v10 + 14, 0);
        v10[1] = 0LL;
        v13 = v10 + 10;
        v14 = v10[10];
        v15 = (_QWORD *)v10[11];
        if ( *(_QWORD **)(v14 + 8) != v10 + 10 || (_QWORD *)*v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *((_WORD *)v10 + 17) &= ~8u;
        v10[11] = v10 + 10;
        *v13 = v13;
        MiReduceUnusedSubsectionCount(v10);
      }
      else
      {
        v12 = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (v8 + 1));
            v21 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v22 = KeGetCurrentIrql();
          if ( v22 <= 0xFu && v8 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (v8 + 1));
            v21 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
      }
      __writecr8(v8);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  *(_QWORD *)(a1 + 1424) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && v8 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (v8 + 1));
        v21 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  result = v8;
  __writecr8(v8);
  return result;
}
