/*
 * XREFs of ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800593D8
 * Callers:
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x18003153C (--1CBlurredBackdropCache@@QEAA@XZ.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@@Z @ 0x18005945C (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 * Callees:
 *     ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x180059288 (--$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdrop.c)
 *     ??$move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180253318 (--$move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_iterator@P.c)
 */

void *__fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  CBlurredBackdropCache::CachedBlur *v3; // rdi
  __int64 v4; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  void *result; // rax
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v7 = 0xF0F0F0F0F0F0F0F1uLL * ((a1[1] - *a1) >> 3);
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = (CBlurredBackdropCache::CachedBlur *)(v4 + 136 * v7);
    if ( v8 == v7 )
      goto LABEL_3;
  }
  *(_QWORD *)&v11 = v4;
  *((_QWORD *)&v11 + 1) = v7;
  if ( a2 && (!v4 || a2 < 0 || v7 < a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x1801366EELL);
  }
  v12 = a2;
  v13 = v11;
  v14 = a2;
  std::move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
    &v11,
    v4 + 136 * v8,
    v3,
    &v13);
LABEL_3:
  v9 = 136 * a3;
  result = detail::destruct_range<CBlurredBackdropCache::CachedBlur>(
             (CBlurredBackdropCache::CachedBlur *)((char *)v3 - v9),
             v3);
  a1[1] -= v9;
  return result;
}
