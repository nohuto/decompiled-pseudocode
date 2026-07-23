/*
 * XREFs of HalpLbrClearStack @ 0x1404DD420
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char HalpLbrClearStack()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v2; // r9
  int v3; // r11d
  unsigned int v4; // r8d
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v7; // r9
  int v8; // edx
  bool v9; // zf

  if ( !HalpLbrStackSize || !HalpLbrAreOperationsAllowed )
    return 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v2 = __readmsr(0x1D9u);
  __writemsr(0x1D9u, v2 & 0xFFFFFFFFFFFFFFFEuLL);
  v3 = HalpLbrStackSize;
  __writemsr(0x1C9u, (unsigned int)(HalpLbrStackSize - 1));
  v4 = 0;
  if ( v3 )
  {
    do
    {
      __writemsr(v4 + 1664, 0LL);
      ++v4;
    }
    while ( v4 < HalpLbrStackSize );
  }
  __writemsr(0x1D9u, v2 | 1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1;
}
