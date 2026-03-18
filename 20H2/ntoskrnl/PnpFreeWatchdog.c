/*
 * XREFs of PnpFreeWatchdog @ 0x14033BFC4
 * Callers:
 *     PnpDisableWatchdog @ 0x1406F4B48 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x14076C0A8 (PnpCallDriverEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
