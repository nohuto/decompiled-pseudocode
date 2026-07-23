/*
 * XREFs of PopDeviceConstraintsEnforced @ 0x14057F524
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x1408EEF38 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA800 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

bool PopDeviceConstraintsEnforced()
{
  bool v0; // bl
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  _PPM_IDLE_STATES *IdleStates; // rcx
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v6; // r9
  int v7; // edx
  bool v8; // zf

  v0 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
  if ( IdleStates && IdleStates->InterfaceVersion == 1 )
    v0 = PpmPlatformStates != 0;
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
  __writecr8(CurrentIrql);
  return v0;
}
