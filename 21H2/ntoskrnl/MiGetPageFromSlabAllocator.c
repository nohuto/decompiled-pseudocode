/*
 * XREFs of MiGetPageFromSlabAllocator @ 0x1402E80D0
 * Callers:
 *     MiGetSlabPage @ 0x1402E803C (MiGetSlabPage.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140375928 (MiUpdateSlabPagePlaceholderState.c)
 *     MiGetPageFromSlabEntry @ 0x140379F74 (MiGetPageFromSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabStandbyPage @ 0x1405530CC (MiGetSlabStandbyPage.c)
 */

__int64 __fastcall MiGetPageFromSlabAllocator(__int64 a1)
{
  KIRQL v3; // al
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 PageFromSlabEntry; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  int v21; // eax
  _DWORD *v22; // r8

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
    v10 = *(_QWORD *)(a1 + 8);
    if ( (v10 & 1) != 0 )
    {
      if ( v10 != 1 )
      {
        v11 = (_QWORD *)(v10 ^ (a1 | 1));
        goto LABEL_15;
      }
    }
    else
    {
      v11 = *(_QWORD **)(a1 + 8);
LABEL_15:
      while ( v11 )
      {
        PageFromSlabEntry = MiGetPageFromSlabEntry(v11, a1);
        if ( PageFromSlabEntry != -1 )
        {
          *(_QWORD *)(a1 + 24) = v11;
          goto LABEL_5;
        }
        v12 = (_QWORD *)v11[1];
        v13 = v11;
        if ( v12 )
        {
          do
          {
            v11 = v12;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 );
        }
        else
        {
          while ( 1 )
          {
            v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v11 || (_QWORD *)*v11 == v13 )
              break;
            v13 = v11;
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
        v7 = -1LL << ((unsigned __int8)v5 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)v7;
        v18 = (v17 & SchedulerAssist[5]) == 0;
        v8 = (unsigned int)v17 & SchedulerAssist[5];
        SchedulerAssist[5] = v8;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( PageFromSlabEntry == -1 )
    return MiGetSlabStandbyPage(a1);
  v9 = (unsigned __int8)MiLockPageInline(48 * PageFromSlabEntry - 0x58000000000LL, v7, v8);
  MiUpdateSlabPagePlaceholderState(a1, PageFromSlabEntry, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * PageFromSlabEntry - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v22 = v20->SchedulerAssist;
        v18 = (v21 & v22[5]) == 0;
        v22[5] &= v21;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(v9);
  return PageFromSlabEntry;
}
