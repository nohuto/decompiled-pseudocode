/*
 * XREFs of _cUnicodeRangesSupported@20 @ 0xDFCB6
 * Callers:
 *     _EngComputeGlyphSet@12 @ 0xDFC3C (_EngComputeGlyphSet@12.c)
 * Callees:
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 *     _cComputeGlyphSet@20 @ 0xDFE5A (_cComputeGlyphSet@20.c)
 *     _vSort@12 @ 0xDFFBC (_vSort@12.c)
 */

int __fastcall cUnicodeRangesSupported(unsigned int a1, int a2, unsigned int a3, _WORD *a4, int a5)
{
  unsigned int v6; // eax
  int v8; // esi
  unsigned int v9; // eax
  char v10; // cl
  unsigned int v12; // ecx
  _WORD *v13; // eax
  _BYTE *v14; // [esp+Ch] [ebp-10h]
  USHORT OemCodePage[2]; // [esp+10h] [ebp-Ch] BYREF
  USHORT AnsiCodePage[3]; // [esp+14h] [ebp-8h] BYREF
  char v17; // [esp+1Bh] [ebp-1h]
  _WORD *v18; // [esp+24h] [ebp+8h]
  unsigned int v19; // [esp+2Ch] [ebp+10h]

  v6 = 0;
  v8 = a1;
  v17 = a2;
  *(_DWORD *)AnsiCodePage = 0;
  for ( *(_DWORD *)OemCodePage = 0; v6 < a3; ++v6 )
    *(_BYTE *)(v6 + a5) = a2++;
  if ( a1 != 932 && a1 != 949 && a1 != 950 && a1 != 936 )
  {
    if ( a1 > 1 )
    {
      a1 = (unsigned __int16)a1;
    }
    else
    {
      RtlGetDefaultCodePage(AnsiCodePage, OemCodePage);
      LOWORD(a1) = AnsiCodePage[0];
      if ( AnsiCodePage[0] != 932
        && AnsiCodePage[0] != 949
        && AnsiCodePage[0] != 950
        && AnsiCodePage[0] != 936
        && AnsiCodePage[0] != 0xFDE9 )
      {
        goto LABEL_13;
      }
      a1 = 1252;
    }
    *(_DWORD *)AnsiCodePage = a1;
LABEL_13:
    ConvertToAndFromWideChar((unsigned __int16)a1, a4, 2 * a3, a5, a3, 1);
    goto LABEL_14;
  }
  if ( ConvertToAndFromWideChar(a1, a4, 2, a5, 1, 1) == -1 )
    v8 = 1252;
  v12 = 0;
  v19 = 0;
  if ( a3 )
  {
    v13 = a4;
    v18 = a4;
    do
    {
      v14 = (_BYTE *)(a5 + v12);
      if ( ConvertToAndFromWideChar(v8, v13, 2, a5 + v12, 1, 1) == -1 || !*v18 && *v14 )
        *v18 = -1;
      v13 = v18 + 1;
      v12 = v19 + 1;
      ++v18;
      v19 = v12;
    }
    while ( v12 < a3 );
  }
LABEL_14:
  v9 = 0;
  if ( a3 )
  {
    v10 = v17;
    do
    {
      *(_BYTE *)(v9 + a5) -= v10;
      ++v9;
    }
    while ( v9 < a3 );
  }
  vSort(a3);
  return cComputeGlyphSet(a3, 0, 0);
}
