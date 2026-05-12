/*
 * XREFs of StorPortUnitDirectedPowerUpRequestD0 @ 0x1C0040800
 * Callers:
 *     StorPortUnitDirectedPowerUp @ 0x1C0040650 (StorPortUnitDirectedPowerUp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006C44 (RaidUnitPoFxIdleComponent.c)
 *     RaFlushDFxQueue @ 0x1C0033424 (RaFlushDFxQueue.c)
 *     McTemplateK0pquuuq_EtwWriteTransfer @ 0x1C003CA2C (McTemplateK0pquuuq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitDirectedPowerUpRequestD0(char *Context)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-58h]
  PIRP *Irp; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  if ( *((_DWORD *)Context + 123) != 1 || (Context[449] & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)StorPortUnitDirectedPowerUpCompletion,
           Context,
           0LL) == 259 )
    {
      Context[448] |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)Context + 440, 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)Context + 218) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent((__int64)Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 218));
  if ( StorEtwLoggingEnabled && (byte_1C0068841 & 1) != 0 )
  {
    v3 = *((_QWORD *)Context + 3);
    LOBYTE(Irp) = Context[96];
    LODWORD(Contexta) = *(_DWORD *)(v3 + 56);
    McTemplateK0pquuuq_EtwWriteTransfer(
      v3,
      &EventUnitDirectedPowerUpStop,
      v2,
      **((_QWORD **)Context + 218),
      Contexta,
      Irp,
      Context[97],
      Context[98],
      0);
  }
  if ( *((char **)Context + 415) != Context + 3320 )
    RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
}
