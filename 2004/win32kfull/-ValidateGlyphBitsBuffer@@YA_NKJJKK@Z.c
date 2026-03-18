/*
 * XREFs of ?ValidateGlyphBitsBuffer@@YA_NKJJKK@Z @ 0x1C0089E54
 * Callers:
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x1C0086910 (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C0089F50 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateGlyphBitsBuffer(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx
  bool result; // al

  result = 1;
  if ( a4 )
  {
    if ( a2 < 0 )
      return 0;
    if ( a3 < 0 )
      return 0;
    v6 = a4 * (unsigned __int64)(unsigned int)a3;
    if ( v6 > 0xFFFFFFFF )
      return 0;
    v7 = (v6 + 3) & 0xFFFFFFFC;
    if ( v7 < (unsigned int)v6 || v7 + a5 < a5 || v7 + a5 > a1 )
      return 0;
  }
  return result;
}
