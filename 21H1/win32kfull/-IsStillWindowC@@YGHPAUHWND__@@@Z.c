/*
 * XREFs of ?IsStillWindowC@@YGHPAUHWND__@@@Z @ 0x3D284
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YGHPAUtagSMWP@@@Z @ 0x3C58C (-BltValidInit@@YGHPAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 */

BOOL __fastcall IsStillWindowC(unsigned int a1)
{
  BOOL result; // eax

  result = 1;
  if ( a1 > 1 && a1 <= 0xFFFFFFFD )
    return HMValidateHandleNoSecure(a1, 1) != 0;
  return result;
}
