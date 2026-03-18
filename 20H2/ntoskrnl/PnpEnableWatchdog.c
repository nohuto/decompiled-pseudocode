/*
 * XREFs of PnpEnableWatchdog @ 0x1406F4BBC
 * Callers:
 *     PnpDeviceEventWorker @ 0x14064A080 (PnpDeviceEventWorker.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140737D4C (PnpDeviceCompletionRequestCreate.c)
 *     PnpCallAddDevice @ 0x1407394EC (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x14076C0A8 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x14076D540 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     WdtpArmTimer @ 0x14033BFE0 (WdtpArmTimer.c)
 *     PnpAllocateWatchdog @ 0x14033C978 (PnpAllocateWatchdog.c)
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
