/*
 * XREFs of _IsWindowContentProtected@4 @ 0x20BBA
 * Callers:
 *     _CreateSprite@16 @ 0x1F5C2 (_CreateSprite@16.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     _ProtectedContentAccessCheck@4 @ 0x2FF9C (_ProtectedContentAccessCheck@4.c)
 *     __VisrgnFromWindow@12 @ 0xA99E4 (__VisrgnFromWindow@12.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 */

int IsWindowContentProtected()
{
  return _GetProp(1) & 1;
}
