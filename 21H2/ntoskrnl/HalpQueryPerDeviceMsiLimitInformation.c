/*
 * XREFs of HalpQueryPerDeviceMsiLimitInformation @ 0x1406BDEA0
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098FEF0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryPerDeviceMsiLimitInformation(_WORD *a1)
{
  *a1 = HalpInterruptPerDeviceMsiLimit;
  return 0LL;
}
