/*
 * XREFs of MiCheckControlArea @ 0x14029BE20
 * Callers:
 *     MiFlushRelease @ 0x14022BDC4 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiDereferenceControlAreaBySection @ 0x14029BDD8 (MiDereferenceControlAreaBySection.c)
 *     MmPurgeSection @ 0x1402C73C0 (MmPurgeSection.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiDereferenceControlArea @ 0x14031EF2C (MiDereferenceControlArea.c)
 *     MiReleaseFaultCharges @ 0x140327DCC (MiReleaseFaultCharges.c)
 *     MiRemoveSystemCacheReferences @ 0x140535950 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFreeExcessSegments @ 0x14029C0C0 (MiFreeExcessSegments.c)
 *     MiInsertUnusedSegment @ 0x14029E554 (MiInsertUnusedSegment.c)
 *     MiBuildWakeList @ 0x14029F5AC (MiBuildWakeList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiClearFilePointer @ 0x140300A58 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x140319C5C (MiImageUnused.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     MiCleanSection @ 0x14037EA4C (MiCleanSection.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnImageBase @ 0x14067DD18 (MiReturnImageBase.c)
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // r14
  __int16 v6; // cx
  __int64 v7; // rsi
  unsigned int v8; // ebx
  BOOL v9; // r12d
  __int64 v10; // r13
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  int v14; // ecx
  KIRQL v15; // al
  bool v16; // zf
  __int64 inserted; // rax
  _QWORD *v18; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = *(_WORD *)(a1 + 60);
  v7 = 0LL;
  v8 = 0;
  v33 = 0LL;
  v9 = v4 != 0;
  v32 = -1LL;
  v10 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (v6 & 0x3FF));
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
      goto LABEL_3;
    goto LABEL_37;
  }
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v8 = 2;
    goto LABEL_3;
  }
  v14 = *(_DWORD *)(a1 + 56);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v8 = 2;
    *(_DWORD *)(a1 + 56) = v14 | 1;
    MiClearFilePointer(a1);
    goto LABEL_3;
  }
  if ( (v14 & 0x40000) != 0 )
  {
    v8 = 1;
  }
  else
  {
    if ( (v14 & 0x20020) != 0x20020 )
    {
      inserted = MiInsertUnusedSegment(a1);
      v14 = *(_DWORD *)(a1 + 56);
      v7 = inserted;
    }
    if ( (v14 & 0x20) != 0 )
    {
      MiImageUnused(a1, 1LL, &v32);
      v14 = *(_DWORD *)(a1 + 56);
    }
  }
  if ( (v14 & 0x20020) == 0x20020 )
  {
    *(_QWORD *)(a1 + 40) = 1LL;
    *(_DWORD *)(a1 + 56) = v14 | 4;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v16 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    MiPurgeImageSection(a1);
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_DWORD *)(a1 + 56) &= ~4u;
    LOBYTE(v3) = v15;
    v16 = (*(_QWORD *)(a1 + 40))-- == 1LL;
    if ( v16 && !*(_QWORD *)(a1 + 24) )
    {
      if ( *(_QWORD *)(a1 + 32) )
      {
        if ( !v8 )
        {
          v7 = MiInsertUnusedSegment(a1);
          v8 = 4;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        v8 = 2;
        MiClearFilePointer(a1);
      }
      goto LABEL_3;
    }
LABEL_37:
    v8 = 4;
  }
LABEL_3:
  if ( v8 >= 4 )
  {
    v5 = (_QWORD *)MiBuildWakeList(a1, 3LL);
    v8 &= ~4u;
  }
  if ( v8 )
  {
    if ( (v8 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      MiCleanSection(a1, (unsigned __int8)v3, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v23 >= 2u )
          {
            v24 = KeGetCurrentPrcb();
            v25 = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v16 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
      }
      __writecr8((unsigned __int8)v3);
      MiSegmentDelete(a1);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v27 = v12[6] - 1;
        v12[6] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v11 = (struct _KPRCB *)((unsigned int)(unsigned __int8)v3 + 1);
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v16 = (v31 & v30[5]) == 0;
          v12 = (_DWORD *)((unsigned int)v31 & v30[5]);
          v30[5] = (_DWORD)v12;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8((unsigned __int8)v3);
    if ( v5 )
    {
      do
      {
        v18 = (_QWORD *)*v5;
        KeSignalGate(v5 + 2, 1LL);
        v5 = v18;
      }
      while ( v18 );
    }
    MiFreeExcessSegments(v11, v12);
  }
  if ( v7 )
    MiReturnCrossPartitionSectionCharges(v10, v9, v7);
  return MiReturnImageBase(&v32);
}
