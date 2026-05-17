/*
 * XREFs of _RtlpHeapExceptionFilter@8 @ 0x4B375DFF
 * Callers:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     @RtlpProbeUserBufferSafe@8 @ 0x4B2AA492 (@RtlpProbeUserBufferSafe@8.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlpHpAllocWithExceptionProtection@12 @ 0x4B34D363 (_RtlpHpAllocWithExceptionProtection@12.c)
 *     _RtlpHpFreeWithExceptionProtection@12 @ 0x4B34D3E6 (_RtlpHpFreeWithExceptionProtection@12.c)
 *     _RtlpHpReAllocWithExceptionProtection@16 @ 0x4B34D46A (_RtlpHpReAllocWithExceptionProtection@16.c)
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 *     _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA (_RtlDebugCreateTagHeap@16.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C (_RtlDebugGetUserInfoHeap@20.c)
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5 (_RtlDebugSetUserValueHeap@16.c)
 *     _RtlDebugSizeHeap@12 @ 0x4B3603F5 (_RtlDebugSizeHeap@12.c)
 *     _RtlDebugWalkHeap@8 @ 0x4B360528 (_RtlDebugWalkHeap@8.c)
 *     _RtlDebugZeroHeap@8 @ 0x4B3605A9 (_RtlDebugZeroHeap@8.c)
 *     _RtlpAnalyzeHeapFailure@12 @ 0x4B36D496 (_RtlpAnalyzeHeapFailure@12.c)
 *     _RtlpHpHeapHandleError@12 @ 0x4B36D980 (_RtlpHpHeapHandleError@12.c)
 *     _RtlpValidateLFHBlock@8 @ 0x4B371DA9 (_RtlpValidateLFHBlock@8.c)
 *     _RtlpHpSegGetDescriptorValidateSafe@8 @ 0x4B37BB1F (_RtlpHpSegGetDescriptorValidateSafe@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHeapExceptionFilter(int a1, const void **a2)
{
  int result; // eax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0;
  result = 1;
  qmemcpy(&unk_4B3A3A14, *a2, 0x50u);
  qmemcpy(&unk_4B3A3A64, a2[1], 0x2CCu);
  return result;
}
