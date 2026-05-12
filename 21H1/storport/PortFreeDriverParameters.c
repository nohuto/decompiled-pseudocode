/*
 * XREFs of PortFreeDriverParameters @ 0x1C007AE14
 * Callers:
 *     RaidDeleteAdapter @ 0x1C002F794 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
