/*
 * XREFs of _HT_Get8BPPFormatPalette@16 @ 0x1BA735
 * Callers:
 *     _HT_Get8BPPMaskPalette@24 @ 0x1BA810 (_HT_Get8BPPMaskPalette@24.c)
 *     _NtGdiHT_Get8BPPFormatPalette@16 @ 0x21A628 (_NtGdiHT_Get8BPPFormatPalette@16.c)
 * Callees:
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 */

LONG __stdcall HT_Get8BPPFormatPalette(
        LPPALETTEENTRY pPaletteEntry,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  unsigned int p_peGreen; // ecx
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v12; // [esp+0h] [ebp-10h]
  BYTE *p_peBlue; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]
  LPPALETTEENTRY pPaletteEntrya; // [esp+18h] [ebp+8h]

  if ( pPaletteEntry )
  {
    v14 = 0;
    p_peGreen = 0;
    v6 = 0;
    pPaletteEntrya = 0;
    v7 = 216;
    p_peBlue = &pPaletteEntry->peBlue;
    do
    {
      v12 = v7 - 1;
      v8 = DivFD6(p_peGreen, 5);
      v9 = DivFD6(v6, 5);
      v10 = DivFD6(v14, 5);
      *(p_peBlue - 2) = ((int)&loc_7A120 + 255 * v8) / 1000000;
      p_peBlue[1] = 0;
      *(p_peBlue - 1) = ((int)&loc_7A120 + 255 * v9) / 1000000;
      *p_peBlue = ((int)&loc_7A120 + 255 * v10) / 1000000;
      p_peGreen = (unsigned int)&pPaletteEntrya->peGreen;
      p_peBlue += 4;
      pPaletteEntrya = (LPPALETTEENTRY)p_peGreen;
      if ( p_peGreen > 5 )
      {
        p_peGreen = 0;
        ++v6;
        pPaletteEntrya = 0;
        if ( v6 > 5 )
        {
          v6 = 0;
          ++v14;
        }
      }
      v7 = v12;
    }
    while ( v12 );
  }
  return 216;
}
