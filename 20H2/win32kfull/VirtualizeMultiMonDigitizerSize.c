/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01E5AF4
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C011965C (_GetPointerDeviceRects.c)
 *     MiPGetPhysicalRect @ 0x1C011970C (MiPGetPhysicalRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E547C (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C0119754 (GetScreenRect.c)
 *     ExpandedMonitorSpace @ 0x1C01E38AC (ExpandedMonitorSpace.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1)
{
  INT v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __m128i *ScreenRect; // rax
  __m128i v7; // xmm6
  INT v8; // eax
  INT v9; // r8d
  INT v10; // ecx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __m128i v13; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v2) = W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF;
  if ( (_BYTE)v2 != 2 )
  {
    v12 = 0LL;
    ExpandedMonitorSpace((__int64 *)&v12, v3, v4, v5);
    ScreenRect = GetScreenRect(&v13);
    v7 = *ScreenRect;
    v8 = EngMulDiv(
           *(_DWORD *)(a1 + 8),
           _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
           DWORD2(v12) - v12);
    v9 = HIDWORD(v12) - DWORD1(v12);
    v10 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v8;
    v2 = EngMulDiv(v10, _mm_cvtsi128_si32(_mm_srli_si128(v7, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v7, 4)), v9);
    *(_DWORD *)(a1 + 12) = v2;
  }
  return v2;
}
