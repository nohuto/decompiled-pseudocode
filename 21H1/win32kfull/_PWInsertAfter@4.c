/*
 * XREFs of _PWInsertAfter@4 @ 0x9324A
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z @ 0x32B6C (-ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z.c)
 *     ?ValidateZorder@@YGHPAUtagCVR@@@Z @ 0x93140 (-ValidateZorder@@YGHPAUtagCVR@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

int __fastcall PWInsertAfter(unsigned int a1)
{
  int result; // eax

  if ( a1 <= 1 || a1 > 0xFFFFFFFD )
    return a1;
  result = HMValidateHandleNoSecure(a1, 1);
  if ( !result || *(char *)(*(_DWORD *)(result + 20) + 11) < 0 || !*(_DWORD *)(result + 56) )
    return 0;
  return result;
}
