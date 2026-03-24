/*
 * XREFs of PnpEnableWatchdog @ 0x140677554
 * Callers:
 *     PnpDeviceEventWorker @ 0x1406E78D0 (PnpDeviceEventWorker.c)
 *     PnpDelayedRemoveWorker @ 0x140735EC0 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x14073E92C (PnpCallAddDevice.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140746FAC (PnpDeviceCompletionRequestCreate.c)
 *     PnpCallDriverEntry @ 0x1407703C4 (PnpCallDriverEntry.c)
 * Callees:
 *     WdtpArmTimer @ 0x14027F8E0 (WdtpArmTimer.c)
 *     PnpAllocateWatchdog @ 0x140280324 (PnpAllocateWatchdog.c)
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
