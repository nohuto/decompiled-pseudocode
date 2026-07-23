/*
 * XREFs of @RtlpInitializeSegmentInfoForBucket@8 @ 0x4B2AE2AF
 * Callers:
 *     @RtlpGetLFHContext@8 @ 0x4B2AE26A (@RtlpGetLFHContext@8.c)
 * Callees:
 *     @RtlpExtendLowFragHeapSegment@12 @ 0x4B2AE2E8 (@RtlpExtendLowFragHeapSegment@12.c)
 */

int __fastcall RtlpInitializeSegmentInfoForBucket(int a1, int a2)
{
  int result; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // [esp+Ch] [ebp-4h] BYREF

  result = RtlpExtendLowFragHeapSegment(a1, 104, &v6);
  if ( result >= 0 )
  {
    v5 = v6;
    *v6 = a1 + 2000;
    result = 0;
    *((_WORD *)v5 + 46) = a2;
    *(_DWORD *)(a1 + 4 * a2 + 960) = v5;
  }
  return result;
}
