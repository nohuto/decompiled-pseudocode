/*
 * XREFs of ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x1802AD038
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180259EB0 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

CProjectedShadowApproxBlurEffect *__fastcall CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(
        CProjectedShadowApproxBlurEffect *this)
{
  _WORD *v1; // r10
  _OWORD *v2; // r9
  unsigned int v3; // r8d
  __int16 v4; // ax
  CProjectedShadowApproxBlurEffect *result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h]

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CProjectedShadowApproxBlurEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>'};
  v1 = (_WORD *)((char *)this + 24);
  *((_QWORD *)this + 2) = &CProjectedShadowApproxBlurEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  v2 = (_OWORD *)((char *)this + 28);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  v3 = 0;
  do
  {
    v4 = v3++;
    *v1++ = v4 | 0x200;
    *v2 = *(_OWORD *)&_xmm;
    v2 = (_OWORD *)((char *)v2 + 24);
    *((_QWORD *)v2 - 1) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  while ( v3 < 2 );
  *(_QWORD *)&v6 = 2LL;
  if ( this == (CProjectedShadowApproxBlurEffect *)-24LL )
  {
    gsl::details::terminate((gsl::details *)0xFFFFFFFFFFFFFFE8LL);
    __debugbreak();
  }
  *((_QWORD *)&v6 + 1) = (char *)this + 24;
  *(_OWORD *)((char *)this + 104) = v6;
  *((_QWORD *)this + 15) = 75153LL;
  *((_QWORD *)this + 16) = &unk_1803485B0;
  *((_QWORD *)this + 18) = "ProjectedShadowApproxBlur_PS";
  *((_WORD *)this + 78) = 10;
  result = this;
  *((_BYTE *)this + 136) = 1;
  *((_DWORD *)this + 38) = 20;
  return result;
}
