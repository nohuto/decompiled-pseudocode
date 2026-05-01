/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@@Z @ 0x1801D5E88
 * Callers:
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1801D73C0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180062898 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x1800EE3D0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 *     memcpy_0 @ 0x1800F03E7 (memcpy_0.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_7f96eb1dcf99da5daec8c2467d2d5499_,>(
        void **Src,
        unsigned __int64 a2)
{
  void *v2; // r14
  unsigned __int64 v4; // r15
  char *v5; // rdi
  __int64 v6; // rbx
  size_t v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  size_t v10; // r8
  void *v11; // rbx
  void **result; // rax

  v2 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v2 < a2 )
    std::wstring::_Xlen();
  v4 = (unsigned __int64)Src[3];
  v5 = (char *)v2 + a2;
  v6 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v2 + a2);
  v7 = 2 * (v6 + 1);
  if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v7 = -1LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
  Src[2] = v5;
  v9 = v8;
  Src[3] = (void *)v6;
  v10 = 2LL * (_QWORD)v2 + 2;
  if ( v4 < 8 )
  {
    memcpy_0(v8, Src, v10);
  }
  else
  {
    v11 = *Src;
    memcpy_0(v8, *Src, v10);
    std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(2 * v4 + 2));
  }
  result = Src;
  *Src = v9;
  return result;
}
