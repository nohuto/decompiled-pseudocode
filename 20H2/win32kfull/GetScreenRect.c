/*
 * XREFs of GetScreenRect @ 0x1C0119754
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetPointerDeviceRects @ 0x1C011965C (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1C01D977C (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E02F8 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E547C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E5AF4 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F98F0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023E42C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C003DBBC (GetScreenRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1)
{
  unsigned __int16 v2; // bx
  __int64 v3; // r8
  __int64 v4; // r9
  __m128i v5; // xmm0
  __m128i *result; // rax
  __m128i v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext((__int64)a1) >> 8) & 0x1FF;
  if ( v2
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                   + 64LL) & 1) == 0) )
  {
    v2 = 0;
  }
  v5 = *GetScreenRectForDpi(&v7, v2, v3, v4);
  result = a1;
  *a1 = v5;
  return result;
}
