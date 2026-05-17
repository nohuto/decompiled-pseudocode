/*
 * XREFs of _RtlpHpConvertFlagsToSegmentFlags@4 @ 0x4B35D732
 * Callers:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpConvertFlagsToSegmentFlags(int a1)
{
  int result; // eax

  if ( !a1 )
    return 0;
  if ( a1 == 8 )
    return 2;
  result = a1 & 1;
  if ( (a1 & 8) != 0 )
    result |= 2u;
  if ( (a1 & 4) != 0 )
    result |= 0x80000000;
  if ( (a1 & 0x100) != 0 )
    result |= 0x100u;
  if ( (a1 & 0xE00) != 0 )
    result |= a1 & 0xE00;
  if ( (a1 & 0x10) != 0 )
    result |= 0x2000000u;
  if ( (a1 & 2) != 0 )
    return result | 0x1000000;
  return result;
}
