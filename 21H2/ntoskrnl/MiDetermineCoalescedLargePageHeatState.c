/*
 * XREFs of MiDetermineCoalescedLargePageHeatState @ 0x140230700
 * Callers:
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     MiLargePagePromote @ 0x1402CC9A0 (MiLargePagePromote.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x14023073C (MiColdPageSizeSupported.c)
 */

_BOOL8 MiDetermineCoalescedLargePageHeatState()
{
  int v0; // r8d
  _DWORD *v1; // r9
  char v2; // r10

  if ( !(unsigned int)MiColdPageSizeSupported() )
  {
    if ( (HvlEnlightenments & 0x200000) == 0 )
      return 1;
    return (v2 & 1) == 0;
  }
  if ( v0 == 1 )
    return (v2 & 1) == 0;
  if ( (v2 & 2) != 0 )
    *v1 = 1;
  return 0;
}
