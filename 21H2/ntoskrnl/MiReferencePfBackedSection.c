/*
 * XREFs of MiReferencePfBackedSection @ 0x14023FA50
 * Callers:
 *     MiTrimSharedPage @ 0x14023F658 (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x14059854C (MiLocateSharedPageViews.c)
 *     MiGetPageFileSectionForReservation @ 0x14059C8C8 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x140287A2C (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140287B04 (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 v1; // r14
  _QWORD *v2; // r12
  KIRQL v4; // al
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  int v23; // eax
  _DWORD *v24; // r8

  v1 = 0LL;
  v2 = 0LL;
LABEL_2:
  v4 = ExAcquireSpinLockShared(&dword_140C4F2F8);
  v5 = (_QWORD *)qword_140C4F2F0;
  v6 = v4;
  while ( 1 )
  {
    v7 = 0LL;
    if ( !v5 )
      break;
    v8 = 0LL;
    v9 = v5[3] & 7LL;
    if ( v9 > 4 )
    {
      v10 = 0LL;
    }
    else if ( (_DWORD)v9 )
    {
      switch ( (_DWORD)v9 )
      {
        case 1:
          v10 = *(v5 - 6);
          v8 = *((unsigned int *)v5 - 3);
          break;
        case 2:
          v14 = *(v5 - 7) + 128LL;
          v10 = *(_QWORD *)(*(v5 - 7) + 136LL);
          do
          {
            v15 = *(unsigned int *)(v14 + 44);
            v14 = *(_QWORD *)(v14 + 16);
            v8 += v15;
          }
          while ( v14 );
          break;
        case 3:
          v10 = v5[6];
          v8 = v5[4];
          break;
        default:
          v10 = v5[4];
          v8 = v5[5];
          break;
      }
    }
    else
    {
      v10 = *(v5 - 14);
      v8 = *((unsigned int *)v5 - 19);
    }
    if ( a1 < v10 )
    {
      v5 = (_QWORD *)*v5;
    }
    else
    {
      if ( a1 < v10 + 8 * v8 )
      {
        v7 = 0LL;
        if ( v9 != 1 )
          break;
        v11 = v5 - 7;
        v7 = *(v5 - 7);
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
        {
          if ( (*(_DWORD *)(v7 + 56) & 3) == 0 )
          {
            v12 = MiBuildWakeList(v7, 4LL);
            ++*(_DWORD *)(v7 + 76);
            v1 = v12;
            MiRemoveUnusedSegment(v7);
            v2 = v11;
          }
          break;
        }
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F2F8);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v20 = (v19 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v19;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v6);
        goto LABEL_2;
      }
      v5 = (_QWORD *)v5[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F2F8);
  if ( v7 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v24 = v22->SchedulerAssist;
        v20 = (v23 & v24[5]) == 0;
        v24[5] &= v23;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(v6);
  if ( v1 )
    MiReleaseControlAreaWaiters(v1);
  return v2;
}
