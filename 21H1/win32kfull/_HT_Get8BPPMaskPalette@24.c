/*
 * XREFs of _HT_Get8BPPMaskPalette@24 @ 0x1BA810
 * Callers:
 *     ?bCreateHTPalette@PALMEMOBJ@@QAEHJPAU_GDIINFO@@@Z @ 0x974F8 (-bCreateHTPalette@PALMEMOBJ@@QAEHJPAU_GDIINFO@@@Z.c)
 *     _NtGdiHT_Get8BPPMaskPalette@24 @ 0x21A690 (_NtGdiHT_Get8BPPMaskPalette@24.c)
 * Callees:
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _HT_Get8BPPFormatPalette@16 @ 0x1BA735 (_HT_Get8BPPFormatPalette@16.c)
 */

LONG __stdcall HT_Get8BPPMaskPalette(
        LPPALETTEENTRY pPaletteEntry,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  LPPALETTEENTRY v11; // esi
  unsigned int v13; // ecx
  LPPALETTEENTRY v14; // eax
  unsigned int v15; // eax
  bool v16; // cf
  int v17; // edi
  unsigned int v18; // eax
  bool v19; // cf
  BYTE v20; // dh
  LPPALETTEENTRY v21; // ecx
  unsigned int v22; // edi
  bool v23; // cf
  int v24; // eax
  BYTE v25; // dl
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // eax
  BYTE v29; // cl
  unsigned int v30; // edi
  BYTE v31; // dl
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int v35; // [esp-Ch] [ebp-18h]
  unsigned int v36; // [esp+0h] [ebp-Ch]
  unsigned int v37; // [esp+4h] [ebp-8h]
  unsigned int v38; // [esp+8h] [ebp-4h]
  LPPALETTEENTRY pPaletteEntrya; // [esp+14h] [ebp+8h]
  BYTE pPaletteEntry_3; // [esp+17h] [ebp+Bh]
  BYTE pPaletteEntry_3a; // [esp+17h] [ebp+Bh]
  unsigned int Use8BPPMaskPala; // [esp+18h] [ebp+Ch]
  int CMYMaska; // [esp+1Ch] [ebp+10h]
  BYTE v44; // [esp+1Fh] [ebp+13h]
  BYTE v45; // [esp+1Fh] [ebp+13h]
  LPPALETTEENTRY RedGammaa; // [esp+20h] [ebp+14h]
  int RedGammab; // [esp+20h] [ebp+14h]
  unsigned int GreenGammaa; // [esp+24h] [ebp+18h]
  unsigned int GreenGammab; // [esp+24h] [ebp+18h]
  int BlueGammaa; // [esp+28h] [ebp+1Ch]
  int BlueGammab; // [esp+28h] [ebp+1Ch]
  unsigned int BlueGammac; // [esp+28h] [ebp+1Ch]

  if ( !Use8BPPMaskPal )
    return HT_Get8BPPFormatPalette(pPaletteEntry, RedGamma, GreenGamma, BlueGamma);
  if ( CMYMask == 1 )
  {
    v35 = 4;
    BlueGammaa = 125;
    goto LABEL_12;
  }
  if ( CMYMask == 2 )
  {
    v35 = 5;
    BlueGammaa = 216;
LABEL_12:
    v8 = v35;
    v9 = v35;
    v38 = v35;
    Use8BPPMaskPala = v35;
    v10 = v35;
    goto LABEL_13;
  }
  BlueGammaa = 0;
  v8 = CMYMask >> 5;
  v9 = (CMYMask >> 2) & 7;
  v10 = CMYMask & 3;
  v38 = v8;
  Use8BPPMaskPala = v9;
  if ( CMYMask && (!v8 || !v9 || (CMYMask & 3) == 0) )
    return 0;
LABEL_13:
  v11 = pPaletteEntry;
  if ( pPaletteEntry )
  {
    pPaletteEntrya = 0;
    CMYMaska = 1;
    GreenGammaa = 512;
    if ( *v11 == 809650002 )
    {
      CMYMaska = -1;
      v11 += 255;
      if ( CMYMask )
      {
        v13 = (v8 + 1) * (v9 + 1) * (v10 + 1);
        BlueGammaa = v13;
        pPaletteEntrya = (LPPALETTEENTRY)((256 - v13) >> 1);
        if ( (v13 & 1) != 0 )
          GreenGammaa = ((256 - v13) >> 1) + (v13 >> 1);
      }
    }
    memset(pPaletteEntry, 0, 0x400u);
    RedGammaa = 0;
    if ( BlueGammaa )
    {
      v14 = pPaletteEntrya;
      if ( pPaletteEntrya )
      {
        RedGammaa = pPaletteEntrya;
        do
        {
          *(_WORD *)&v11->peGreen = -1;
          v11->peRed = -1;
          v11 += CMYMaska;
          v14 = (LPPALETTEENTRY)((char *)v14 - 1);
        }
        while ( v14 );
      }
      v15 = 0;
      v16 = v8 != 0;
      v36 = 0;
      BlueGammab = 4 * CMYMaska;
      do
      {
        if ( v16 )
          v44 = (255500000 - 255 * DivFD6(v15, v8)) / 1000000;
        else
          v44 = 0;
        v17 = Use8BPPMaskPala;
        v18 = 0;
        v37 = 0;
        v19 = Use8BPPMaskPala != 0;
        do
        {
          if ( v19 )
            v20 = (255500000 - 255 * DivFD6(v18, v17)) / 1000000;
          else
            v20 = 0;
          v21 = RedGammaa;
          v22 = 0;
          pPaletteEntry_3 = v20;
          v23 = v10 != 0;
          do
          {
            if ( v23 )
            {
              v24 = DivFD6(v22, v10);
              v21 = RedGammaa;
              v20 = pPaletteEntry_3;
              v25 = (255500000 - 255 * v24) / 1000000;
            }
            else
            {
              v25 = 0;
            }
            v11->peRed = v44;
            v11->peGreen = v20;
            v11->peBlue = v25;
            if ( v21 == (LPPALETTEENTRY)GreenGammaa )
            {
              v21 = (LPPALETTEENTRY)((char *)v21 + 1);
              v11 = (LPPALETTEENTRY)((char *)v11 + BlueGammab);
              v11->peRed = v44;
              v11->peGreen = v20;
              v11->peBlue = v25;
            }
            v11 = (LPPALETTEENTRY)((char *)v11 + BlueGammab);
            ++v22;
            v21 = (LPPALETTEENTRY)((char *)v21 + 1);
            RedGammaa = v21;
            v23 = v22 < v10;
          }
          while ( v22 <= v10 );
          v17 = Use8BPPMaskPala;
          v18 = v37 + 1;
          v37 = v18;
          v19 = v18 < Use8BPPMaskPala;
        }
        while ( v18 <= Use8BPPMaskPala );
        v8 = v38;
        v15 = v36 + 1;
        v36 = v15;
        v16 = v15 < v38;
      }
      while ( v15 <= v38 );
    }
    else if ( v8 && Use8BPPMaskPala && v10 )
    {
      v26 = 0;
      GreenGammab = 0;
      RedGammab = 4 * CMYMaska;
      do
      {
        if ( v26 >= v8 )
          pPaletteEntry_3a = 0;
        else
          pPaletteEntry_3a = (255500000 - 255 * DivFD6(v26, v8)) / 1000000;
        v27 = Use8BPPMaskPala;
        v28 = 0;
        BlueGammac = 0;
        do
        {
          if ( v28 >= v27 )
            v45 = 0;
          else
            v45 = (255500000 - 255 * DivFD6(v28, v27)) / 1000000;
          v29 = v45;
          v30 = 0;
          v31 = pPaletteEntry_3a;
          do
          {
            if ( v30 >= v10 )
            {
              LOBYTE(v32) = 0;
            }
            else
            {
              v32 = (255500000 - 255 * DivFD6(v30, v10)) / 1000000;
              v29 = v45;
              v31 = pPaletteEntry_3a;
            }
            v11->peRed = v31;
            ++v30;
            v11->peGreen = v29;
            v11->peBlue = v32;
            v11 = (LPPALETTEENTRY)((char *)v11 + RedGammab);
          }
          while ( v30 <= 3 );
          v27 = Use8BPPMaskPala;
          v28 = BlueGammac + 1;
          BlueGammac = v28;
        }
        while ( v28 <= 7 );
        v8 = v38;
        v26 = GreenGammab + 1;
        GreenGammab = v26;
      }
      while ( v26 <= 7 );
    }
    else
    {
      v33 = 255;
      v34 = 256;
      do
      {
        v11->peBlue = v33;
        v11->peGreen = v33;
        v11->peRed = v33--;
        v11 += CMYMaska;
        --v34;
      }
      while ( v34 );
    }
  }
  return 256;
}
