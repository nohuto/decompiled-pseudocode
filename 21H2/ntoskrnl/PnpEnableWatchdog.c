/*
 * XREFs of PnpEnableWatchdog @ 0x14066AC94
 * Callers:
 *     PnpDeviceEventWorker @ 0x1406FECB0 (PnpDeviceEventWorker.c)
 *     PnpDelayedRemoveWorker @ 0x140736080 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x14073EAEC (PnpCallAddDevice.c)
 *     PnpDeviceCompletionRequestCreate @ 0x14074716C (PnpDeviceCompletionRequestCreate.c)
 *     PnpCallDriverEntry @ 0x140770584 (PnpCallDriverEntry.c)
 * Callees:
 *     WdtpArmTimer @ 0x14026DB20 (WdtpArmTimer.c)
 *     PnpAllocateWatchdog @ 0x14026E564 (PnpAllocateWatchdog.c)
 */

_QWORD *__fastcall PnpEnableWatchdog(int a1, __int64 a2)
{
  _QWORD *Watchdog; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  Watchdog = PnpAllocateWatchdog();
  v5 = Watchdog;
  if ( Watchdog )
  {
    Watchdog[3] = a2;
    *((_DWORD *)Watchdog + 4) = a1;
    v6 = Watchdog[1];
    *Watchdog = MEMORY[0xFFFFF78000000008];
    WdtpArmTimer(v6);
  }
  return v5;
}
