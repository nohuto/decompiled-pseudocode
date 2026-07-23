/*
 * XREFs of HalReadBootRegister @ 0x1409AA580
 * Callers:
 *     HalpResetSBF @ 0x14099C49C (HalpResetSBF.c)
 *     HalpInitBootTable @ 0x140A65DF0 (HalpInitBootTable.c)
 * Callees:
 *     HalpGetCmosData @ 0x1404CC4B0 (HalpGetCmosData.c)
 */

__int64 __fastcall HalReadBootRegister(__int64 a1)
{
  if ( !HalpSimpleBootFlagTable )
    return 3221225486LL;
  if ( !a1 )
    return 3221225485LL;
  HalpGetCmosData(0, *(unsigned __int8 *)(HalpSimpleBootFlagTable + 36), a1, 1);
  return 0LL;
}
