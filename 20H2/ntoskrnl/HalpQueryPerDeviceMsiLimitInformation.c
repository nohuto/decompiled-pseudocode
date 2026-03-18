/*
 * XREFs of HalpQueryPerDeviceMsiLimitInformation @ 0x1406DDE50
 * Callers:
 *     HaliQuerySystemInformation @ 0x140992C80 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryPerDeviceMsiLimitInformation(_WORD *a1)
{
  *a1 = HalpInterruptPerDeviceMsiLimit;
  return 0LL;
}
