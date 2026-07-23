/*
 * XREFs of MiAppendSubsectionChain @ 0x14021E9FC
 * Callers:
 *     MiExtendSection @ 0x1405E8C28 (MiExtendSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14021EB7C (MiInsertSubsectionNode.c)
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14055540C (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 *a1, __int64 a2, char a3)
{
  ULONG_PTR v4; // rdi
  bool v6; // r15
  __int64 v7; // r13
  KIRQL v8; // al
  __int64 v9; // r9
  unsigned int v10; // ebp
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rax
  __int64 j; // rdi
  ULONG_PTR i; // rdx
  __int64 v17; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  __int64 inserted; // rax
  __int64 v28; // rax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r11
  _DWORD *v31; // r9
  int v32; // eax
  __int64 v35; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 16);
  v6 = 0;
  v35 = *a1;
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72));
  v9 = v35;
  v10 = 2;
  v11 = v8;
  if ( *(_QWORD *)(v35 + 48) )
  {
    if ( (a1[6] & 0x3FFFFFFF) != 0 )
    {
      if ( (a3 & 2) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v35 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v22 = (v21 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v21;
              if ( v22 )
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
      for ( i = v4; i; i = *(_QWORD *)(v17 + 16) )
      {
        *(_WORD *)(i + 34) |= 1u;
        if ( (unsigned int)MiControlAreaUsingExtents(v9) )
          *(_DWORD *)(v17 + 52) |= 0x40000000u;
      }
      goto LABEL_20;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v35 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v22 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    v10 = 1;
LABEL_15:
    __writecr8(v11);
    return v10;
  }
  if ( *(_QWORD *)(v4 + 8) )
  {
    do
    {
      if ( (*(_DWORD *)(v4 + 48) & 0x3FFFFFFF) != 0 )
        MiUpdateSubsectionCrossPartitionRefs(v4, 0x3FFFFFFFLL);
      *(_QWORD *)(v4 + 96) = 0LL;
      inserted = MiInsertUnusedSubsection(v4);
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
      v28 = MiDecrementSubsectionViewCount(v4);
      v4 = *(_QWORD *)(v4 + 16);
      v7 += v28;
    }
    while ( v4 );
LABEL_42:
    v9 = v35;
  }
LABEL_4:
  *((_WORD *)a1 + 17) &= 0xFu;
  v12 = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 13) &= 0xC0000000;
  *((_DWORD *)a1 + 10) = v12;
  v13 = *(_QWORD *)(a2 + 16);
  a1[2] = v13;
  for ( j = v13; j; v9 = v35 )
  {
    MiInsertSubsectionNode(v9, j, 1LL);
    j = *(_QWORD *)(j + 16);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v35 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v22 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(v11);
  if ( v7 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v35 + 60) & 0x3FF)), 1LL, v7);
  return 0LL;
}
