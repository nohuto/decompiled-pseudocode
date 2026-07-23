/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x140299420
 * Callers:
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140375478 (MiUpdateSlabPagePlaceholderState.c)
 *     MiGetPageFromSlabEntry @ 0x140379AC4 (MiGetPageFromSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabStandbyPage @ 0x14055330C (MiGetSlabStandbyPage.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocator(__int64 a1)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 PageFromSlabEntry; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  int v19; // eax
  _DWORD *v20; // r8

  if ( !(*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 64)) )
    return -1LL;
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 24);
  v5 = v3;
  if ( !v4 )
    goto LABEL_11;
  PageFromSlabEntry = MiGetPageFromSlabEntry(v4, a1);
  if ( PageFromSlabEntry == -1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
LABEL_11:
    v8 = *(_QWORD *)(a1 + 8);
    if ( (v8 & 1) != 0 )
    {
      if ( v8 != 1 )
      {
        v9 = (_QWORD *)(v8 ^ (a1 | 1));
        goto LABEL_15;
      }
    }
    else
    {
      v9 = *(_QWORD **)(a1 + 8);
LABEL_15:
      while ( v9 )
      {
        PageFromSlabEntry = MiGetPageFromSlabEntry(v9, a1);
        if ( PageFromSlabEntry != -1 )
        {
          *(_QWORD *)(a1 + 24) = v9;
          goto LABEL_5;
        }
        v10 = (_QWORD *)v9[1];
        v11 = v9;
        if ( v10 )
        {
          do
          {
            v9 = v10;
            v10 = (_QWORD *)*v10;
          }
          while ( v10 );
        }
        else
        {
          while ( 1 )
          {
            v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v9 || (_QWORD *)*v9 == v11 )
              break;
            v11 = v9;
          }
        }
      }
    }
    PageFromSlabEntry = -1LL;
  }
LABEL_5:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( PageFromSlabEntry == -1 )
    return MiGetSlabStandbyPage(a1);
  v7 = (unsigned __int8)MiLockPageInline(48 * PageFromSlabEntry - 0x58000000000LL);
  MiUpdateSlabPagePlaceholderState(a1, PageFromSlabEntry, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * PageFromSlabEntry - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v20 = v18->SchedulerAssist;
        v16 = (v19 & v20[5]) == 0;
        v20[5] &= v19;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v7);
  return PageFromSlabEntry;
}
