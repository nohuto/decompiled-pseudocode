/*
 * XREFs of MiReferencePfBackedSection @ 0x140243798
 * Callers:
 *     MiTrimSharedPage @ 0x1402F9758 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x140387C10 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     MiObtainProtoBaseFromNode @ 0x1403030A0 (MiObtainProtoBaseFromNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseControlAreaWaiters @ 0x140361FD4 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x1403620F8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1403621D0 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  KIRQL v4; // al
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  _DWORD *v19; // r8
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0LL;
LABEL_2:
  v4 = ExAcquireSpinLockShared(&dword_140C4CB80);
  v5 = qword_140C4CB78;
  v6 = v4;
  while ( 1 )
  {
    v7 = 0LL;
    if ( !v5 )
      break;
    v20 = 0LL;
    v8 = MiObtainProtoBaseFromNode(v5, &v20);
    if ( a1 < v8 )
    {
      v5 = *(_QWORD *)v5;
    }
    else
    {
      if ( a1 < v8 + 8 * v20 )
      {
        if ( (*(_BYTE *)(v5 + 24) & 7) != 1 )
          break;
        v7 = *(_QWORD *)(v5 - 56);
        if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
        {
          if ( (*(_DWORD *)(v7 + 56) & 3) == 0 )
          {
            v9 = MiBuildWakeList(v7, 4LL);
            ++*(_DWORD *)(v7 + 76);
            v1 = v9;
            MiRemoveUnusedSegment(v7);
            v2 = v5 - 56;
          }
          break;
        }
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4CB80);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
              v15 = (v14 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v14;
              if ( v15 )
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4CB80);
  if ( v7 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v19 = v17->SchedulerAssist;
        v15 = (v18 & v19[5]) == 0;
        v19[5] &= v18;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(v6);
  if ( v1 )
    MiReleaseControlAreaWaiters(v1);
  return v2;
}
