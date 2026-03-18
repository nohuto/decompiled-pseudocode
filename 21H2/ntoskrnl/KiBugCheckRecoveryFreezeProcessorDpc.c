/*
 * XREFs of KiBugCheckRecoveryFreezeProcessorDpc @ 0x140578DE0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiBugCheckRecoveryFreezeProcessorDpc()
{
  __int16 v0; // di
  bool v1; // di
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax
  __int16 v10; // [rsp+20h] [rbp-8h]

  v0 = v10;
  _disable();
  v1 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  _InterlockedAdd(&KiFreezeInDpcCount, 1u);
  while ( KiFreezeInDpc )
    _mm_pause();
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & v6[5]) == 0;
        v6[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v1 )
    _enable();
  return result;
}
