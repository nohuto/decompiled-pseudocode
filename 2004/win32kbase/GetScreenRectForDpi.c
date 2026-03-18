/*
 * XREFs of GetScreenRectForDpi @ 0x1C0012530
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C000FF5C (GetMonitorRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, unsigned __int16 a2)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v7; // rdi
  __m128i v8; // xmm0
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  __int64 *MonitorRectForDpi; // rax
  __m128i v14; // xmm0
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // xmm0_8
  unsigned __int64 v17; // rax
  __m128i v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(_QWORD *)gpDispInfo;
  if ( !a2 )
  {
    v5 = *(__m128i *)(v4 + 24);
LABEL_3:
    *a1 = v5;
    return a1;
  }
  if ( *(_DWORD *)v4 == 1 )
  {
    v5 = *(__m128i *)GetMonitorRectForDpi(v18.m128i_i64, *(_QWORD *)(gpDispInfo + 96), a2);
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(gpDispInfo + 104);
  v8 = 0LL;
  v18 = 0LL;
  if ( v7 )
  {
    v9 = v18.m128i_i32[3];
    v10 = v18.m128i_i32[2];
    v11 = v18.m128i_i32[1];
    v12 = v18.m128i_i32[0];
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpi = GetMonitorRectForDpi(&v19, v7, a2);
        v14 = *(__m128i *)MonitorRectForDpi;
        v15 = *MonitorRectForDpi;
        v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
        if ( v12 >= (int)v15 )
          v12 = v15;
        v17 = HIDWORD(v15);
        v18.m128i_i32[0] = v12;
        if ( v11 >= (int)v17 )
          v11 = v17;
        v18.m128i_i32[1] = v11;
        if ( v10 <= (int)v16 )
          v10 = v16;
        v18.m128i_i32[2] = v10;
        if ( v9 <= SHIDWORD(v16) )
          v9 = HIDWORD(v16);
        v18.m128i_i32[3] = v9;
      }
      v7 = *(_QWORD *)(v7 + 56);
    }
    while ( v7 );
    v8 = _mm_loadu_si128(&v18);
  }
  *a1 = v8;
  return a1;
}
