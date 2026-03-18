/*
 * XREFs of _UserVisrgnFromHwnd@12 @ 0xA99B8
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     __VisrgnFromWindow@12 @ 0xA99E4 (__VisrgnFromWindow@12.c)
 */

int __fastcall UserVisrgnFromHwnd(int a1, unsigned int a2, int a3)
{
  if ( HMValidateHandleNoSecure(a2, 1) )
    return _VisrgnFromWindow(a1);
  else
    return 0;
}
