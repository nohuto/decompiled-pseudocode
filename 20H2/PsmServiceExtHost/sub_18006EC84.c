/*
 * XREFs of sub_18006EC84 @ 0x18006EC84
 * Callers:
 *     sub_18006E42C @ 0x18006E42C (sub_18006E42C.c)
 *     sub_18006E928 @ 0x18006E928 (sub_18006E928.c)
 *     sub_18006EEBC @ 0x18006EEBC (sub_18006EEBC.c)
 *     sub_18006F39C @ 0x18006F39C (sub_18006F39C.c)
 *     sub_18006F434 @ 0x18006F434 (sub_18006F434.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18006EC84(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 148);
  if ( (result & 4) == 0 )
  {
    result |= 1u;
    *(_BYTE *)(a1 + 148) = result;
    if ( (result & 2) == 0 )
    {
      *(_BYTE *)(a1 + 148) = result | 2;
      return TpPostWork(*(_QWORD *)(a1 + 64));
    }
  }
  return result;
}
