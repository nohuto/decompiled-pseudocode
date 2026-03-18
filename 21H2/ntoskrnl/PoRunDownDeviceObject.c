/*
 * XREFs of PoRunDownDeviceObject @ 0x1402D3980
 * Callers:
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1402D3A70 (PoRegisterDeviceForIdleDetection.c)
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
