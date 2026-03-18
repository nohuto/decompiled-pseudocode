/*
 * XREFs of ?ValidateGlyphBitsBuffer@@YG_NKJJKK@Z @ 0xF8BCC
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UAEXPAX@Z @ 0x8C04A (-CaptureUsermodeParameters@QueryFontDataRequest@@UAEXPAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z @ 0xF88AE (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

bool __userpurge ValidateGlyphBitsBuffer@<al>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // eax
  unsigned int v9; // edx
  bool result; // al
  unsigned int v11; // [esp+0h] [ebp-4h]
  unsigned int *savedregs; // [esp+4h] [ebp+0h]

  result = 1;
  if ( a4 )
  {
    if ( a1 < 0 )
      return 0;
    if ( a3 < 0 )
      return 0;
    v8 = a4 * a3;
    if ( !is_mul_ok(a4, a3) )
      return 0;
    a4 *= a3;
    v9 = (v8 + 3) & 0xFFFFFFFC;
    if ( v9 < v8 || (ULongAdd(v9, a5, (int *)&a4, v11, savedregs) & 0x80000000) != 0 || a4 > a2 )
      return 0;
  }
  return result;
}
