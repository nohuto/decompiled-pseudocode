/*
 * XREFs of MiIoSpaceRunIsConstant @ 0x140215D78
 * Callers:
 *     MiFillSystemPtes @ 0x140308F00 (MiFillSystemPtes.c)
 * Callees:
 *     MiIoSpaceIsConstant @ 0x1402166A4 (MiIoSpaceIsConstant.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIoSpaceRunIsConstant(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 IsConstant; // rax
  unsigned __int8 v7; // r9
  __int64 v8; // r10
  unsigned __int64 *v9; // r11
  __int64 v10; // rbx
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf

  v3 = 1LL;
  if ( !a2 )
    v3 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  IsConstant = MiIoSpaceIsConstant(a1, v3);
  v10 = IsConstant;
  if ( IsConstant )
  {
    if ( v9 )
    {
      while ( --v8 )
      {
        v13 = *v9;
        if ( (*v9 > qword_140C50840 || (*(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0)
          && (v13 < *(_QWORD *)(IsConstant + 24) || v13 > *(_QWORD *)(IsConstant + 32)) )
        {
          v10 = 0LL;
          break;
        }
        ++v9;
      }
    }
    else if ( v3 > *(_QWORD *)(IsConstant + 32) - a1 + 1 )
    {
      v10 = 0LL;
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= v7 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v10;
}
