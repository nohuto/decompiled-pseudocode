/*
 * XREFs of RtlpHeapExceptionFilter @ 0x14058D878
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x140580B5C (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x140580BD0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpProbeUserBufferSafe @ 0x140585D18 (RtlpProbeUserBufferSafe.c)
 *     RtlpAnalyzeHeapFailure @ 0x14058D9E4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x14058DD50 (RtlpHpHeapHandleError.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     RtlZeroHeap @ 0x1409112C0 (RtlZeroHeap.c)
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
  unk_140C118F0 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_140C118F0 + 1) = v2[1];
  *((_OWORD *)&unk_140C118F0 + 2) = v2[2];
  *((_OWORD *)&unk_140C118F0 + 3) = v2[3];
  *((_OWORD *)&unk_140C118F0 + 4) = v2[4];
  *((_OWORD *)&unk_140C118F0 + 5) = v2[5];
  *((_OWORD *)&unk_140C118F0 + 6) = v2[6];
  *((_OWORD *)&unk_140C118F0 + 7) = v2[7];
  *((_OWORD *)&unk_140C118F0 + 8) = v2[8];
  *((_QWORD *)&unk_140C118F0 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_140C11990;
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
