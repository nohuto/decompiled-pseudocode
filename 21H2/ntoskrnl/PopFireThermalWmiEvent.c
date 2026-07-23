/*
 * XREFs of PopFireThermalWmiEvent @ 0x14056F8B0
 * Callers:
 *     PopThermalWorker @ 0x1407C0790 (PopThermalWorker.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmFireWmiEvent @ 0x140578738 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PopFireThermalWmiEvent(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v3; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v5; // r8
  int v6; // eax
  bool v7; // zf
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  LOBYTE(v9) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  PpmFireWmiEvent(&KeGetCurrentPrcb()->PowerState.WmiDispatchPtr, &PPM_THERMAL_POLICY_CHANGE_GUID, 16LL, &v9);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v3 = KeGetCurrentIrql();
      if ( v3 <= 0xFu && CurrentIrql <= 0xFu && v3 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v7 = (v6 & v5[5]) == 0;
        v5[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
