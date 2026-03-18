/*
 * XREFs of PnpFreeWatchdog @ 0x14035B3E4
 * Callers:
 *     PnpDisableWatchdog @ 0x14070AEC0 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x14075B558 (PnpCallDriverEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
