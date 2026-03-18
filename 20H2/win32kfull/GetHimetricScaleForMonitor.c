/*
 * XREFs of GetHimetricScaleForMonitor @ 0x1C01E4FB4
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F98F0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ExpandedMonitorSpace @ 0x1C01E38AC (ExpandedMonitorSpace.c)
 *     ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01E3B08 (-ReduceFraction@@YAXPEAK0@Z.c)
 */

__int64 __fastcall GetHimetricScaleForMonitor(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __m128i v9; // xmm6
  __int64 v10; // rax
  __m128i v11; // xmm7
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int i; // ecx
  unsigned int v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+20h] BYREF

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF) == 2 )
  {
    result = 1LL;
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    v9 = *(__m128i *)GetMonitorRect(&v17, a1, v6, v7);
    v10 = *(_QWORD *)(a1 + 40);
    v17 = 0LL;
    v11 = *(__m128i *)(v10 + 28);
    ExpandedMonitorSpace((__int64 *)&v17, v12, v13, v14);
    v18 = (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8))
         - _mm_cvtsi128_si32(*(__m128i *)(*gpDispInfo + 24LL)))
        * (_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - _mm_cvtsi128_si32(v9));
    v16 = (DWORD2(v17) - v17) * (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) - _mm_cvtsi128_si32(v11));
    ReduceFraction(&v18, &v16);
    result = v18;
    for ( i = v16; (unsigned int)result > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
      result = (unsigned int)result >> 1;
    if ( !i || !(_DWORD)result )
    {
      result = 1LL;
      i = 1;
    }
    *a2 = result;
    *a3 = i;
  }
  return result;
}
