/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x1402EB59C
 * Callers:
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 * Callees:
 *     MiGetPageFromSlabEntry @ 0x1402EB71C (MiGetPageFromSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402EB8BC (MiUpdateSlabPagePlaceholderState.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabStandbyPage @ 0x1405B130C (MiGetSlabStandbyPage.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocator(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 PageFromSlabEntry; // rsi
  unsigned __int64 v6; // r14
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

  if ( !(*(_QWORD *)(a1 + 64) + *(_QWORD *)(a1 + 32)) )
    return -1LL;
  v2 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 24);
  v4 = v2;
  if ( !v3 )
    goto LABEL_11;
  PageFromSlabEntry = MiGetPageFromSlabEntry(v3, a1);
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
          goto LABEL_4;
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
LABEL_4:
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  if ( PageFromSlabEntry == -1 )
    return MiGetSlabStandbyPage(a1);
  v6 = (unsigned __int8)MiLockPageInline(48 * PageFromSlabEntry - 0x220000000000LL);
  MiUpdateSlabPagePlaceholderState(a1, PageFromSlabEntry, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * PageFromSlabEntry - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v6 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v20 = v18->SchedulerAssist;
        v16 = (v19 & v20[5]) == 0;
        v20[5] &= v19;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v6);
  return PageFromSlabEntry;
}
