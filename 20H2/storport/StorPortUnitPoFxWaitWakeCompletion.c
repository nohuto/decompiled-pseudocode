/*
 * XREFs of StorPortUnitPoFxWaitWakeCompletion @ 0x1C0041D40
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D54 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006350 (RaidUnitCheckAndAcquirePoFx.c)
 */

void __fastcall StorPortUnitPoFxWaitWakeCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  __int64 v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    *(_QWORD *)(*(_QWORD *)(Context + 1744) + 64LL) = 0LL;
    if ( Status >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
      v7 = *(_QWORD *)(Context + 1744);
      *(_DWORD *)(Context + 816) = 2;
      *(_DWORD *)(v7 + 32) |= 0x10u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( (*(_DWORD *)(Context + 492) != 1 || (*(_BYTE *)(Context + 449) & 1) != 0)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1744) + 36LL), 1, 0) )
    {
      RaidUnitPoFxActivateComponent(Context, 0, 0LL, 0LL);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
  }
}
