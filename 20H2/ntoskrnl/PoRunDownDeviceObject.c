/*
 * XREFs of PoRunDownDeviceObject @ 0x1402034A8
 * Callers:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 * Callees:
 *     PoRegisterDeviceForIdleDetection @ 0x1402037C0 (PoRegisterDeviceForIdleDetection.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MmLockPagableSectionByHandle @ 0x1405D6560 (MmLockPagableSectionByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

PULONG __fastcall PoRunDownDeviceObject(struct _DEVICE_OBJECT *a1)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rsi
  PULONG result; // rax
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rbx
  KIRQL v4; // al
  _LIST_ENTRY *p_Volume; // rcx
  unsigned __int64 v6; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  DeviceObjectExtension = a1->DeviceObjectExtension;
  result = PoRegisterDeviceForIdleDetection(a1, 0, 0, PowerDeviceUnspecified);
  Dope = DeviceObjectExtension->Dope;
  if ( Dope )
  {
    MmLockPagableSectionByHandle(ExPageLockHandle);
    ExAcquireFastMutex(&PopVolumeLock);
    v4 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    p_Volume = &Dope->Volume;
    v6 = v4;
    Flink = Dope->Volume.Flink;
    if ( Flink )
    {
      Blink = Dope->Volume.Blink;
      if ( Flink->Blink != p_Volume || Blink->Flink != p_Volume )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      p_Volume->Flink = 0LL;
      Dope->Volume.Blink = 0LL;
    }
    DeviceObjectExtension->Dope = 0LL;
    ExFreePoolWithTag(Dope, 0);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
    KeReleaseGuardedMutex(&PopVolumeLock);
    return (PULONG)MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
  }
  return result;
}
