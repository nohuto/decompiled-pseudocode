/*
 * XREFs of PortFreeDriverParameters @ 0x1C007AD34
 * Callers:
 *     RaidDeleteAdapter @ 0x1C002FD44 (RaidDeleteAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall PortFreeDriverParameters(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
