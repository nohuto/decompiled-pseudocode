/*
 * XREFs of _RtlpHpConvertSegmentFlagsToFlags@4 @ 0x4B35D785
 * Callers:
 *     _RtlHpQuerySegmentHeapRoutine@8 @ 0x4B3569F1 (_RtlHpQuerySegmentHeapRoutine@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpConvertSegmentFlagsToFlags(int a1)
{
  int v1; // eax

  v1 = a1 & 1;
  if ( (a1 & 2) != 0 )
    v1 |= 8u;
  if ( (a1 & 0x20000000) != 0 )
    v1 |= 0x8000000u;
  if ( (a1 & 0x10000000) != 0 )
    v1 |= 0x20u;
  if ( (a1 & 0x40000000) != 0 )
    v1 |= 0x40000u;
  if ( (a1 & 0x100) != 0 )
    v1 |= 0x100u;
  if ( (a1 & 0xE00) != 0 )
    v1 |= a1 & 0xE00;
  if ( (a1 & 0x8000000) != 0 )
    v1 |= 0x200u;
  return a1 & 0xF000 | v1;
}
