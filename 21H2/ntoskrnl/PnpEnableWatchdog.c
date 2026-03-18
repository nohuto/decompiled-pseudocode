/*
 * XREFs of PnpEnableWatchdog @ 0x14074ECA8
 * Callers:
 *     PnpCallDriverEntry @ 0x140747DDC (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x140749DA0 (PnpCallAddDevice.c)
 *     PnpDeviceCompletionRequestCreate @ 0x14074D338 (PnpDeviceCompletionRequestCreate.c)
 *     PnpDeviceEventWorker @ 0x1407D5E30 (PnpDeviceEventWorker.c)
 *     PnpDelayedRemoveWorker @ 0x14080EBD0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     WdtpArmTimer @ 0x1402D3D0C (WdtpArmTimer.c)
 *     PnpAllocateWatchdog @ 0x1402D5A78 (PnpAllocateWatchdog.c)
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
