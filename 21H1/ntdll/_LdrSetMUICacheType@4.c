/*
 * XREFs of _LdrSetMUICacheType@4 @ 0x4B33F2D0
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 */

int __stdcall LdrSetMUICacheType(int a1)
{
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 6) == 6 )
    return -1073741811;
  if ( gMUICacheType )
    return -1073741823;
  gMUICacheType = a1;
  LdrpSetAlternateResourceModuleHandle(-1, 0, 0, 0, 0, 16, 0, 0);
  return 0;
}
