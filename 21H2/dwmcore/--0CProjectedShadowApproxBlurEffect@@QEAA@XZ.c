/*
 * XREFs of ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x18001D474
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18001D2F0 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
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
  *(_QWORD *)this = &CProjectedShadowApproxBlurEffect::`vftable'{for `CMILRefCountBase'};
  v1 = (_WORD *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CProjectedShadowApproxBlurEffect::`vftable'{for `Windows::UI::Composition::IEffectInstance'};
  v2 = (_OWORD *)((char *)this + 36);
  *((_QWORD *)this + 3) = &CProjectedShadowApproxBlurEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v3 = 0;
  do
  {
    v4 = v3++;
    *v1++ = v4 | 0x200;
    *v2 = _xmm;
    v2 = (_OWORD *)((char *)v2 + 24);
    *((_QWORD *)v2 - 1) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  while ( v3 < 2 );
  *(_QWORD *)&v6 = 2LL;
  if ( this == (CProjectedShadowApproxBlurEffect *)-32LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *((_QWORD *)&v6 + 1) = (char *)this + 32;
  *((_OWORD *)this + 7) = v6;
  *((_QWORD *)this + 16) = 75153LL;
  *((_QWORD *)this + 17) = &unk_18029A910;
  *((_QWORD *)this + 19) = "ProjectedShadowApproxBlur_PS";
  *((_WORD *)this + 82) = 10;
  result = this;
  *((_BYTE *)this + 144) = 1;
  *((_DWORD *)this + 40) = 20;
  return result;
}
