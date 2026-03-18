/*
 * XREFs of ?xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z @ 0x182318
 * Callers:
 *     ?xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x18264B (-xxxGetDummyBitmap@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?GreGetBitmapSizeInternal@@YGKPBUtagBITMAPINFO@@KI@Z @ 0x49006 (-GreGetBitmapSizeInternal@@YGKPBUtagBITMAPINFO@@KI@Z.c)
 *     _GreGetBitmapBitsSize@4 @ 0x76F1A (_GreGetBitmapBitsSize@4.c)
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 *     _xxxRealizePalette@4 @ 0xBF854 (_xxxRealizePalette@4.c)
 *     ?CreateScreenBitmap@@YGPAUHBITMAP__@@HHI@Z @ 0x181910 (-CreateScreenBitmap@@YGPAUHBITMAP__@@HHI@Z.c)
 *     _GreSetDIBits@28 @ 0x226C73 (_GreSetDIBits@28.c)
 */

int __userpurge xxxDIBtoBMP@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagBITMAPINFOHEADER *a3,
        HPALETTE a4,
        unsigned int a5)
{
  unsigned int v6; // edi
  unsigned int BitmapSizeInternal; // ebx
  unsigned int BitmapBitsSize; // eax
  unsigned int v9; // eax
  int v10; // ebx
  HDC CompatibleDC; // edi
  int ScreenBitmap; // eax
  int v13; // ecx
  unsigned int v15; // [esp+0h] [ebp-1Ch]
  unsigned int v16; // [esp+0h] [ebp-1Ch]
  int v17; // [esp+0h] [ebp-1Ch]
  unsigned int v18; // [esp+4h] [ebp-18h]
  unsigned int *v19; // [esp+4h] [ebp-18h]
  unsigned int v20; // [esp+4h] [ebp-18h]
  unsigned int v21; // [esp+Ch] [ebp-10h]
  int v23; // [esp+14h] [ebp-8h]
  int v24; // [esp+14h] [ebp-8h]
  unsigned int v25; // [esp+18h] [ebp-4h] BYREF
  int v26; // [esp+24h] [ebp+8h]

  v6 = *(_DWORD *)a2;
  BitmapSizeInternal = GreGetBitmapSizeInternal(0, a2, *(_DWORD *)a2, v15, v18);
  if ( !BitmapSizeInternal )
    return 0;
  BitmapBitsSize = GreGetBitmapBitsSize(a2);
  v25 = BitmapBitsSize;
  if ( !BitmapBitsSize
    || (ULongAdd(BitmapSizeInternal, BitmapBitsSize, (int *)&v25, v16, v19) & 0x80000000) != 0
    || (unsigned int)a3 < v25 )
  {
    return 0;
  }
  if ( v6 != 40 )
  {
    if ( v6 == 12 )
    {
      v23 = *(unsigned __int16 *)(a2 + 4);
      v26 = *(unsigned __int16 *)(a2 + 6);
      v9 = *(unsigned __int16 *)(a2 + 10);
      goto LABEL_9;
    }
    return 0;
  }
  v23 = *(_DWORD *)(a2 + 4);
  v26 = *(_DWORD *)(a2 + 8);
  v9 = *(unsigned __int16 *)(a2 + 14);
LABEL_9:
  v25 = v9;
  v21 = BitmapSizeInternal + a2;
  v10 = 0;
  CompatibleDC = (HDC)GreCreateCompatibleDC(*(_DWORD *)(_gpDispInfo + 28));
  if ( CompatibleDC )
  {
    ScreenBitmap = CreateScreenBitmap(v26, v23, (unsigned __int16)v25, v17, v20);
    v10 = ScreenBitmap;
    if ( ScreenBitmap )
    {
      v24 = 0;
      v25 = GreSelectBitmap(CompatibleDC, ScreenBitmap);
      if ( a1 )
      {
        v24 = _SelectPalette((int)CompatibleDC, a1, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSetDIBits(v13, v26, v21, a2, v13);
      if ( v24 )
      {
        _SelectPalette((int)CompatibleDC, v24, 0);
        xxxRealizePalette(CompatibleDC);
      }
      GreSelectBitmap(CompatibleDC, v25);
    }
    GreDeleteDC(CompatibleDC);
  }
  return v10;
}
