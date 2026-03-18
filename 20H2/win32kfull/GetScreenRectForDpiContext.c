/*
 * XREFs of GetScreenRectForDpiContext @ 0x1C003DB40
 * Callers:
 *     GetMaxTrackSizeForWindow @ 0x1C003DA48 (GetMaxTrackSizeForWindow.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     GetScreenRectForWindow @ 0x1C025D48C (GetScreenRectForWindow.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C003DBBC (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpiContext @ 0x1C003DDC8 (GetMonitorRectForDpiContext.c)
 */

__m128i *__fastcall GetScreenRectForDpiContext(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __m128i *ScreenRectForDpi; // rax
  _QWORD *DispInfo; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rsi
  __m128i v14; // xmm0
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  int v18; // r13d
  __m128i *MonitorRectForDpiContext; // rax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // xmm0_8
  unsigned __int64 v23; // rax
  __m128i v24; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v25[16]; // [rsp+30h] [rbp-10h] BYREF

  v4 = a2;
  if ( (a2 & 0xF) != 2 || (a2 & 0x20000000) == 0 )
  {
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v25, ((unsigned int)a2 >> 8) & 0x1FF);
LABEL_4:
    *a1 = *ScreenRectForDpi;
    return a1;
  }
  DispInfo = (_QWORD *)GetDispInfo(a1, a2, a3, a4);
  if ( *(_DWORD *)*DispInfo == 1 )
  {
    v12 = GetDispInfo(v9, *DispInfo, v10, v11);
    ScreenRectForDpi = (__m128i *)GetMonitorRectForDpiContext(&v24, *(_QWORD *)(v12 + 96), v4);
    goto LABEL_4;
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
        MonitorRectForDpiContext = (__m128i *)GetMonitorRectForDpiContext(v25, v13, v4);
        v20 = *MonitorRectForDpiContext;
        v21 = MonitorRectForDpiContext->m128i_i64[0];
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
