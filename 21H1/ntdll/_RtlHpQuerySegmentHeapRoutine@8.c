/*
 * XREFs of _RtlHpQuerySegmentHeapRoutine@8 @ 0x4B3569F1
 * Callers:
 *     _RtlpQueryProcessEnumHeapsRoutine@8 @ 0x4B337B10 (_RtlpQueryProcessEnumHeapsRoutine@8.c)
 * Callees:
 *     _RtlpHpConvertSegmentFlagsToFlags@4 @ 0x4B35D785 (_RtlpHpConvertSegmentFlagsToFlags@4.c)
 */

int __fastcall RtlHpQuerySegmentHeapRoutine(_DWORD *a1, _DWORD *a2)
{
  if ( a1[2] != -571548178 )
    return -1073741811;
  *a2 = a1;
  a2[1] = RtlpHpConvertSegmentFlagsToFlags(a1[3]);
  a2[2] = 0;
  a2[4] = a1[33] << 12;
  a2[4] += a1[20] << 12;
  return 0;
}
