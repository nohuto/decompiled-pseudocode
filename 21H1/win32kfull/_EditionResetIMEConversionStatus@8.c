/*
 * XREFs of _EditionResetIMEConversionStatus@8 @ 0xECA3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __stdcall EditionResetIMEConversionStatus(int a1, int a2)
{
  __int16 result; // ax

  result = a1;
  if ( !a1 || !a2 || (result = *(_WORD *)(a2 + 20) ^ *(_WORD *)(a1 + 20), (result & 0x3FF) != 0) )
    gdwIMEConversionStatus = -1;
  return result;
}
