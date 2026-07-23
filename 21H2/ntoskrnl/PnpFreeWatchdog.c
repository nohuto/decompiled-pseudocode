/*
 * XREFs of PnpFreeWatchdog @ 0x14026DB04
 * Callers:
 *     PnpDisableWatchdog @ 0x14066AC20 (PnpDisableWatchdog.c)
 *     PnpCallDriverEntry @ 0x140770584 (PnpCallDriverEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeWatchdog(void *a1)
{
  ExFreePoolWithTag(a1, 0x57647050u);
}
