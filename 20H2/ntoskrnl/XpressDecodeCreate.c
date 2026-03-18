/*
 * XREFs of XpressDecodeCreate @ 0x1405C8C60
 * Callers:
 *     CMFReadCompressedSegment @ 0x14095B670 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x14095A9D0 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
