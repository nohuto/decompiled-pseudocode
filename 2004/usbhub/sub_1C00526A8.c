/*
 * XREFs of sub_1C00526A8 @ 0x1C00526A8
 * Callers:
 *     sub_1C0052948 @ 0x1C0052948 (sub_1C0052948.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

char __fastcall sub_1C00526A8(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // r11
  char v4; // di
  int v5; // r10d
  __int64 v6; // r9
  int v7; // r8d
  __int64 v9; // rcx

  v2 = a1;
  v4 = 1;
  v5 = 256;
  v6 = *a2;
  if ( ((*a2 - 40) & 0xFB) != 0 )
  {
    if ( *a2 < 0x30u )
    {
      v7 = 1111704625;
LABEL_4:
      sub_1C000FD80(v2, 256, v7, v6, 0LL);
      return 0;
    }
    v9 = a2[4];
    if ( v6 != 4 * v9 + 44 )
    {
      v7 = 1111704626;
      goto LABEL_4;
    }
  }
  else
  {
    sub_1C000FD80(a1, 256, 1111704631, v6, 0LL);
    LOBYTE(v9) = a2[4];
  }
  if ( !(_BYTE)v9 )
  {
    sub_1C000FD80(v2, v5, 1111704627, 0LL, 0LL);
    LOBYTE(v9) = a2[4];
    v4 = 0;
  }
  if ( (unsigned __int8)v9 > 0x80u )
  {
    sub_1C000FD80(v2, v5, 1111704628, (unsigned __int8)v9, 0LL);
    LOBYTE(v9) = a2[4];
    v4 = 0;
  }
  if ( a2[5] > (unsigned __int8)v9 )
  {
    sub_1C000FD80(v2, v5, 1111704630, a2[5], 0LL);
    return 0;
  }
  return v4;
}
