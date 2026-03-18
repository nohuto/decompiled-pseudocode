/*
 * XREFs of ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800DD450
 * Callers:
 *     ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800DD3F0 (-CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall CCachedVisualImage::CalcOcclusion(_QWORD *a1, __int64 a2)
{
  struct CComposition *CurrentFrameId; // rax
  _QWORD *v5; // rcx
  gsl::details **v6; // rax
  gsl::details *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentFrameId = GetCurrentFrameId();
  if ( (struct CComposition *)v5[30] == CurrentFrameId
    && (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 216LL))(v5) == a1[28] )
  {
    return a1 + 27;
  }
  v6 = (gsl::details **)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 216LL))(a1);
  v7 = *v6;
  v10[0] = 1LL;
  v10[1] = a2;
  if ( !a2 )
  {
    gsl::details::terminate(v7);
    __debugbreak();
  }
  v8 = a1 + 27;
  if ( (*((int (__fastcall **)(gsl::details **, _QWORD *, _QWORD *))v7 + 24))(v6, v10, v8) >= 0 )
    return v8;
  return 0LL;
}
