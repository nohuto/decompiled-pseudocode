/*
 * XREFs of GetScreenRectForDpi @ 0x1C003DBBC
 * Callers:
 *     GetScreenRectForDpiContext @ 0x1C003DB40 (GetScreenRectForDpiContext.c)
 *     GetScreenRect @ 0x1C0119754 (GetScreenRect.c)
 *     xxxSoundSentry @ 0x1C0152300 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C003BDF0 (GetMonitorRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  __int64 *DispInfo; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm0
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  int v18; // r13d
  __int64 *MonitorRectForDpi; // rax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // xmm0_8
  unsigned __int64 v23; // rax
  __m128i v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF

  v4 = a2;
  DispInfo = (__int64 *)GetDispInfo(a1, a2, a3, a4);
  v9 = *DispInfo;
  if ( !v4 )
  {
    v10 = *(__m128i *)(v9 + 24);
LABEL_3:
    *a1 = v10;
    return a1;
  }
  if ( *(_DWORD *)v9 == 1 )
  {
    v12 = GetDispInfo(v9, 0LL, v7, v8);
    v10 = *(__m128i *)GetMonitorRectForDpi(v24.m128i_i64, *(_QWORD *)(v12 + 96), v4);
    goto LABEL_3;
  }
  v13 = DispInfo[13];
  v14 = 0LL;
  v24 = 0LL;
  if ( v13 )
  {
    v15 = v24.m128i_i32[3];
    v16 = v24.m128i_i32[2];
    v17 = v24.m128i_i32[1];
    v18 = v24.m128i_i32[0];
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpi = GetMonitorRectForDpi(&v25, v13, v4);
        v20 = *(__m128i *)MonitorRectForDpi;
        v21 = *MonitorRectForDpi;
        v22 = _mm_srli_si128(v20, 8).m128i_u64[0];
        if ( v18 >= (int)v21 )
          v18 = v21;
        v23 = HIDWORD(v21);
        v24.m128i_i32[0] = v18;
        if ( v17 >= (int)v23 )
          v17 = v23;
        v24.m128i_i32[1] = v17;
        if ( v16 <= (int)v22 )
          v16 = v22;
        v24.m128i_i32[2] = v16;
        if ( v15 <= SHIDWORD(v22) )
          v15 = HIDWORD(v22);
        v24.m128i_i32[3] = v15;
      }
      v13 = *(_QWORD *)(v13 + 56);
    }
    while ( v13 );
    v14 = _mm_loadu_si128(&v24);
  }
  *a1 = v14;
  return a1;
}
