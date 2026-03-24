/*
 * XREFs of PnpFreeWatchdog @ 0x14027F8C4
 * Callers:
 *     PnpDisableWatchdog @ 0x1406774E0 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x1407703C4 (PnpCallDriverEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
