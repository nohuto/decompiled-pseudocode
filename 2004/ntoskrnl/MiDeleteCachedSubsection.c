/*
 * XREFs of MiDeleteCachedSubsection @ 0x1405238FC
 * Callers:
 *     MiRemoveUnusedSegments @ 0x14052524C (MiRemoveUnusedSegments.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14022865C (MiRemoveUnusedSegment.c)
 *     MiDecrementModifiedWriteCount @ 0x1402286BC (MiDecrementModifiedWriteCount.c)
 *     MiReleaseControlAreaWaiters @ 0x14022877C (MiReleaseControlAreaWaiters.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSegment @ 0x14024B300 (MiInsertUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x14024C2B0 (MiInsertUnusedSubsection.c)
 *     MiReduceUnusedSubsectionCount @ 0x14024C5F4 (MiReduceUnusedSubsectionCount.c)
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402E41B0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x14037CDBC (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiIsSubsectionClean @ 0x140524784 (MiIsSubsectionClean.c)
 *     MiPreventControlAreaDelete @ 0x140524AAC (MiPreventControlAreaDelete.c)
 *     MiPurgeSubsection @ 0x140524E00 (MiPurgeSubsection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069779C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069797C (FsRtlAcquireFileForCcFlushEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteCachedSubsection(__int64 a1)
{
  volatile LONG *v1; // rbp
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  _QWORD **v5; // r15
  unsigned __int64 v6; // r14
  _QWORD *i; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v11; // eax
  bool v12; // zf
  __int64 result; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  __int64 inserted; // rdi
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  int v27; // ebx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  int IsSubsectionClean; // eax
  int v33; // r15d
  KIRQL v34; // al
  unsigned __int64 v35; // r14
  unsigned __int8 v36; // cl
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  struct _FILE_OBJECT *v40; // r12
  unsigned __int8 v41; // cl
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int64 v45; // r14
  signed __int64 v46; // rax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  KIRQL v51; // al
  int v52; // ecx
  unsigned __int64 v53; // r14
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  BOOL v62; // r12d
  KIRQL v63; // al
  int v64; // eax
  unsigned int v65; // ecx
  _QWORD *v66; // rdi
  unsigned __int8 v67; // cl
  struct _KPRCB *v68; // r9
  _DWORD *v69; // r8
  int v70; // eax
  __int64 v71; // r12
  _QWORD *v72; // rdi
  unsigned __int8 v73; // al
  char v74; // cl
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r9
  int v77; // eax
  _DWORD *v78; // r8
  signed __int64 v79; // [rsp+40h] [rbp-68h]
  __int128 v80[6]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v82; // [rsp+B8h] [rbp+10h]
  PVOID P; // [rsp+C0h] [rbp+18h]
  ULONG_PTR v84; // [rsp+C8h] [rbp+20h]

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = 1LL;
  v80[0] = 0LL;
  v4 = 1LL;
  v5 = (_QWORD **)(a1 + 1720);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v4 = (ULONG_PTR)(i - 10);
    v3 = *(i - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v3 + 72)) )
      break;
  }
  if ( i == v5 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    result = 3221226021LL;
LABEL_25:
    __writecr8(v6);
    return result;
  }
  v14 = (_QWORD *)(v4 + 80);
  v15 = *(_QWORD *)(v4 + 80);
  v16 = *(_QWORD **)(v4 + 88);
  if ( *(_QWORD *)(v15 + 8) != v4 + 80 || (_QWORD *)*v16 != v14 )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  *(_WORD *)(v4 + 34) &= ~8u;
  *(_QWORD *)(v4 + 88) = v4 + 80;
  *v14 = v14;
  MiReduceUnusedSubsectionCount((_DWORD *)v4);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v17 = *(_DWORD *)(v3 + 56);
  if ( (v17 & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v19);
        }
      }
    }
    result = 3221225587LL;
    goto LABEL_25;
  }
  if ( (v17 & 8) != 0 )
  {
    if ( *(int *)(v4 + 52) < 0 )
    {
      inserted = MiInsertUnusedSubsection(v4);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
            v12 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
      }
      __writecr8(v6);
      if ( inserted )
        MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
      return 3221225504LL;
    }
    v27 = 1;
  }
  else
  {
    v27 = 0;
  }
  if ( *(_QWORD *)(v4 + 96) )
    KeBugCheckEx(0x1Au, 0x42004uLL, v4, 0LL, 0LL);
  *(_QWORD *)(v4 + 96) = 1LL;
  *(_WORD *)(v4 + 32) &= ~1u;
  MiRemoveUnusedSegment(v3);
  *(_DWORD *)(v3 + 56) |= 0x100u;
  P = *(PVOID *)(v4 + 8);
  if ( v27 == 1 )
  {
    ++*(_DWORD *)(v3 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v29);
        }
      }
    }
    __writecr8(v6);
    IsSubsectionClean = MiIsSubsectionClean(v4);
    if ( IsSubsectionClean )
    {
      if ( IsSubsectionClean == 1 )
      {
        v34 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        *(_DWORD *)(v4 + 52) |= 0x80000000;
        v35 = v34;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v36 = KeGetCurrentIrql();
            if ( v36 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v36 >= 2u )
            {
              v37 = KeGetCurrentPrcb();
              v38 = v37->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
              v12 = (v39 & v38[5]) == 0;
              v38[5] &= v39;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick((__int64)v37);
            }
          }
        }
        __writecr8(v35);
      }
      v33 = -1073741792;
    }
    else
    {
      v33 = 0;
    }
  }
  else
  {
    v40 = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v12 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)v42);
        }
      }
    }
    __writecr8(v6);
    v84 = *(_QWORD *)(v4 + 8);
    v82 = v84 - 8 + 8LL * *(unsigned int *)(v4 + 44);
    v33 = FsRtlAcquireFileForCcFlushEx(v40);
    v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    v46 = _InterlockedDecrement64((volatile signed __int64 *)(v3 + 112));
    v79 = v46;
    *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v3 + 60) & 0x3FF)) + 1688LL) = 0LL;
    if ( v33 < 0 || (*(_DWORD *)(v3 + 56) & 1) != 0 )
    {
      if ( v46 )
        ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v54 = KeGetCurrentIrql();
          if ( v54 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v54 >= 2u )
          {
            v55 = KeGetCurrentPrcb();
            v56 = v55->SchedulerAssist;
            v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
            v12 = (v57 & v56[5]) == 0;
            v56[5] &= v57;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v55);
          }
        }
      }
      __writecr8(v45);
      if ( v33 >= 0 )
      {
        FsRtlReleaseFileForCcFlush(v40);
        v33 = -1073741431;
      }
      if ( !v79 )
      {
        MiDeleteControlArea((PVOID)v3);
        ObfDereferenceObjectWithTag(v40, 0x746C6644u);
        return (unsigned int)v33;
      }
    }
    else
    {
      ++*(_DWORD *)(v3 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
            v12 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v48);
          }
        }
      }
      __writecr8(v45);
      KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
      v33 = MiFlushSectionInternal(v84, v82, (__int64 *)v4, v4, 0LL, 2u, v80);
      KeGetCurrentThread()[1].TrapFrame = 0LL;
      FsRtlReleaseFileForCcFlush(v40);
    }
    MiDereferenceControlAreaFile(v3, (unsigned __int64)v40);
  }
  v51 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v52 = *(_DWORD *)(v3 + 56);
  v53 = v51;
  if ( (v52 & 1) != 0 )
  {
    *(_DWORD *)(v3 + 56) = v52 & 0xFFFFFEFF;
    goto LABEL_110;
  }
  if ( v33 < 0 )
    goto LABEL_108;
  if ( *(_QWORD *)(v4 + 96) != 1LL || (*(_BYTE *)(v4 + 32) & 1) != 0 )
  {
    v33 = -1073741823;
LABEL_108:
    v64 = 1;
    goto LABEL_109;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v58 = KeGetCurrentIrql();
      if ( v58 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v58 >= 2u )
      {
        v59 = KeGetCurrentPrcb();
        v60 = v59->SchedulerAssist;
        v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v53 + 1));
        v12 = (v61 & v60[5]) == 0;
        v60[5] &= v61;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v59);
      }
    }
  }
  __writecr8(v53);
  v62 = MiPurgeSubsection(v4) == 0;
  v63 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v52 = *(_DWORD *)(v3 + 56);
  LOBYTE(v53) = v63;
  v64 = v62;
LABEL_109:
  v65 = v52 & 0xFFFFFEFF;
  *(_DWORD *)(v3 + 56) = v65;
  if ( (v65 & 1) == 0 )
  {
    v71 = 0LL;
    if ( v64 == 1 || *(_QWORD *)(v4 + 96) != 1LL || *(_DWORD *)(v4 + 104) || (*(_BYTE *)(v4 + 32) & 1) != 0 )
    {
      v33 = -1073741823;
      v71 = MiDecrementSubsectionViewCount((__int64 *)v4, 0);
      if ( !*(_QWORD *)(v4 + 96) )
        v71 += MiInsertUnusedSubsection(v4);
      P = 0LL;
    }
    else
    {
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v4 + 112), 0);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    v72 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1);
    if ( *(_QWORD *)(v3 + 24) | *(_QWORD *)(v3 + 40) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v73 = KeGetCurrentIrql();
          if ( v73 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v73 >= 2u )
          {
            v74 = v53 + 1;
            goto LABEL_142;
          }
        }
      }
    }
    else
    {
      if ( !*(_QWORD *)(v3 + 32) )
      {
        MiDestroySection(v3, v53, 0LL);
        goto LABEL_146;
      }
      v71 += MiInsertUnusedSegment(v3);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v75 = KeGetCurrentIrql();
          if ( v75 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v75 >= 2u )
          {
            v74 = v53 + 1;
LABEL_142:
            v76 = KeGetCurrentPrcb();
            v77 = ~(unsigned __int16)(-1LL << v74);
            v78 = v76->SchedulerAssist;
            v12 = (v77 & v78[5]) == 0;
            v78[5] &= v77;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick((__int64)v76);
          }
        }
      }
    }
    __writecr8((unsigned __int8)v53);
LABEL_146:
    if ( v72 )
      MiReleaseControlAreaWaiters(v72);
    if ( v71 )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, v71);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)v33;
  }
LABEL_110:
  MiDecrementSubsectionViewCount((__int64 *)v4, 0);
  v66 = (_QWORD *)MiDecrementModifiedWriteCount(v3, 1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v67 = KeGetCurrentIrql();
      if ( v67 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v67 >= 2u )
      {
        v68 = KeGetCurrentPrcb();
        v69 = v68->SchedulerAssist;
        v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v53 + 1));
        v12 = (v70 & v69[5]) == 0;
        v69[5] &= v70;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v68);
      }
    }
  }
  __writecr8((unsigned __int8)v53);
  if ( v66 )
    MiReleaseControlAreaWaiters(v66);
  return 3221225473LL;
}
