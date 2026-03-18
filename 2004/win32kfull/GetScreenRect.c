/*
 * XREFs of GetScreenRect @ 0x1C0118904
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetPointerDeviceRects @ 0x1C011880C (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1C01DA43C (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E0FB8 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E613C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E67B4 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01FA760 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023F6CC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C00231F0 (GetScreenRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1)
{
  unsigned __int16 v2; // bx
  __m128i v3; // xmm0
  __m128i *result; // rax
  __m128i v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext((__int64)a1) >> 8) & 0x1FF;
  if ( v2
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL)
                   + 64LL) & 1) == 0) )
  {
    v2 = 0;
  }
  v3 = *GetScreenRectForDpi(&v5, v2);
  result = a1;
  *a1 = v3;
  return result;
}
