/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_156f8c05752017390d6185e99ef4c093_@@_KPEBG2@Z @ 0x18006DA08
 * Callers:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x180071130 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x18002B938 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     memcpy_0 @ 0x18004AC7B (memcpy_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXXZ @ 0x180070F08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXXZ.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_156f8c05752017390d6185e99ef4c093_,unsigned __int64,unsigned short const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  void *v6; // r14
  unsigned __int64 v8; // r15
  char *v9; // rdi
  __int64 v10; // rbx
  size_t v11; // rcx
  _QWORD *v12; // rbp
  size_t v13; // r14
  size_t v14; // r8
  char *v15; // rdi
  void *v16; // rbx
  void **result; // rax

  v6 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v6 < a2 )
    std::wstring::_Xlen();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v6 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v6 + a2);
  v11 = 2 * (v10 + 1);
  if ( (unsigned __int64)(v10 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  Src[2] = v9;
  v13 = 2LL * (_QWORD)v6 + 2;
  Src[3] = (void *)v10;
  v14 = 2 * a6;
  v15 = (char *)v12 + 2 * a6;
  if ( v8 < 8 )
  {
    memcpy_0(v12, L",", v14);
    memcpy_0(v15, Src, v13);
  }
  else
  {
    v16 = *Src;
    memcpy_0(v12, L",", v14);
    memcpy_0(v15, v16, v13);
    std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)(2 * v8 + 2));
  }
  result = Src;
  *Src = v12;
  return result;
}
