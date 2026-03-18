/*
 * XREFs of MiCheckControlArea @ 0x14024A8A0
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiFlushRelease @ 0x14024A218 (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x14024A858 (MiDereferenceControlAreaBySection.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiReleaseFaultCharges @ 0x1403573CC (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x140360978 (MiDereferenceControlArea.c)
 *     MiRemoveSystemCacheReferences @ 0x140531F80 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140228734 (MiBuildWakeList.c)
 *     MiFreeExcessSegments @ 0x14024AB40 (MiFreeExcessSegments.c)
 *     MiInsertUnusedSegment @ 0x14024B300 (MiInsertUnusedSegment.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiClearFilePointer @ 0x14032D318 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x140349068 (MiImageUnused.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     MiCleanSection @ 0x14037CD1C (MiCleanSection.c)
 *     MiPurgeImageSection @ 0x1403A2634 (MiPurgeImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnImageBase @ 0x1405FF238 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x1406091B4 (MiSegmentDelete.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, unsigned __int8 a2, _DWORD *a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int16 v7; // cx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  BOOL v10; // r12d
  __int64 v11; // r13
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  int v15; // ecx
  KIRQL v16; // al
  bool v17; // zf
  __int64 inserted; // rax
  __int64 *v19; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v7 = *(_WORD *)(a1 + 60);
  v8 = 0LL;
  v9 = 0;
  v33 = 0LL;
  v10 = v5 != 0;
  v32 = -1LL;
  v11 = *(_QWORD *)(qword_140C4E448 + 8LL * (v7 & 0x3FF));
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
      goto LABEL_3;
    goto LABEL_37;
  }
  if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v9 = 2;
    goto LABEL_3;
  }
  v15 = *(_DWORD *)(a1 + 56);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v9 = 2;
    *(_DWORD *)(a1 + 56) = v15 | 1;
    MiClearFilePointer(a1);
    goto LABEL_3;
  }
  if ( (v15 & 0x40000) != 0 )
  {
    v9 = 1;
  }
  else
  {
    if ( (v15 & 0x20020) != 0x20020 )
    {
      inserted = MiInsertUnusedSegment(a1);
      v15 = *(_DWORD *)(a1 + 56);
      v8 = inserted;
    }
    if ( (v15 & 0x20) != 0 )
    {
      MiImageUnused(a1, 1LL, &v32);
      v15 = *(_DWORD *)(a1 + 56);
    }
  }
  if ( (v15 & 0x20020) == 0x20020 )
  {
    *(_QWORD *)(a1 + 40) = 1LL;
    *(_DWORD *)(a1 + 56) = v15 | 4;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v17 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    MiPurgeImageSection(a1);
    v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~4u;
    LOBYTE(v4) = v16;
    v17 = (*(_QWORD *)(a1 + 40))-- == 1LL;
    if ( v17 && !*(_QWORD *)(a1 + 24) )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( !v9 )
        {
          v8 = MiInsertUnusedSegment(a1);
          v9 = 4;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        v9 = 2;
        MiClearFilePointer(a1);
      }
      goto LABEL_3;
    }
LABEL_37:
    v9 = 4;
  }
LABEL_3:
  if ( v9 >= 4 )
  {
    v6 = MiBuildWakeList(a1, 3);
    v9 &= ~4u;
  }
  if ( v9 )
  {
    if ( (v9 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, (unsigned __int8)v4, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v24 = KeGetCurrentIrql();
          if ( v24 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v17 = (v27 & v26[5]) == 0;
            v26[5] &= v27;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
      }
      __writecr8((unsigned __int8)v4);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    v12 = KeGetCurrentPrcb();
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v28 = v13[6] - 1;
        v13[6] = v28;
        if ( !v28 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v12 = (struct _KPRCB *)((unsigned int)(unsigned __int8)v4 + 1);
          a3 = v30->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v17 = (v31 & a3[5]) == 0;
          v13 = (_DWORD *)((unsigned int)v31 & a3[5]);
          a3[5] = (_DWORD)v13;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8((unsigned __int8)v4);
    if ( v6 )
    {
      do
      {
        v19 = (__int64 *)*v6;
        KeSignalGate(v6 + 2, 1LL);
        v6 = v19;
      }
      while ( v19 );
    }
    MiFreeExcessSegments(v12, v13, a3);
  }
  if ( v8 )
    MiReturnCrossPartitionSectionCharges(v11, v10, v8);
  return MiReturnImageBase(&v32);
}
