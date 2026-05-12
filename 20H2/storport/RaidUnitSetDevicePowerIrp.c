/*
 * XREFs of RaidUnitSetDevicePowerIrp @ 0x1C001260C
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1C001231C (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C000B644 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012D3C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D41C (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidUnitSetDevicePowerIrp(__int64 Context, PIRP Irp)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(Context + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 50LL, &WPP_b3ad513c322230fb96603cfbc644830e_Traceguids, Context, Irp);
  }
  if ( *(_DWORD *)(Context + 492) == 4
    && Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
  {
    if ( (*(_BYTE *)(v2 + 109) & 4) == 0
      && *(_QWORD *)(v2 + 5088)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(Context + 3360), 1, 0) )
    {
      RaidAdapterPoFxActivateComponent(v2, 0LL, 0LL);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
    if ( *(int *)(v2 + 292) > 1 )
    {
      LOBYTE(v5) = 1;
      *(_BYTE *)(Context + 1913) = 1;
      *(_QWORD *)(Context + 1920) = Irp;
      RaUnitAcquireRemoveLock(Context, (__int64)Irp, v5);
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 5072), (PSLIST_ENTRY)(Context + 1936));
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 259LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return RaidUnitProcessSetDevicePowerIrp((PVOID)Context, Irp);
}
