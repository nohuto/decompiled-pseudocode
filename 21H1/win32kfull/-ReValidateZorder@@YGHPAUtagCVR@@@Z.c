/*
 * XREFs of ?ReValidateZorder@@YGHPAUtagCVR@@@Z @ 0xA6D3C
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     _IsPseudoHwnd@4 @ 0xA6D5C (_IsPseudoHwnd@4.c)
 */

int __thiscall ReValidateZorder(_DWORD *this)
{
  unsigned int v1; // ecx
  int v2; // edx

  v1 = this[1];
  if ( v1 <= 1 || !IsPseudoHwnd(v1, 0) )
    return 1;
  return v2;
}
