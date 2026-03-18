/*
 * XREFs of HalpQueryPerDeviceMsiLimitInformation @ 0x1406E2A58
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A47990 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryPerDeviceMsiLimitInformation(_WORD *a1)
{
  *a1 = HalpInterruptPerDeviceMsiLimit;
  return 0LL;
}
