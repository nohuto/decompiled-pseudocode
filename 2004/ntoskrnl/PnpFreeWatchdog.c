/*
 * XREFs of PnpFreeWatchdog @ 0x140275234
 * Callers:
 *     PnpDisableWatchdog @ 0x1406498CC (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x14075DA40 (PnpCallDriverEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
