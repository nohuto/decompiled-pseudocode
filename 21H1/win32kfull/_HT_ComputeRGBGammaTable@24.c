/*
 * XREFs of _HT_ComputeRGBGammaTable@24 @ 0x1BA3C7
 * Callers:
 *     <none>
 * Callees:
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _RaisePower @ 0x1BC9A2 (_RaisePower.c)
 */

LONG __stdcall HT_ComputeRGBGammaTable(
        USHORT GammaTableEntries,
        USHORT GammaTableType,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma,
        LPBYTE pGammaTable)
{
  int v6; // edi
  LONG v7; // esi
  LPBYTE v8; // eax
  LPBYTE v9; // ebx
  LPBYTE v10; // ecx
  int v11; // edx
  int v12; // edi
  LPBYTE v13; // esi
  LONG v15; // [esp+8h] [ebp-10h]
  __int16 v16; // [esp+Ch] [ebp-Ch]
  USHORT GammaTableEntriesa; // [esp+20h] [ebp+8h]
  LPBYTE RedGammaa; // [esp+28h] [ebp+10h]
  int GreenGammaa; // [esp+2Ch] [ebp+14h]
  LPBYTE pGammaTablea; // [esp+34h] [ebp+1Ch]

  v6 = GammaTableEntries;
  v7 = GammaTableEntries;
  v15 = GammaTableEntries;
  if ( (unsigned int)GammaTableEntries - 2 > 0xFE )
    return 0;
  GammaTableEntriesa = 0;
  v16 = DivFD6(1, v7 - 1);
  v8 = pGammaTable;
  if ( GammaTableType == 1 )
  {
    v9 = &pGammaTable[v7];
    v10 = &pGammaTable[v7 + v7];
    v11 = 1;
  }
  else
  {
    v9 = pGammaTable + 1;
    v10 = pGammaTable + 2;
    v11 = 3;
  }
  v12 = v6 + 0xFFFF;
  GreenGammaa = v11;
  RedGammaa = v10;
  if ( (_WORD)v12 )
  {
    v13 = pGammaTable;
    do
    {
      *v13 = ((int)&loc_7A120 + 255 * RaisePower(1)) / 1000000;
      *v9 = ((int)&loc_7A120 + 255 * RaisePower(1)) / 1000000;
      v12 += 0xFFFF;
      *RedGammaa = ((int)&loc_7A120 + 255 * RaisePower(1)) / 1000000;
      v10 = &RedGammaa[GreenGammaa];
      v13 += GreenGammaa;
      RedGammaa += GreenGammaa;
      v9 += GreenGammaa;
      GammaTableEntriesa += v16;
    }
    while ( (_WORD)v12 );
    pGammaTablea = v13;
    v7 = v15;
    v8 = pGammaTablea;
  }
  *v10 = -1;
  *v9 = -1;
  *v8 = -1;
  return v7;
}
