/*
 * XREFs of @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __fastcall RtlpProbeUserBufferSafe(int a1, int a2)
{
  int v2; // ecx

  if ( (a2 & 7) != 0 )
  {
    RtlpLogHeapFailure(a2, 0, 0, 0);
    return 0;
  }
  v2 = a2 - 8;
  if ( *(_BYTE *)(a2 - 8 + 7) == 5 )
    v2 -= 8 * *(unsigned __int8 *)(v2 + 6);
  if ( (*(_BYTE *)(v2 + 7) & 0x3F) == 0 )
  {
    RtlpLogHeapFailure(v2, 0, 0, 0);
    return 0;
  }
  return v2;
}
