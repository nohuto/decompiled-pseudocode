/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x1402A6260
 * Callers:
 *     PoRunDownDeviceObject @ 0x1402A5F48 (PoRunDownDeviceObject.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopCheckForWork @ 0x14026F4C0 (PopCheckForWork.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetDope @ 0x140399E54 (PopGetDope.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  unsigned __int64 v9; // rbp
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rdx
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // rcx
  ULONG DeviceType; // eax
  int v15; // r14d
  __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  struct _LIST_ENTRY *Blink; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r8
  int v29; // eax

  v4 = 0LL;
  if ( !ConservationIdleTime && !PerformanceIdleTime )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    Dope = DeviceObject->DeviceObjectExtension->Dope;
    if ( !Dope )
      goto LABEL_4;
    p_IdleList = &Dope->IdleList;
    Flink = Dope->IdleList.Flink;
    if ( Flink == &Dope->IdleList )
      goto LABEL_4;
    Blink = Dope->IdleList.Blink;
    if ( Flink->Blink == p_IdleList && Blink->Flink == p_IdleList )
    {
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      *(_QWORD *)&Dope->IdleType = 0LL;
      *(_QWORD *)&Dope->ConservationIdleTime = 0LL;
      Dope->CurrentState = PowerDeviceUnspecified;
      Dope->IdleCount = 0;
      Dope->BusyCount = 0;
      Dope->BusyReference = 0;
      Dope->TotalBusyCount = 0;
      Dope->Specific = 0LL;
      Dope->IdleList.Blink = &Dope->IdleList;
      p_IdleList->Flink = p_IdleList;
LABEL_4:
      KxReleaseSpinLock(&PopDopeGlobalLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v25 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
      return v4;
    }
LABEL_30:
    __fastfail(3u);
  }
  if ( (unsigned int)(State - 2) > 2 )
    return v4;
  DeviceType = DeviceObject->DeviceType;
  v15 = 0;
  if ( DeviceType == 7 || DeviceType == 45 )
  {
    if ( !PopPlatformAoAc && (DeviceObject->Characteristics & 1) != 0 )
      return v4;
    v15 = 1;
  }
  v16 = PopGetDope();
  if ( !v16 )
    return v4;
  v17 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v18 = (_QWORD *)(v16 + 32);
  *(_DWORD *)(v16 + 16) = ConservationIdleTime;
  *(_DWORD *)(v16 + 20) = PerformanceIdleTime;
  *(_DWORD *)(v16 + 52) = State;
  *(_DWORD *)(v16 + 48) = v15;
  if ( (_QWORD *)*v18 == v18 )
  {
    *(_DWORD *)(v16 + 56) = 1;
    v19 = (_QWORD *)qword_140C230D8;
    if ( *(__int64 **)qword_140C230D8 != &PopIdleDetectList )
      goto LABEL_30;
    *v18 = &PopIdleDetectList;
    *(_QWORD *)(v16 + 40) = v19;
    *v19 = v18;
    qword_140C230D8 = v16 + 32;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
        v25 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(v17);
  PopCheckForWork();
  return (PULONG)v16;
}
