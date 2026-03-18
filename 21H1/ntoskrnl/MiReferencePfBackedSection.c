/*
 * XREFs of MiReferencePfBackedSection @ 0x1402D03FC
 * Callers:
 *     MiTrimSharedPage @ 0x1402CDD9C (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x140384250 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MiRemoveUnusedSegment @ 0x1402816AC (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140281784 (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1402817CC (MiReleaseControlAreaWaiters.c)
 *     MiObtainProtoBaseFromNode @ 0x1402BCAF0 (MiObtainProtoBaseFromNode.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 *v1; // r14
  __int64 v2; // r12
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0LL;
LABEL_2:
  v4 = ExAcquireSpinLockShared(&dword_140C4CA80);
  v5 = qword_140C4CA78;
  v6 = v4;
  while ( 1 )
  {
    v7 = 0LL;
    if ( !v5 )
      break;
    v23 = 0LL;
    v9 = MiObtainProtoBaseFromNode((_QWORD *)v5, &v23);
    if ( a1 < v9 )
    {
      v5 = *(_QWORD *)v5;
    }
    else
    {
      if ( a1 < v9 + 8 * v23 )
      {
        if ( (*(_BYTE *)(v5 + 24) & 7) != 1 )
          break;
        v7 = *(_QWORD *)(v5 - 56);
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72, v8, v10, v11) )
        {
          if ( (*(_DWORD *)(v7 + 56) & 3) == 0 )
          {
            v12 = MiBuildWakeList(v7, 4);
            ++*(_DWORD *)(v7 + 76);
            v1 = v12;
            MiRemoveUnusedSegment(v7);
            v2 = v5 - 56;
          }
          break;
        }
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4CA80);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v18 = (v17 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v17;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        goto LABEL_2;
      }
      v5 = *(_QWORD *)(v5 + 8);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4CA80);
  if ( v7 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v22 = v20->SchedulerAssist;
        v18 = (v21 & v22[5]) == 0;
        v22[5] &= v21;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v6);
  if ( v1 )
    MiReleaseControlAreaWaiters(v1);
  return v2;
}
