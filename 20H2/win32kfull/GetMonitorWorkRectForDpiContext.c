/*
 * XREFs of GetMonitorWorkRectForDpiContext @ 0x1C00D3D3C
 * Callers:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     xxxCheckFullScreen @ 0x1C00D3A38 (xxxCheckFullScreen.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C003DE78 (ScaleDPIRect.c)
 *     GetMonitorWorkRectForDpi @ 0x1C00D3D88 (GetMonitorWorkRectForDpi.c)
 */

__m128i *__fastcall GetMonitorWorkRectForDpiContext(__m128i *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r8
  __m128i v5; // xmm0
  __m128i *result; // rax
  __int64 v7; // rdx
  unsigned __int16 v8; // r9
  unsigned __int16 v9; // r8
  __int64 v10; // rax
  __int64 v11; // [rsp+28h] [rbp-20h]
  __m128i v12; // [rsp+30h] [rbp-18h] BYREF

  if ( (a3 & 0xF) == 2 && (a3 & 0x20000000) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_WORD *)(v7 + 64);
    v9 = *(_WORD *)(v7 + 68);
    v11 = *(_QWORD *)(v7 + 28);
    v10 = *(_QWORD *)(v7 + 72);
    v12 = *(__m128i *)(v7 + 44);
    ScaleDPIRect(&v12, &v12, v9, v8, v10, v11);
    v5 = v12;
  }
  else
  {
    v4 = a3 >> 8;
    LOWORD(v4) = v4 & 0x1FF;
    v5 = *(__m128i *)GetMonitorWorkRectForDpi(&v12, a2, v4);
  }
  result = a1;
  *a1 = v5;
  return result;
}
