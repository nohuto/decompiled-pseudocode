/*
 * XREFs of ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x180058B9C
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180054FB4 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x180058ED0 (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x18005915C (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 *     ?CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x180086D24 (-CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z.c)
 */

void __fastcall CBlurredBackdropCache::UpdateCachedBlur(
        CBlurredBackdropCache *this,
        struct CBackdropVisualImage *a2,
        const struct RenderTargetInfo *a3,
        const struct EffectInput *a4)
{
  __int64 v4; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp+8h]

  v4 = *(_QWORD *)this;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 1);
    if ( v4 == v10 )
      break;
    if ( a2 == *(struct CBackdropVisualImage **)v4
      && CanRenderToTargetFromSource(a3, (const struct RenderTargetInfo *)(v4 + 8)) )
    {
      v9 = v4;
      EffectInput::operator=((__int64 *)(v4 + 32), (__int64 *)a4);
    }
    v4 += 136LL;
  }
  if ( !v9 )
  {
    v12 = *(_OWORD *)a3;
    v13 = *((_QWORD *)a3 + 2);
    v11 = detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::reserve_region(
            this,
            0xF0F0F0F0F0F0F0F1uLL * ((v10 - *(_QWORD *)this) >> 3));
    *(_OWORD *)(v11 + 8) = v12;
    *(_QWORD *)v11 = a2;
    *(_QWORD *)(v11 + 24) = v13;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_BYTE *)(v11 + 48) = 0;
    *(_OWORD *)(v11 + 80) = 0LL;
    EffectInput::operator=((__int64 *)(*((_QWORD *)this + 1) - 104LL), (__int64 *)a4);
    CBackdropVisualImage::RegisterBlurCache(a2, this);
  }
}
