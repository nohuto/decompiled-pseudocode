/*
 * XREFs of RtlpHpConvertFlagsToSegmentFlags @ 0x1800246E0
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180001BC0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2E30 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpConvertFlagsToSegmentFlags(int a1)
{
  int v2; // r8d
  int v3; // edx
  unsigned int v4; // r8d

  if ( !a1 )
    return 0LL;
  if ( a1 == 8 )
    return 2LL;
  v2 = a1 & 1 | 2;
  if ( (a1 & 8) == 0 )
    v2 = a1 & 1;
  if ( (a1 & 4) != 0 )
    v2 |= 0x80000000;
  v3 = v2 | 0x100;
  if ( (a1 & 0x100) == 0 )
    v3 = v2;
  v4 = a1 & 0xE00 | v3;
  if ( (a1 & 0xE00) == 0 )
    v4 = v3;
  if ( (a1 & 0x10) != 0 )
    v4 |= 0x2000000u;
  if ( (a1 & 2) != 0 )
    v4 |= 0x1000000u;
  return v4;
}
