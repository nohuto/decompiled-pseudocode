/*
 * XREFs of _RtlpGetSegmentForAddress@8 @ 0x4B358074
 * Callers:
 *     _RtlpWalkHeap@12 @ 0x4B359AF8 (_RtlpWalkHeap@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlpGetSegmentForAddress(int a1, unsigned int a2)
{
  _DWORD *i; // eax

  for ( i = *(_DWORD **)(a1 + 164); ; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)(a1 + 164) )
      return 0;
    if ( i[3] <= a2 && a2 <= i[6] )
      break;
  }
  return i - 4;
}
