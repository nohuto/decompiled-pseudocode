/*
 * XREFs of GreScaleRgnToDestLogPixel @ 0x1C029E348
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00E4598 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C00E49E4 (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0137670 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     NtUserGetWindowRgnEx @ 0x1C01FC7A0 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C009EEA8 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall GreScaleRgnToDestLogPixel(__int64 a1, HRGN a2, __int64 a3, __int64 a4)
{
  int ScaledLogPixels; // ebx
  __m128 v7; // xmm0
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(a1, a2, a3, a4);
  if ( ScaledLogPixels != 96 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a2, 1);
    if ( !v8[0] )
    {
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
      return 0LL;
    }
    v7 = (__m128)COERCE_UNSIGNED_INT((float)ScaledLogPixels);
    v7.m128_f32[0] = v7.m128_f32[0] / 96.0;
    RGNOBJ::vScale(v8, _mm_unpacklo_ps(v7, v7).m128_u64[0]);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v8);
  }
  return 1LL;
}
