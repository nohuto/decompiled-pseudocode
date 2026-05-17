/*
 * XREFs of _CheckOneBitValidFlag@8 @ 0x4B2EB92A
 * Callers:
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckOneBitValidFlag(int a1, int a2)
{
  int v2; // ecx

  if ( (~a2 & a1) != 0 )
    return 0;
  v2 = a2 & a1;
  if ( !v2 )
    return 0;
  while ( (v2 & 1) == 0 )
    v2 >>= 1;
  return v2 <= 1;
}
