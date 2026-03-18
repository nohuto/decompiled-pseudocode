/*
 * XREFs of GetScreenRectForDpiContext @ 0x1C0023174
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x1C002307C (GetMaxTrackSizeForWindow.c)
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     GetScreenRectForWindow @ 0x1C025EAA0 (GetScreenRectForWindow.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C00231F0 (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 */

__m128i *__fastcall GetScreenRectForDpiContext(__m128i *a1, unsigned int a2)
{
  __m128i *ScreenRectForDpi; // rax
  __int64 DispInfo; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128i v9; // xmm0
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  __m128i *MonitorRectForDpiContext; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rax
  __m128i v19; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-10h] BYREF

  if ( (a2 & 0xF) != 2 || (a2 & 0x20000000) == 0 )
  {
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v20, (a2 >> 8) & 0x1FF);
LABEL_4:
    *a1 = *ScreenRectForDpi;
    return a1;
  }
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 )
  {
    v7 = GetDispInfo();
    ScreenRectForDpi = (__m128i *)GetMonitorRectForDpiContext(&v19, *(_QWORD *)(v7 + 96), a2);
    goto LABEL_4;
  }
  v8 = *(_QWORD *)(DispInfo + 104);
  v9 = 0LL;
  v19 = 0LL;
  if ( v8 )
  {
    v10 = v19.m128i_i32[3];
    v11 = v19.m128i_i32[2];
    v12 = v19.m128i_i32[1];
    v13 = v19.m128i_i32[0];
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpiContext = (__m128i *)GetMonitorRectForDpiContext(v20, v8, a2);
        v15 = *MonitorRectForDpiContext;
        v16 = MonitorRectForDpiContext->m128i_i64[0];
        v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
        if ( v13 >= (int)v16 )
          v13 = v16;
        v18 = HIDWORD(v16);
        v19.m128i_i32[0] = v13;
        if ( v12 >= (int)v18 )
          v12 = v18;
        v19.m128i_i32[1] = v12;
        if ( v11 <= (int)v17 )
          v11 = v17;
        v19.m128i_i32[2] = v11;
        if ( v10 <= SHIDWORD(v17) )
          v10 = HIDWORD(v17);
        v19.m128i_i32[3] = v10;
      }
      v8 = *(_QWORD *)(v8 + 56);
    }
    while ( v8 );
    v9 = _mm_loadu_si128(&v19);
  }
  *a1 = v9;
  return a1;
}
