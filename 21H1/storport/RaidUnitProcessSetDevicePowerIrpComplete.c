/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000FB38
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000FA2C (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006D20 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidRestartIoQueue @ 0x1C00082CC (RaidRestartIoQueue.c)
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000BD94 (RaUnitAcquireRemoveLock.c)
 *     RaidResumeUnitQueue @ 0x1C000E680 (RaidResumeUnitQueue.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000FDA4 (StorUpdateCrashDumpPowerReady.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C001012C (StorPortUnitPoFxD0Completion.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     WPP_SF_qqD @ 0x1C0032120 (WPP_SF_qqD.c)
 *     McTemplateK0quuupd_EtwWriteTransfer @ 0x1C003C8B8 (McTemplateK0quuupd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(__int64 Context, PIRP Irp)
{
  unsigned int LowPart; // ebx
  struct _DEVICE_OBJECT *v5; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  int v12; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  __int128 v15; // [rsp+68h] [rbp-20h] BYREF

  Irp->IoStatus.Status = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v5 = *(struct _DEVICE_OBJECT **)(Context + 8);
  *(_DWORD *)(Context + 492) = LowPart;
  PoSetPowerState(v5, DevicePowerState, (POWER_STATE)LowPart);
  if ( LowPart == 1 && *(char *)(Context + 448) < 0 )
  {
    RaidResumeUnitQueue(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidRestartIoQueue(Context);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *(_DWORD *)(Context + 492) == 1 )
  {
    if ( RaidUnitCheckAndAcquirePoFx(Context) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) & 0x100) != 0 )
      {
        ++*(_DWORD *)(Context + 3200);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(Context + 456), 1u) )
        {
          WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context + 8));
          v7 = WorkItem;
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock(Context, (__int64)WorkItem, 0LL);
            IoQueueWorkItemEx(v7, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, (PVOID)Context);
          }
        }
        *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~0x200u;
      }
      if ( !RaidUnitCheckAndAcquirePoFx(Context)
        || (v11 = *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736)),
            (v11 & 1) != 0) )
      {
        if ( *(_BYTE *)(Context + 695) )
        {
          *(_BYTE *)(Context + 695) = 0;
          RaidRestartIoQueue(Context);
        }
      }
      StorPortUnitPoFxD0Completion(v9, v8, v10, Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
    }
    else if ( *(_BYTE *)(Context + 695) )
    {
      *(_BYTE *)(Context + 695) = 0;
      RaidRestartIoQueue(Context);
    }
  }
  else if ( !*(_BYTE *)(Context + 695) )
  {
    *(_BYTE *)(Context + 695) = 1;
  }
  if ( *(_DWORD *)(Context + 920) )
    StorUpdateCrashDumpPowerReady(*(_QWORD *)(Context + 24));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      51LL,
      &WPP_9beceae3e67f3ebeaf45b51d134464fb_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v15 = 0LL;
    IoGetActivityIdIrp(Irp, &v15);
    if ( (byte_1C0068841 & 1) != 0 )
      McTemplateK0quuupd_EtwWriteTransfer(
        v12,
        *(_QWORD *)(Context + 24),
        (unsigned int)&v15,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 96),
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        (char)Irp);
  }
  return RaidCompleteRequestEx(Irp, 0, 0);
}
