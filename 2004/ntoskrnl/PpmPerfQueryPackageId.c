/*
 * XREFs of PpmPerfQueryPackageId @ 0x1405693F0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 33848);
}
