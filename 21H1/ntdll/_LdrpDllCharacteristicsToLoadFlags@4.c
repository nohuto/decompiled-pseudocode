/*
 * XREFs of _LdrpDllCharacteristicsToLoadFlags@4 @ 0x4B2CE8B0
 * Callers:
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 * Callees:
 *     <none>
 */

int __fastcall LdrpDllCharacteristicsToLoadFlags(int a1)
{
  int result; // eax

  result = 2 * (a1 & 4);
  if ( (a1 & 2) != 0 )
    result |= 0x40u;
  if ( (a1 & 0x800000) != 0 )
    result |= 0x80u;
  if ( (a1 & 0x1000) != 0 )
    result |= 0x100u;
  if ( a1 < 0 )
    return result | 0x400000;
  return result;
}
