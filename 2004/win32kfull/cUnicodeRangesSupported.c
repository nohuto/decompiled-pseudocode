/*
 * XREFs of cUnicodeRangesSupported @ 0x1C00F43E4
 * Callers:
 *     EngComputeGlyphSet @ 0x1C00F4310 (EngComputeGlyphSet.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00F4524 (ConvertToAndFromWideChar.c)
 *     cComputeGlyphSet @ 0x1C00F4614 (cComputeGlyphSet.c)
 *     vSort @ 0x1C00F4788 (vSort.c)
 */

__int64 __fastcall cUnicodeRangesSupported(unsigned int a1, int a2, unsigned int a3, _WORD *a4, _BYTE *a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  _WORD *v7; // rbp
  char v9; // r14
  _BYTE *v10; // rax
  __int64 v11; // rcx
  int v12; // r12d
  _BYTE *v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  _BYTE *v17; // r15
  _WORD *v18; // r14
  __int64 v19; // r12
  _WORD *v20; // r13
  __int64 v21; // rsi
  char v22; // [rsp+80h] [rbp+8h]
  USHORT AnsiCodePage; // [rsp+88h] [rbp+10h] BYREF
  USHORT OemCodePage; // [rsp+90h] [rbp+18h] BYREF
  _WORD *v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v5 = (__int64)a5;
  v6 = a3;
  v7 = a4;
  v22 = a2;
  AnsiCodePage = 0;
  v9 = a2;
  OemCodePage = 0;
  if ( a3 )
  {
    v10 = a5;
    v11 = a3;
    do
    {
      *v10++ = a2++;
      --v11;
    }
    while ( v11 );
  }
  v12 = 393233;
  if ( a1 - 932 > 0x12 || !_bittest(&v12, a1 - 932) )
  {
    if ( a1 > 1 )
    {
      AnsiCodePage = a1;
    }
    else
    {
      RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
      LOWORD(a1) = AnsiCodePage;
      if ( (unsigned __int16)(AnsiCodePage - 932) <= 0x12u && _bittest(&v12, (unsigned __int16)(AnsiCodePage - 932))
        || AnsiCodePage == 0xFDE9 )
      {
        LOWORD(a1) = 1252;
        AnsiCodePage = 1252;
      }
    }
    ConvertToAndFromWideChar((unsigned __int16)a1, v7, (unsigned int)(2 * v6), v5, v6, 1);
LABEL_10:
    if ( (_DWORD)v6 )
    {
      v13 = (_BYTE *)v5;
      v14 = v6;
      do
      {
        *v13++ -= v9;
        --v14;
      }
      while ( v14 );
    }
    goto LABEL_13;
  }
  if ( (unsigned int)ConvertToAndFromWideChar(a1, a4, 2LL, v5, 1, 1) == -1 )
    a1 = 1252;
  if ( (_DWORD)v6 )
  {
    v17 = (_BYTE *)v5;
    v18 = v7;
    v19 = v5;
    v20 = v7;
    v21 = v6;
    do
    {
      if ( (unsigned int)ConvertToAndFromWideChar(a1, v20, 2LL, v19, 1, 1) == -1 || !*v18 && *v17 )
        *v18 = -1;
      ++v19;
      ++v20;
      ++v17;
      ++v18;
      --v21;
    }
    while ( v21 );
    v5 = (__int64)a5;
    v7 = v25;
    v9 = v22;
    goto LABEL_10;
  }
LABEL_13:
  vSort(v7, v5, (unsigned int)v6);
  return cComputeGlyphSet((_DWORD)v7, v15, v6, 0, 0LL);
}
