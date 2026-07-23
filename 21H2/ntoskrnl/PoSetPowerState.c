/*
 * XREFs of PoSetPowerState @ 0x14037C3F0
 * Callers:
 *     IopPowerDispatch @ 0x14038B2F0 (IopPowerDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

POWER_STATE __stdcall PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbp
  int v6; // edi
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  if ( Type == SystemPowerState )
  {
    v6 = DeviceObjectExtension->PowerFlags & 0xF;
    if ( v6 == State.SystemState )
      goto LABEL_6;
    v8 = DeviceObjectExtension->PowerFlags & 0xFFFFFFF0;
    v9 = State.SystemState & 0xF;
    goto LABEL_5;
  }
  if ( Type == DevicePowerState )
  {
    v6 = (DeviceObjectExtension->PowerFlags >> 4) & 0xF;
    if ( v6 != State.SystemState )
    {
      v8 = DeviceObjectExtension->PowerFlags & 0xFFFFFF0F;
      v9 = 16 * (State.SystemState & 0xF);
LABEL_5:
      DeviceObjectExtension->PowerFlags = v8 | v9;
    }
  }
LABEL_6:
  KxReleaseSpinLock(&PopIrpSerialLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return (POWER_STATE)v6;
}
