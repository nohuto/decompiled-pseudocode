/*
 * XREFs of RtlpHeapExceptionFilter @ 0x18010DCF4
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180001BC0 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180001E7C (RtlpProbeUserBufferSafe.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800236C8 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180024880 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18002C270 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlValidateHeap @ 0x18005E080 (RtlValidateHeap.c)
 *     RtlCompactHeap @ 0x1800F2050 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2AD0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F6160 (RtlZeroHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800F8640 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F89FC (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F8E44 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F904C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9340 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F94E4 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9630 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9BB4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800F9D80 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800F9F14 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FA098 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA128 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107AF4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x180108150 (RtlpHpHeapHandleError.c)
 *     RtlpValidateLFHBlock @ 0x18010BA78 (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010EA18 (RtlpHpSegGetDescriptorValidateSafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapExceptionFilter(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_180167950 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_180167950 + 1) = v2[1];
  *((_OWORD *)&unk_180167950 + 2) = v2[2];
  *((_OWORD *)&unk_180167950 + 3) = v2[3];
  *((_OWORD *)&unk_180167950 + 4) = v2[4];
  *((_OWORD *)&unk_180167950 + 5) = v2[5];
  *((_OWORD *)&unk_180167950 + 6) = v2[6];
  *((_OWORD *)&unk_180167950 + 7) = v2[7];
  *((_OWORD *)&unk_180167950 + 8) = v2[8];
  *((_QWORD *)&unk_180167950 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801679F0;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
