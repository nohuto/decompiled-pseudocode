/*
 * XREFs of MiIoSpaceRunIsConstant @ 0x140216A68
 * Callers:
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 * Callees:
 *     MiIoSpaceIsConstant @ 0x140217AE0 (MiIoSpaceIsConstant.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIoSpaceRunIsConstant(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // rbx
  bool v4; // zf
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // di
  __int64 IsConstant; // rsi
  __int64 v8; // r11
  _DWORD *SchedulerAssist; // r10
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax

  v3 = a2;
  v4 = a2 == 0LL;
  v5 = 1LL;
  if ( v4 )
    v5 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  IsConstant = MiIoSpaceIsConstant(a1, v5);
  if ( IsConstant && v3 )
  {
    while ( --v8 )
    {
      v11 = *v3;
      if ( ((unsigned __int64)*v3 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0)
        && IsConstant != MiIoSpaceIsConstant(v11, 1LL) )
      {
        IsConstant = 0LL;
        break;
      }
      ++v3;
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v4 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return IsConstant;
}
