/*
 * XREFs of ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C021EA14
 * Callers:
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021ED94 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01518B0 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C021E750 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIBV5(HBITMAP a1, __int64 a2)
{
  struct tagBITMAPINFO *result; // rax
  struct tagBITMAPINFO *v3; // rdi
  struct BITMAPV5HEADER *v4; // rbx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  result = xxxBMPtoDIB(a1, a2, &v5);
  v3 = result;
  if ( result )
  {
    v4 = DIBtoDIBV5(&result->bmiHeader);
    Win32FreePool(v3);
    return (struct tagBITMAPINFO *)v4;
  }
  return result;
}
