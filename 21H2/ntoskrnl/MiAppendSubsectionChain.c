/*
 * XREFs of MiAppendSubsectionChain @ 0x1402A147C
 * Callers:
 *     MiExtendSection @ 0x140689798 (MiExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x140263D60 (MiInsertUnusedSubsection.c)
 *     MiInsertSubsectionNode @ 0x1402A15FC (MiInsertSubsectionNode.c)
 *     MiDecrementSubsectionViewCount @ 0x140315170 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaUsingExtents @ 0x140332C50 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1405551CC (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 *a1, __int64 a2, char a3)
{
  ULONG_PTR v4; // rdi
  bool v6; // r15
  __int64 v7; // r13
  KIRQL v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 j; // rdi
  ULONG_PTR i; // rdx
  __int64 v18; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  __int64 inserted; // rax
  __int64 v29; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r11
  _DWORD *v32; // r9
  int v33; // eax
  __int64 v36; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  v36 = *a1;
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72));
  v10 = v36;
  v11 = 2;
  v12 = v8;
  if ( *(_QWORD *)(v36 + 48) )
  {
    if ( (a1[6] & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v36 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              v23 = (v22 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v22;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        goto LABEL_15;
      }
    }
    else
    {
      v6 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v4; i; i = *(_QWORD *)(v18 + 16) )
      {
        *(_WORD *)(i + 34) |= 1u;
        if ( (unsigned int)MiControlAreaUsingExtents(v10, i, v9) )
          *(_DWORD *)(v18 + 52) |= 0x40000000u;
      }
      goto LABEL_20;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v36 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v23 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    v11 = 1;
LABEL_15:
    __writecr8(v12);
    return v11;
  }
  if ( *(_QWORD *)(v4 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v4 + 48) & 0x3FFFFFFF) != 0 )
        MiUpdateSubsectionCrossPartitionRefs(v4, 0x3FFFFFFFLL);
      *(_QWORD *)(v4 + 96) = 0LL;
      inserted = MiInsertUnusedSubsection((_QWORD *)v4);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += inserted;
    }
    while ( v4 );
    goto LABEL_42;
  }
  if ( (a3 & 2) != 0 )
  {
    v6 = 1;
LABEL_20:
    if ( !v6 )
      goto LABEL_4;
    do
    {
      v29 = MiDecrementSubsectionViewCount(v4);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += v29;
    }
    while ( v4 );
LABEL_42:
    v10 = v36;
  }
LABEL_4:
  *((_WORD *)a1 + 17) &= 0xFu;
  v13 = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 13) &= 0xC0000000;
  *((_DWORD *)a1 + 10) = v13;
  v14 = *(_QWORD *)(a2 + 16);
  a1[2] = v14;
  for ( j = v14; j; v10 = v36 )
  {
    MiInsertSubsectionNode(v10, j, 1LL);
    j = *(_QWORD *)(j + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v36 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v23 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  __writecr8(v12);
  if ( v7 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v36 + 60) & 0x3FF)), 1LL, v7);
  return 0LL;
}
