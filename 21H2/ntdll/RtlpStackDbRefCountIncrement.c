/*
 * XREFs of RtlpStackDbRefCountIncrement @ 0x1801193DC
 * Callers:
 *     RtlStackDbStackAdd @ 0x180118A50 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18011947C (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpStackDbRefCountIncrement(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // edx

  v1 = *a1;
  v2 = v1 ^ (v1 ^ (v1 + 1)) & 0xFFFFFF;
  if ( (v2 & 0xFFFFFFu) < (*a1 & 0xFFFFFFu) )
    return 0LL;
  while ( 1 )
  {
    v1 = _InterlockedCompareExchange(a1, v2, v1);
    if ( v1 == (v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF) )
      break;
    v2 = v1 ^ (v1 ^ (v1 + 1)) & 0xFFFFFF;
    if ( (v2 & 0xFFFFFFu) < (v1 & 0xFFFFFFu) )
      return 0LL;
  }
  return 1LL;
}
