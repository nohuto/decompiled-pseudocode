/*
 * XREFs of ?bGetWidthData@RFONTOBJ@@QAEHPAU_WIDTHDATA@@AAVXDCOBJ@@@Z @ 0x881C4
 * Callers:
 *     _NtGdiGetWidthTable@28 @ 0x85948 (_NtGdiGetWidthTable@28.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QAEJXZ @ 0x882A8 (-lOverhang@RFONTOBJ@@QAEJXZ.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 */

int __thiscall RFONTOBJ::bGetWidthData(RFONTOBJ *this, struct _WIDTHDATA *a2, struct XDCOBJ *a3)
{
  int v4; // esi
  _DWORD *v5; // eax
  int pgb_low; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  char v11; // cl
  __int16 fxD; // cx
  __int16 v13; // dx
  __int16 v14; // ax
  _BYTE *v15; // ecx
  unsigned __int16 *v17; // edi
  unsigned __int16 v18[2]; // [esp+Ch] [ebp-24h] BYREF
  unsigned __int16 *v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  int v22; // [esp+1Ch] [ebp-14h]
  struct _GLYPHPOS v23; // [esp+20h] [ebp-10h] BYREF

  v4 = 0;
  v5 = *(_DWORD **)this;
  pgb_low = 0;
  v22 = 16 * *(_DWORD *)(*(_DWORD *)this + 360);
  v20 = 16 * v5[79];
  v7 = v5[132];
  v8 = v5[20];
  v21 = v7;
  v9 = *(_DWORD *)(v8 + 20);
  v10 = 0;
  v11 = *(_BYTE *)(v9 + 44);
  if ( v11 == (char)0x80 || v11 == -127 || v11 == -120 )
    v10 = 1;
  else
    LOBYTE(v10) = v11 == -122;
  fxD = 0;
  if ( v10 )
  {
    if ( (*(_DWORD *)(v9 + 48) & 0x10000000) != 0 )
    {
      *(_DWORD *)v18 = 12288;
      memset(&v23, 0, sizeof(v23));
      v17 = (unsigned __int16 *)&unk_25D604;
      while ( RFONTOBJ::bGetGlyphMetrics(this, 1u, &v23, v18, a3, 0) && v23.hg != *(_DWORD *)(*(_DWORD *)this + 520) )
      {
        *(_DWORD *)v18 = *++v17;
        if ( !v18[0] )
        {
          v19 = (unsigned __int16 *)&unk_25D5F8;
          pgb_low = LOWORD(v23.pgdf[2].pgb);
          *(_DWORD *)v18 = 12450;
          while ( RFONTOBJ::bGetGlyphMetrics(this, 1u, &v23, v18, 0, 0) )
          {
            if ( LOWORD(v23.pgdf[2].pgb) > pgb_low )
              pgb_low = LOWORD(v23.pgdf[2].pgb);
            *(_DWORD *)v18 = *++v19;
            if ( !v18[0] )
            {
              fxD = RFONTOBJ::pgdDefault(this)->fxD;
              goto LABEL_6;
            }
          }
          return v4;
        }
      }
    }
  }
  else
  {
LABEL_6:
    v13 = v22;
    if ( ((v22 | v20 | v21 | pgb_low) & 0xFFFF0000) == 0 )
    {
      *((_WORD *)a2 + 2) = v20;
      v14 = v21;
      *((_WORD *)a2 + 7) = fxD;
      *((_WORD *)a2 + 1) = v13;
      *((_WORD *)a2 + 3) = v14;
      *((_WORD *)a2 + 6) = pgb_low;
      *(_WORD *)a2 = 16 * RFONTOBJ::lOverhang(this);
      v15 = *(_BYTE **)(*(_DWORD *)(*(_DWORD *)this + 80) + 20);
      *((_BYTE *)a2 + 8) = v15[108];
      *((_BYTE *)a2 + 9) = v15[109];
      *((_BYTE *)a2 + 11) = v15[110];
      *((_BYTE *)a2 + 10) = v15[111];
      return 1;
    }
  }
  return v4;
}
