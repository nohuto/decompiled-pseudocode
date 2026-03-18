/*
 * XREFs of ?xxxBMPtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUHBITMAP__@@PAUHPALETTE__@@@Z @ 0x1822DF
 * Callers:
 *     ?xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182889 (-xxxGetDummyDibV5@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?DIBtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUtagBITMAPINFOHEADER@@K@Z @ 0x18194A (-DIBtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z @ 0x182097 (-xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z.c)
 */

struct BITMAPV5HEADER *__fastcall xxxBMPtoDIBV5(struct XEPALOBJ *a1, int a2)
{
  struct tagBITMAPINFOHEADER *v2; // eax
  struct tagBITMAPINFOHEADER *v3; // edi
  struct BITMAPV5HEADER *v4; // esi
  HPALETTE v6; // [esp+0h] [ebp-10h]
  unsigned int *v7; // [esp+4h] [ebp-Ch]
  struct HBITMAP__ v8; // [esp+Ch] [ebp-4h] BYREF

  v8.unused = 0;
  v2 = xxxBMPtoDIB(a2, a1, &v8, v6, v7);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = DIBtoDIBV5((int)v2, v8.unused);
  Win32FreePool(v3);
  return v4;
}
