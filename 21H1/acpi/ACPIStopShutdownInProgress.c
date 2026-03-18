/*
 * XREFs of ACPIStopShutdownInProgress @ 0x1C005F058
 * Callers:
 *     ACPINotifyOsShutdownWorker @ 0x1C005E8F0 (ACPINotifyOsShutdownWorker.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x1C005F0F0 (AcpiShutdownNotificationTimerWorkItem.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIStopShutdownInProgress(__int64 a1)
{
  KIRQL v2; // al

  *(_BYTE *)a1 = 0;
  KeCancelTimer((PKTIMER)(a1 + 8));
  *(_DWORD *)(a1 + 192) = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  AcpiNotifyOsShutdownInProgress = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v2);
}
