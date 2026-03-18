/*
 * XREFs of _ValidateOwnerDepth@8 @ 0xA8B06
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ValidateOwnerDepth(int a1, int a2)
{
  unsigned int i; // esi

  for ( i = 1; ; ++i )
  {
    if ( !a2 )
      return _gNestedWindowLimit >= i;
    if ( a2 == a1 )
      break;
    a2 = *(_DWORD *)(a2 + 64);
  }
  return 0;
}
