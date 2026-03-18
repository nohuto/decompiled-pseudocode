/*
 * XREFs of ?CalcOcclusion@CCachedVisualImage@@IEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800D3638
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180046890 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 CCachedVisualImage::CalcOcclusion()
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 *v3; // rcx
  __int64 v4; // rax
  int (__fastcall *v5)(__int64 *, _QWORD *, __int64); // rax
  __int64 v6; // rbx
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v2 + 224) == CurrentFrameId )
    return v2 + 208;
  v3 = *(__int64 **)(v2 + 176);
  v4 = *v3;
  v8[0] = 1LL;
  v8[1] = v1;
  v5 = *(int (__fastcall **)(__int64 *, _QWORD *, __int64))(v4 + 216);
  if ( !v1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v6 = v2 + 208;
  if ( v5(v3, v8, v2 + 208) >= 0 )
    return v6;
  return 0LL;
}
