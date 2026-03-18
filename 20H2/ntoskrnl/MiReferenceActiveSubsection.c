/*
 * XREFs of MiReferenceActiveSubsection @ 0x14022CE60
 * Callers:
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408CBA38 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiIncrementSubsectionViewCount @ 0x14022CF40 (MiIncrementSubsectionViewCount.c)
 *     MiGetCommittedPages @ 0x14022E938 (MiGetCommittedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x140300DB4 (MiRemoveUnusedSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140553318 (MiComputeCrossPartitionSectionCharges.c)
 *     MiGetSubsectionCharges @ 0x1405533F8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReferenceActiveSubsection(__int64 *BugCheckParameter2, int a2, KIRQL a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // r12d
  KIRQL v6; // bp
  BOOL v9; // r13d
  __int64 v10; // r15
  BOOL v11; // r14d
  int v12; // edi
  __int64 result; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // edx
  bool v18; // zf
  __int64 CommittedPages; // rax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  __int64 v40; // [rsp+70h] [rbp+8h]
  unsigned int v41; // [rsp+78h] [rbp+10h]
  char v42; // [rsp+80h] [rbp+18h]
  __int64 v43; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = 0LL;
  v43 = 0LL;
  v5 = 0;
  v40 = *BugCheckParameter2;
  v6 = a3;
  v9 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  if ( a3 == 17 )
  {
    v5 = 1;
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  }
  v42 = v6 + 1;
  while ( 1 )
  {
    v10 = *BugCheckParameter2;
    if ( !BugCheckParameter2[1] )
      goto LABEL_19;
    v11 = *(_QWORD *)(v10 + 64) != 0LL;
    v12 = MiIncrementSubsectionViewCount((ULONG_PTR)BugCheckParameter2);
    if ( v12 > 1 && v11 && (*(_DWORD *)(v10 + 56) & 0x20) == 0 )
    {
      if ( (*((_BYTE *)BugCheckParameter2 + 34) & 8) != 0 )
        MiRemoveUnusedSubsection(BugCheckParameter2);
      *((_WORD *)BugCheckParameter2 + 16) |= 1u;
    }
    if ( v12 >= 2 )
    {
      if ( v12 == 2 && (a2 & 0x20) != 0 && v43 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v40 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << v42);
              v18 = (v31 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v31;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v40 + 60) & 0x3FF)),
          v9,
          v43);
        if ( !v5 )
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v40 + 72));
      }
      else if ( v5 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v40 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && v6 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << v42);
              v18 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
        }
        __writecr8(v6);
      }
      return 0LL;
    }
    if ( !v12 )
      break;
    v3 = v40;
    v4 = v43;
LABEL_19:
    if ( (a2 & 0x20) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && v6 <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << v42);
            v18 = (v39 & v38[5]) == 0;
            v38[5] &= v39;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
      }
      __writecr8(v6);
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)), v9, v4);
      if ( !v5 )
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      return 3221225773LL;
    }
    v43 = MiComputeCrossPartitionSectionCharges(BugCheckParameter2);
    v4 = v43;
    if ( v43 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && v6 <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << v42);
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
      }
      __writecr8(v6);
      result = MiGetSubsectionCharges(BugCheckParameter2, v43);
      v41 = result;
      if ( (int)result < 0 )
      {
        if ( !v5 )
        {
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
          return v41;
        }
        return result;
      }
      a2 |= 0x20u;
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
      if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 )
      {
        if ( v9 )
        {
          if ( !BugCheckParameter2[1] )
          {
LABEL_34:
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v20 = KeGetCurrentIrql();
                if ( v20 <= 0xFu && v6 <= 0xFu && v20 >= 2u )
                {
                  v21 = KeGetCurrentPrcb();
                  v22 = v21->SchedulerAssist;
                  v23 = ~(unsigned __int16)(-1LL << v42);
                  v18 = (v23 & v22[5]) == 0;
                  v22[5] &= v23;
                  if ( v18 )
                    KiRemoveSystemWorkPriorityKick(v21);
                }
              }
            }
            __writecr8(v6);
            MiReturnCrossPartitionSectionCharges(
              *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)),
              v9,
              v43);
            if ( !v5 )
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
            return 3221225994LL;
          }
          CommittedPages = *((_DWORD *)BugCheckParameter2 + 11) - (*((_DWORD *)BugCheckParameter2 + 13) & 0x3FFFFFFFu);
        }
        else
        {
          CommittedPages = MiGetCommittedPages(v3);
        }
        if ( v43 != CommittedPages )
          goto LABEL_34;
      }
    }
    else
    {
      a2 |= 0x20u;
    }
  }
  if ( v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v40 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && v6 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << v42);
          v18 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8(v6);
  }
  return 3221227019LL;
}
