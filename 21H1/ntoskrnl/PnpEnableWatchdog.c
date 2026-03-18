/*
 * XREFs of PnpEnableWatchdog @ 0x14070AF34
 * Callers:
 *     PnpDeviceEventWorker @ 0x14070A0D0 (PnpDeviceEventWorker.c)
 *     PnpCallAddDevice @ 0x140723FC0 (PnpCallAddDevice.c)
 *     PnpDeviceCompletionRequestCreate @ 0x14072C63C (PnpDeviceCompletionRequestCreate.c)
 *     PnpDelayedRemoveWorker @ 0x140737340 (PnpDelayedRemoveWorker.c)
 *     PnpCallDriverEntry @ 0x14075B558 (PnpCallDriverEntry.c)
 * Callees:
 *     WdtpArmTimer @ 0x14035B400 (WdtpArmTimer.c)
 *     PnpAllocateWatchdog @ 0x14035BBB8 (PnpAllocateWatchdog.c)
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
