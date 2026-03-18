/*
 * XREFs of GreSaveDC @ 0x1C0078370
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C005BCE4 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0061924 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxClientExtTextOutW @ 0x1C014B850 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C023397C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233DE4 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreSaveDCInternal @ 0x1C015B034 (GreSaveDCInternal.c)
 */

__int64 __fastcall GreSaveDC(HDC a1)
{
  return GreSaveDCInternal(a1);
}
