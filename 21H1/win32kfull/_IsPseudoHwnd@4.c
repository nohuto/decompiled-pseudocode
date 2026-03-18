/*
 * XREFs of _IsPseudoHwnd@4 @ 0xA6D5C
 * Callers:
 *     ?ReValidateZorder@@YGHPAUtagCVR@@@Z @ 0xA6D3C (-ReValidateZorder@@YGHPAUtagCVR@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall IsPseudoHwnd(unsigned int a1)
{
  int result; // eax

  result = 0;
  if ( a1 == -3 || a1 == -2 || a1 == -1 || a1 == 0xFFFF || a1 <= 1 )
    return 1;
  return result;
}
