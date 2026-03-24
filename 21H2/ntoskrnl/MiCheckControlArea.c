/*
 * XREFs of MiCheckControlArea @ 0x140314AB0
 * Callers:
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MmPurgeSection @ 0x140238BA0 (MmPurgeSection.c)
 *     MiReleaseFaultCharges @ 0x1402C8F9C (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x1402D38B8 (MiDereferenceControlArea.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiDereferenceControlAreaBySection @ 0x140314A6C (MiDereferenceControlAreaBySection.c)
 *     MiFlushRelease @ 0x140315010 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x1403155F0 (MiAddViewsForSection.c)
 *     MiRemoveSystemCacheReferences @ 0x140537450 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiClearFilePointer @ 0x140263CF8 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x1402BBF0C (MiImageUnused.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     MiFreeExcessSegments @ 0x140314D50 (MiFreeExcessSegments.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140357480 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x140357560 (MiInsertUnusedSegment.c)
 *     MiCleanSection @ 0x14037F28C (MiCleanSection.c)
 *     MiPurgeImageSection @ 0x1403A53C4 (MiPurgeImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5D8C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSegmentDelete @ 0x1406E8110 (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x1406EABD8 (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, unsigned __int8 a2, __int64 a3, struct _KPRCB *a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  _QWORD *v7; // r14
  __int16 v8; // cx
  __int64 v9; // rsi
  unsigned int v10; // ebx
  BOOL v11; // r12d
  __int64 v12; // r13
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  int v16; // ecx
  KIRQL v17; // al
  bool v18; // zf
  __int64 inserted; // rax
  _QWORD *v20; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  int v29; // eax
  unsigned __int8 v30; // al
  int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0LL;
  v8 = *(_WORD *)(a1 + 60);
  v9 = 0LL;
  v10 = 0;
  v33 = 0LL;
  v11 = v6 != 0;
  v32 = -1LL;
  v12 = *(_QWORD *)(qword_140C4E648 + 8LL * (v8 & 0x3FF));
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
      goto LABEL_3;
    goto LABEL_37;
  }
  if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v10 = 2;
    goto LABEL_3;
  }
  v16 = *(_DWORD *)(a1 + 56);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v10 = 2;
    *(_DWORD *)(a1 + 56) = v16 | 1;
    MiClearFilePointer(a1);
    goto LABEL_3;
  }
  if ( (v16 & 0x40000) != 0 )
  {
    v10 = 1;
  }
  else
  {
    if ( (v16 & 0x20020) != 0x20020 )
    {
      inserted = MiInsertUnusedSegment(a1);
      v16 = *(_DWORD *)(a1 + 56);
      v9 = inserted;
    }
    if ( (v16 & 0x20) != 0 )
    {
      MiImageUnused(a1, 1, (__int64)&v32);
      v16 = *(_DWORD *)(a1 + 56);
    }
  }
  if ( (v16 & 0x20020) == 0x20020 )
  {
    *(_QWORD *)(a1 + 40) = 1LL;
    *(_DWORD *)(a1 + 56) = v16 | 4;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v18 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    MiPurgeImageSection(a1);
    v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~4u;
    LOBYTE(v5) = v17;
    v18 = (*(_QWORD *)(a1 + 40))-- == 1LL;
    if ( v18 && !*(_QWORD *)(a1 + 24) )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( !v10 )
        {
          v9 = MiInsertUnusedSegment(a1);
          v10 = 4;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        v10 = 2;
        MiClearFilePointer(a1);
      }
      goto LABEL_3;
    }
LABEL_37:
    v10 = 4;
  }
LABEL_3:
  if ( v10 >= 4 )
  {
    v7 = (_QWORD *)MiBuildWakeList(a1, 3LL);
    v10 &= ~4u;
  }
  if ( v10 )
  {
    if ( (v10 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, (unsigned __int8)v5, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
            v18 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8((unsigned __int8)v5);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    v13 = KeGetCurrentPrcb();
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v29 = v14[6] - 1;
        v14[6] = v29;
        if ( !v29 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v30 >= 2u )
        {
          a4 = KeGetCurrentPrcb();
          v13 = (struct _KPRCB *)((unsigned int)(unsigned __int8)v5 + 1);
          a3 = (__int64)a4->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v18 = (v31 & *(_DWORD *)(a3 + 20)) == 0;
          v14 = (_DWORD *)((unsigned int)v31 & *(_DWORD *)(a3 + 20));
          *(_DWORD *)(a3 + 20) = (_DWORD)v14;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(a4);
        }
      }
    }
    __writecr8((unsigned __int8)v5);
    if ( v7 )
    {
      do
      {
        v20 = (_QWORD *)*v7;
        KeSignalGate((__int64)(v7 + 2), 1LL, a3, a4);
        v7 = v20;
      }
      while ( v20 );
    }
    MiFreeExcessSegments(v13, v14, a3);
  }
  if ( v9 )
    MiReturnCrossPartitionSectionCharges(v12, v11, v9);
  return MiReturnImageBase(&v32);
}
