/*
 * XREFs of _adapt@12 @ 0x4B3655DC
 * Callers:
 *     _punycode_decode@32 @ 0x4B365668 (_punycode_decode@32.c)
 *     _punycode_encode@24 @ 0x4B365B90 (_punycode_encode@24.c)
 * Callees:
 *     <none>
 */

int __fastcall adapt(int a1, int a2, char a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // edi

  if ( a3 )
    v3 = a1 / 700;
  else
    v3 = a1 / 2;
  v4 = v3 / a2 + v3;
  v5 = 0;
  while ( v4 > 455 )
  {
    v5 += 36;
    v4 /= 35;
  }
  return v5 + 36 * v4 / (v4 + 38);
}
