/*
 * XREFs of MiCheckControlArea @ 0x14031F800
 * Callers:
 *     MiReleaseFaultCharges @ 0x1402477FC (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x140251BB8 (MiDereferenceControlArea.c)
 *     MiDeleteVad @ 0x1402C08F0 (MiDeleteVad.c)
 *     MmPurgeSection @ 0x1402DD3F0 (MmPurgeSection.c)
 *     MiRemoveMappedPtes @ 0x140313250 (MiRemoveMappedPtes.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiDereferenceControlAreaBySection @ 0x14031F7BC (MiDereferenceControlAreaBySection.c)
 *     MiFlushRelease @ 0x14031FD60 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 *     MiRemoveSystemCacheReferences @ 0x140537690 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiImageUnused @ 0x14023A11C (MiImageUnused.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     MiClearFilePointer @ 0x1402851C8 (MiClearFilePointer.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiFreeExcessSegments @ 0x14031FAA0 (MiFreeExcessSegments.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x1403621D0 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x1403622B0 (MiInsertUnusedSegment.c)
 *     MiCleanSection @ 0x14037EDDC (MiCleanSection.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSegmentDelete @ 0x1406FF4F0 (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x140701FB8 (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, unsigned __int8 a2, _DWORD *a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  _QWORD *v6; // r14
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
  _QWORD *v19; // rbx
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
  v11 = *(_QWORD *)(qword_140C4E688 + 8LL * (v7 & 0x3FF));
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
      MiImageUnused(a1, 1, (__int64)&v32);
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
    v6 = (_QWORD *)MiBuildWakeList(a1, 3LL);
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
        v19 = (_QWORD *)*v6;
        KeSignalGate((__int64)(v6 + 2), 1);
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
