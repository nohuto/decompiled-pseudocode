/*
 * XREFs of PpmPerfQueryPackageId @ 0x140568DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 33848);
}
