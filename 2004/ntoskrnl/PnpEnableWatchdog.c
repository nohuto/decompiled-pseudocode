/*
 * XREFs of PnpEnableWatchdog @ 0x140649940
 * Callers:
 *     PnpDeviceEventWorker @ 0x140648C30 (PnpDeviceEventWorker.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1407292BC (PnpDeviceCompletionRequestCreate.c)
 *     PnpCallAddDevice @ 0x14072AA5C (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x14075DA40 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x14075EED0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     WdtpArmTimer @ 0x140275250 (WdtpArmTimer.c)
 *     PnpAllocateWatchdog @ 0x140275A08 (PnpAllocateWatchdog.c)
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
