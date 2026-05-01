/*
 * XREFs of sub_18002BF9C @ 0x18002BF9C
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 *     sub_18002BD04 @ 0x18002BD04 (sub_18002BD04.c)
 *     sub_18002BEE0 @ 0x18002BEE0 (sub_18002BEE0.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 *     sub_18003837C @ 0x18003837C (sub_18003837C.c)
 *     sub_18003B680 @ 0x18003B680 (sub_18003B680.c)
 *     sub_1800429A0 @ 0x1800429A0 (sub_1800429A0.c)
 *     sub_180042DC8 @ 0x180042DC8 (sub_180042DC8.c)
 *     sub_180043688 @ 0x180043688 (sub_180043688.c)
 *     sub_180043AF0 @ 0x180043AF0 (sub_180043AF0.c)
 *     sub_180043B74 @ 0x180043B74 (sub_180043B74.c)
 *     sub_180043CF8 @ 0x180043CF8 (sub_180043CF8.c)
 *     sub_180043E7C @ 0x180043E7C (sub_180043E7C.c)
 *     sub_180043FCC @ 0x180043FCC (sub_180043FCC.c)
 *     sub_1800441FC @ 0x1800441FC (sub_1800441FC.c)
 *     sub_180044270 @ 0x180044270 (sub_180044270.c)
 *     sub_1800442E4 @ 0x1800442E4 (sub_1800442E4.c)
 *     sub_180044348 @ 0x180044348 (sub_180044348.c)
 *     sub_1800443F0 @ 0x1800443F0 (sub_1800443F0.c)
 *     sub_18004445C @ 0x18004445C (sub_18004445C.c)
 *     sub_1800444C8 @ 0x1800444C8 (sub_1800444C8.c)
 *     sub_1800849F0 @ 0x1800849F0 (sub_1800849F0.c)
 *     sub_180084E4C @ 0x180084E4C (sub_180084E4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002BF9C(int a1)
{
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 > 23 )
  {
    if ( a1 == 29 )
      return 4LL;
    if ( a1 <= 29 )
    {
      v1 = a1 - 24;
      if ( !v1 )
        return 4LL;
      v2 = v1 - 1;
      if ( !v2 )
        return 4LL;
      v8 = v2 - 1;
      if ( v8 )
      {
        if ( (unsigned int)(v8 - 1) >= 2 )
          return 0LL;
        return 4LL;
      }
      return 8LL;
    }
    v4 = a1 - 30;
    if ( !v4 )
      return 12LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 4LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 12LL;
    v7 = v6 - 1;
    if ( !v7 )
      return 4LL;
    if ( v7 == 1 )
      return 12LL;
    return 0LL;
  }
  if ( a1 >= 22 )
    return 12LL;
  if ( a1 <= 12 )
  {
    if ( a1 == 12 )
      return 8LL;
    if ( a1 < 0 )
      return 0LL;
    if ( a1 <= 2 )
      return 4LL;
    result = 8LL;
    if ( a1 <= 8 || a1 == 10 )
      return 4LL;
    if ( a1 == 9 )
      return 12LL;
  }
  else
  {
    if ( a1 <= 17 )
      return 12LL;
    if ( a1 == 19 || a1 == 18 || a1 == 20 )
      return 4LL;
    return 16LL;
  }
  return result;
}
