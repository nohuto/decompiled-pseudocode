/*
 * XREFs of _MNRefreshUAHCachedSizes@4 @ 0x1AB841
 * Callers:
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _MNClearCachedPopupSizes@4 @ 0x1AB7D1 (_MNClearCachedPopupSizes@4.c)
 * Callees:
 *     _MNUpdateUAHMaxPopupWidths@8 @ 0x1AB879 (_MNUpdateUAHMaxPopupWidths@8.c)
 */

int __thiscall MNRefreshUAHCachedSizes(_DWORD *this)
{
  unsigned int v2; // esi
  int result; // eax
  int v4; // edi

  v2 = 0;
  this[21] = 0;
  this[22] = 0;
  this[23] = 0;
  this[24] = 0;
  result = this[5];
  if ( *(_DWORD *)(result + 24) )
  {
    v4 = 0;
    do
    {
      MNUpdateUAHMaxPopupWidths(this, v4 + this[14]);
      result = this[5];
      ++v2;
      v4 += 80;
    }
    while ( v2 < *(_DWORD *)(result + 24) );
  }
  return result;
}
