/*
 * XREFs of HalpHalExtInitSystem @ 0x1409A2600
 * Callers:
 *     <none>
 * Callees:
 *     HalpExtInitExtensions @ 0x140A6FE38 (HalpExtInitExtensions.c)
 */

__int64 __fastcall HalpHalExtInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
    return HalpExtInitExtensions(a3);
  else
    return 0LL;
}
