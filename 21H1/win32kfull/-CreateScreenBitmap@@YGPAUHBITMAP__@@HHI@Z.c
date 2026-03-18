/*
 * XREFs of ?CreateScreenBitmap@@YGPAUHBITMAP__@@HHI@Z @ 0x181910
 * Callers:
 *     ?xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z @ 0x182318 (-xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 */

int __userpurge CreateScreenBitmap@<eax>(int a1@<edx>, int a2@<ecx>, int a3, int a4, unsigned int a5)
{
  if ( a3 == 1 )
    return GreCreateBitmap(a2, a1, 1, 1, 0);
  else
    return GreCreateCompatibleBitmapInternal(*(HDC *)(_gpDispInfo + 28), a2, a1, 0, 0, 0);
}
