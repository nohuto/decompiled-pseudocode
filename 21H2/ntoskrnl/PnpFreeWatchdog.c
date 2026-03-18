/*
 * XREFs of PnpFreeWatchdog @ 0x1402D3C18
 * Callers:
 *     PnpCallDriverEntry @ 0x140747DDC (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x140749DA0 (PnpCallAddDevice.c)
 *     PnpDisableWatchdog @ 0x14074D6EC (PnpDisableWatchdog.c)
 *     PnpDelayedRemoveWorker @ 0x14080EBD0 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x140947450 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
