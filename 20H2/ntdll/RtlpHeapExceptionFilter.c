/*
 * XREFs of RtlpHeapExceptionFilter @ 0x18010E204
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180001BC0 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180001E7C (RtlpProbeUserBufferSafe.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800236C8 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180024880 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18002C270 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlValidateHeap @ 0x18005E190 (RtlValidateHeap.c)
 *     RtlCompactHeap @ 0x1800F2560 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2FE0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F6670 (RtlZeroHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800F8B50 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8F0C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9354 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F955C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9850 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F99F4 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9B40 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800FA0C4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FA290 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA424 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FA5A8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA638 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180108004 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x180108660 (RtlpHpHeapHandleError.c)
 *     RtlpValidateLFHBlock @ 0x18010BF88 (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010EF28 (RtlpHpSegGetDescriptorValidateSafe.c)
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
  unk_180169950 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_180169950 + 1) = v2[1];
  *((_OWORD *)&unk_180169950 + 2) = v2[2];
  *((_OWORD *)&unk_180169950 + 3) = v2[3];
  *((_OWORD *)&unk_180169950 + 4) = v2[4];
  *((_OWORD *)&unk_180169950 + 5) = v2[5];
  *((_OWORD *)&unk_180169950 + 6) = v2[6];
  *((_OWORD *)&unk_180169950 + 7) = v2[7];
  *((_OWORD *)&unk_180169950 + 8) = v2[8];
  *((_QWORD *)&unk_180169950 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_1801699F0;
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
