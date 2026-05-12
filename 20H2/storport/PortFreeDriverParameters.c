/*
 * XREFs of PortFreeDriverParameters @ 0x1C007C234
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0030BB4 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
