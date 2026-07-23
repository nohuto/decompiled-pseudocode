/*
 * XREFs of HalpcSetCmosDataByType @ 0x1404D6580
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmosRangeHandler @ 0x1404D625C (HalpCmosRangeHandler.c)
 */

__int64 __fastcall HalpcSetCmosDataByType(int a1, unsigned int a2, __int64 a3, int a4)
{
  return HalpCmosRangeHandler(1, a1, a2, a3, a4);
}
