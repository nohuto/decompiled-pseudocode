/*
 * XREFs of CiThreadUpdatePriorities @ 0x1C000B210
 * Callers:
 *     CiThreadSetRelativePriority @ 0x1C000AC80 (CiThreadSetRelativePriority.c)
 *     CiThreadCreate @ 0x1C000AED0 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiThreadUpdatePriorities(_BYTE *a1, _BYTE *a2, unsigned __int8 a3)
{
  char v4; // dl
  unsigned __int8 v5; // r9
  char v6; // r9
  char v7; // al
  int v8; // r11d
  char v9; // r8
  int v10; // r11d

  if ( CiSystemResponsiveness == 100 )
  {
    v9 = a3 + 9;
    v6 = v9;
    v4 = v9;
    goto LABEL_14;
  }
  v4 = a3 + a2[1];
  if ( v4 )
  {
    if ( (unsigned __int8)v4 >= 8u )
      v4 = 7;
  }
  else
  {
    v4 = 1;
  }
  v5 = a2[2];
  if ( v5 >= 8u )
    v5 = a3;
  v6 = v5 + 8;
  v7 = a3 + *a2;
  v8 = ((unsigned __int8)a2[3] >> 4) & 7;
  v9 = v7;
  if ( v8 != 2 )
  {
    v10 = v8 - 1;
    if ( !v10 )
    {
      v9 = v6;
      goto LABEL_10;
    }
    if ( v10 != 2 )
      goto LABEL_10;
    if ( (unsigned __int8)v7 >= 0x17u )
    {
      if ( (unsigned __int8)v7 > 0x1Au )
        v9 = 26;
      goto LABEL_10;
    }
LABEL_17:
    v9 = 23;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v7 < 0x10u )
  {
    v9 = 16;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v7 >= 0x18u )
    goto LABEL_17;
LABEL_10:
  if ( (unsigned __int8)v6 >= 0x1Bu )
    v6 = 26;
  if ( (unsigned __int8)v9 >= 0x1Bu )
    v9 = 27;
LABEL_14:
  a1[106] = v4;
  a1[105] = v6;
  a1[104] = v9;
}
