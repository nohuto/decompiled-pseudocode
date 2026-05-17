/*
 * XREFs of _RtlpStackDbRefCountIncrement@4 @ 0x4B38AABF
 * Callers:
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 *     _RtlpStackDbSegmentFindOrCreate@8 @ 0x4B38AB3B (_RtlpStackDbSegmentFindOrCreate@8.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpStackDbRefCountIncrement(volatile signed __int32 *this)
{
  signed __int32 v1; // eax
  signed __int32 v2; // edx

  v1 = *this;
  do
  {
    v2 = v1 ^ (v1 ^ (v1 + 1)) & 0xFFFFFF;
    if ( (v2 & 0xFFFFFFu) < (v1 & 0xFFFFFFu) )
      return 0;
    v1 = _InterlockedCompareExchange(this, v2, v1);
  }
  while ( v1 != (v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF) );
  return 1;
}
