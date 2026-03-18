/*
 * XREFs of MiSignalLargePageRebuild @ 0x140267CA8
 * Callers:
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x140264BD8 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x140264C90 (MiNodeLargeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x140268A48 (MiPageCombiningActive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWakeLargePageRebuild @ 0x140397C78 (MiWakeLargePageRebuild.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // ebx
  __int64 v5; // rdi
  volatile LONG *v6; // r15
  bool v7; // zf
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v9; // r12
  unsigned int v10; // r13d
  unsigned __int64 v11; // r14
  unsigned int v12; // r15d
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0x20) == 0 )
  {
    result = MiPageCombiningActive();
    if ( !(_DWORD)result )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
      {
        v5 = *(_QWORD *)(a1 + 16) + 24512LL * i;
        v6 = (volatile LONG *)(v5 + 22848);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 22848));
        if ( !*(_BYTE *)(v5 + 3249) )
        {
          v7 = (*(_BYTE *)(v5 + 3248))-- == 1;
          if ( v7 )
          {
            v9 = 0LL;
            v10 = 0;
            v11 = (-(__int64)(*(_BYTE *)(v5 + 3251) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
            if ( MmNumberOfChannels )
            {
              v12 = MmNumberOfChannels;
              do
                v9 += MiNodeFreeZeroPages(v5, v10++, 0);
              while ( v10 < v12 );
              v6 = (volatile LONG *)(v5 + 22848);
            }
            if ( v9 < v11
              || (MiFlags & 0x30) == 0
              || (unsigned __int64)MiNodeLargeFreeZeroPages(v5, 4u, 2) >> 3 >= v9
              || !(unsigned int)MiWakeLargePageRebuild(a1, i, 1LL) )
            {
              *(_BYTE *)(v5 + 3250) = 8;
              *(_BYTE *)(v5 + 3248) = 8;
            }
          }
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v7 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
