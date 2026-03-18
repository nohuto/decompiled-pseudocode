/*
 * XREFs of _SystoChar@8 @ 0xA879C
 * Callers:
 *     _xxxTranslateAccelerator@12 @ 0xA8452 (_xxxTranslateAccelerator@12.c)
 *     ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2 (-xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SystoChar(unsigned int a1, int a2)
{
  unsigned int result; // eax

  if ( a1 < 0x104 )
    return a1;
  if ( a1 > 0x107 )
    return a1;
  result = a1 - 4;
  if ( (a2 & 0x20000000) != 0 )
    return a1;
  return result;
}
