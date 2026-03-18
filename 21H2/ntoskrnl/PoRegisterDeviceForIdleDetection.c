/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x1402D3A70
 * Callers:
 *     PoRunDownDeviceObject @ 0x1402D3980 (PoRunDownDeviceObject.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     PopGetDope @ 0x14025A904 (PopGetDope.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopCheckForWork @ 0x1402D62A8 (PopCheckForWork.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
  struct _LIST_ENTRY *Blink; // r8
  ULONG DeviceType; // eax
  int v16; // r14d
  __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
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
LABEL_29:
    __fastfail(3u);
  }
  if ( (unsigned int)(State - 2) > 2 )
    return v4;
  DeviceType = DeviceObject->DeviceType;
  v16 = 0;
  if ( DeviceType == 7 || DeviceType == 45 )
  {
    if ( !PopPlatformAoAc && (DeviceObject->Characteristics & 1) != 0 )
      return v4;
    v16 = 1;
  }
  v17 = PopGetDope((__int64)DeviceObject);
  if ( !v17 )
    return v4;
  v18 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v19 = (_QWORD *)(v17 + 32);
  *(_DWORD *)(v17 + 16) = ConservationIdleTime;
  *(_DWORD *)(v17 + 20) = PerformanceIdleTime;
  *(_DWORD *)(v17 + 52) = State;
  *(_DWORD *)(v17 + 48) = v16;
  if ( (_QWORD *)*v19 == v19 )
  {
    *(_DWORD *)(v17 + 56) = 1;
    v20 = (_QWORD *)qword_140C23058;
    if ( *(__int64 **)qword_140C23058 != &PopIdleDetectList )
      goto LABEL_29;
    *v19 = &PopIdleDetectList;
    *(_QWORD *)(v17 + 40) = v20;
    *v20 = v19;
    qword_140C23058 = v17 + 32;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
        v25 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(v18);
  PopCheckForWork();
  return (PULONG)v17;
}
