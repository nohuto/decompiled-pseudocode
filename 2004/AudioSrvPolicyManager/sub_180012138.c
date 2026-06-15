/*
 * XREFs of sub_180012138 @ 0x180012138
 * Callers:
 *     sub_18001E6B8 @ 0x18001E6B8 (sub_18001E6B8.c)
 *     sub_18001F090 @ 0x18001F090 (sub_18001F090.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_18002CAC0 @ 0x18002CAC0 (sub_18002CAC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180012138(_DWORD *a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1[141] != 1 )
  {
    a1[143] = 0;
    a1[145] = 0;
    a1[141] = 1;
    a1[142] = 1;
    a1[144] = 1;
    a1[146] = 1;
    a1[147] = 1;
  }
  return result;
}
