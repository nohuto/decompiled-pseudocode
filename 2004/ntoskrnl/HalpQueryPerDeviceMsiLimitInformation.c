/*
 * XREFs of HalpQueryPerDeviceMsiLimitInformation @ 0x14070BCD0
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098CF00 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryPerDeviceMsiLimitInformation(_WORD *a1)
{
  *a1 = HalpInterruptPerDeviceMsiLimit;
  return 0LL;
}
