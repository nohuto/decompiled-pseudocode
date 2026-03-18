/*
 * XREFs of sub_1C000AB30 @ 0x1C000AB30
 * Callers:
 *     sub_1C000A5B0 @ 0x1C000A5B0 (sub_1C000A5B0.c)
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C000AB30(_BYTE *a1, _BYTE *a2, unsigned __int8 a3)
{
  char result; // al
  unsigned __int8 v6; // dl
  char v7; // cl
  int v8; // r11d
  char v9; // dl
  char v10; // r8
  int v11; // r11d

  if ( dword_1C0007280 == 100 )
  {
    v10 = a3 + 9;
    v9 = v10;
    result = v10;
    goto LABEL_14;
  }
  result = a3 + a2[1];
  if ( result )
  {
    if ( (unsigned __int8)result >= 8u )
      result = 7;
  }
  else
  {
    result = 1;
  }
  v6 = a2[2];
  if ( v6 >= 8u )
    v6 = a3;
  v7 = a3 + *a2;
  v8 = ((unsigned __int8)a2[3] >> 4) & 7;
  v9 = v6 + 8;
  v10 = v7;
  if ( v8 != 2 )
  {
    v11 = v8 - 1;
    if ( !v11 )
    {
      v10 = v9;
      goto LABEL_10;
    }
    if ( v11 != 2 )
      goto LABEL_10;
    if ( (unsigned __int8)v7 >= 0x17u )
    {
      if ( (unsigned __int8)v7 > 0x1Au )
        v10 = 26;
      goto LABEL_10;
    }
LABEL_17:
    v10 = 23;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v7 < 0x10u )
  {
    v10 = 16;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v7 >= 0x18u )
    goto LABEL_17;
LABEL_10:
  if ( (unsigned __int8)v9 >= 0x1Bu )
    v9 = 26;
  if ( (unsigned __int8)v10 >= 0x1Bu )
    v10 = 27;
LABEL_14:
  a1[106] = result;
  a1[105] = v9;
  a1[104] = v10;
  return result;
}
