/*
 * XREFs of GetMonitorRectForDpiContext @ 0x1C0032208
 * Callers:
 *     GetMonitorRect @ 0x1C0031BC4 (GetMonitorRect.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0031C60 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0031DA0 (PhysicalToLogicalDPIRect.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0031FC0 (PhysicalToLogicalDPIPoint.c)
 * Callees:
 *     EngMulDiv @ 0x1C0032350 (EngMulDiv.c)
 */

__m128i *__fastcall GetMonitorRectForDpiContext(__m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __m128i v4; // xmm6
  unsigned __int16 v5; // r8
  INT v7; // edi
  INT v8; // r13d
  INT v9; // esi
  INT v10; // eax
  INT v11; // r12d
  INT v12; // ebp
  __int32 v13; // edi
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // xmm6_8
  INT v16; // eax
  __m128i v17; // [rsp+20h] [rbp-48h]
  __m128i *v18; // [rsp+70h] [rbp+8h]

  v18 = a1;
  if ( (a3 & 0xF) == 2 && (a3 & 0x20000000) != 0 )
  {
    *a1 = *(__m128i *)(*(_QWORD *)(a2 + 40) + 72LL);
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 40);
    v4 = *(__m128i *)(v3 + 28);
    v5 = (a3 >> 8) & 0x1FF;
    if ( v5 )
    {
      v7 = *(unsigned __int16 *)(v3 + 66);
      v8 = v5;
      v9 = EngMulDiv(_mm_cvtsi128_si32(v4), v5, v7);
      v10 = EngMulDiv(v4.m128i_i32[1], v8, v7);
      v11 = *(unsigned __int16 *)(v3 + 64);
      v12 = v10;
      v13 = v4.m128i_i32[0];
      v14 = HIDWORD(v4.m128i_i64[0]);
      v17.m128i_i32[0] = EngMulDiv(0, v8, v11) + v9;
      v15 = _mm_srli_si128(v4, 8).m128i_u64[0];
      v17.m128i_i32[1] = EngMulDiv(0, v8, v11) + v12;
      v17.m128i_i32[2] = v17.m128i_i32[0] + EngMulDiv(v15 - v13, v8, v11);
      v16 = EngMulDiv(HIDWORD(v15) - v14, v8, v11);
      a1 = v18;
      v17.m128i_i32[3] = v17.m128i_i32[1] + v16;
      v4 = v17;
    }
    *a1 = v4;
  }
  return a1;
}
