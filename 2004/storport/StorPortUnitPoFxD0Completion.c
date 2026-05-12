/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x1C0011FA0
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00118F8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006C44 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0007310 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0012084 (RaidUnitCancelWaitWakeIrp.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C003CA2C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r8d
  void *v6; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !RaidUnitCheckAndAcquirePoFx(a4) )
    goto LABEL_8;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1744) + 36LL), 0, 1) )
    RaidUnitPoFxIdleComponent(a4, 0, 0, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 40), &LockHandle);
  RaidUnitCancelWaitWakeIrp(a4);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1744));
  if ( StorEtwLoggingEnabled )
  {
    if ( (*(_BYTE *)(a4 + 451) & 2) != 0 )
    {
      if ( (byte_1C0068841 & 1) == 0 )
        goto LABEL_7;
      v6 = &EventUnitDirectedPowerUpStop;
    }
    else
    {
      if ( (byte_1C0068841 & 1) == 0 )
        goto LABEL_7;
      v6 = &EventUnitPowerRequiredStop;
    }
    McTemplateK0pquuuq_EtwWriteTransfer(
      *(_QWORD *)(a4 + 24),
      (_DWORD)v6,
      v5,
      **(_QWORD **)(a4 + 1744),
      *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
      *(_BYTE *)(a4 + 96),
      *(_BYTE *)(a4 + 97),
      *(_BYTE *)(a4 + 98),
      1);
  }
LABEL_7:
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1736));
LABEL_8:
  if ( *(_DWORD *)(a4 + 3280) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a4 + 24) + 1112LL));
}
