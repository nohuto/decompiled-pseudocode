/*
 * XREFs of sub_180018940 @ 0x180018940
 * Callers:
 *     sub_180012A60 @ 0x180012A60 (sub_180012A60.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sub_180018940(__int16 a1, __int16 a2)
{
  __int16 v2; // r8
  __int16 v3; // ax
  __int16 v4; // r9
  __int16 v5; // ax
  __int16 v6; // r9
  __int16 v7; // ax
  __int16 v8; // r9
  __int16 v9; // ax
  __int16 v10; // r9
  __int16 v11; // ax
  __int16 v12; // r9
  __int16 v13; // ax
  __int16 v14; // r9
  __int16 v15; // ax
  __int16 v16; // r9
  __int16 v17; // ax

  v2 = 0;
  v3 = (a1 & 1) != 0 || (a2 & 1) != 0;
  if ( (a1 & 2) != 0 && (a2 & 2) != 0 )
    v4 = 2;
  else
    v4 = 0;
  v5 = v4 | v3;
  if ( (a1 & 4) != 0 && (a2 & 4) != 0 )
    v6 = 4;
  else
    v6 = 0;
  v7 = v6 | v5;
  if ( (a1 & 8) != 0 || (a2 & 8) != 0 )
    v8 = 8;
  else
    v8 = 0;
  v9 = v8 | v7;
  if ( (a1 & 0x10) != 0 || (a2 & 0x10) != 0 )
    v10 = 16;
  else
    v10 = 0;
  v11 = v10 | v9;
  if ( (a1 & 0x20) != 0 && (a2 & 0x20) != 0 )
    v12 = 32;
  else
    v12 = 0;
  v13 = v12 | v11;
  if ( (a1 & 0x40) != 0 && (a2 & 0x40) != 0 )
    v14 = 64;
  else
    v14 = 0;
  v15 = v14 | v13;
  if ( (a1 & 0x80u) != 0 || (a2 & 0x80u) != 0 )
    v16 = 128;
  else
    v16 = 0;
  v17 = v16 | v15;
  if ( (a1 & 0x100) != 0 || (a2 & 0x100) != 0 )
    v2 = 256;
  return v2 | v17;
}
