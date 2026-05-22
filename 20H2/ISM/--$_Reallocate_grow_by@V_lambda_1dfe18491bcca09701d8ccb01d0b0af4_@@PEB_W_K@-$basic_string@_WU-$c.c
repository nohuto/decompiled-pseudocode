/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@Z @ 0x180155338
 * Callers:
 *     ?TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180166400 (-TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBU_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x18002B9C8 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_1dfe18491bcca09701d8ccb01d0b0af4_,wchar_t const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5)
{
  void *v5; // r15
  unsigned __int64 v8; // r13
  char *v9; // rdi
  __int64 v10; // rbx
  size_t v11; // rcx
  _QWORD *v12; // rax
  size_t v13; // r8
  __int64 v14; // r15
  _QWORD *v15; // r14
  char *v16; // r12
  size_t v17; // rdi
  void *v18; // rbx
  void **result; // rax

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlength_error("string too long");
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v5 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v5 + a2);
  v11 = 2 * (v10 + 1);
  if ( (unsigned __int64)(v10 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v13 = 2LL * (_QWORD)v5;
  v14 = (__int64)v5 + a5;
  Src[2] = v9;
  Src[3] = (void *)v10;
  v15 = v12;
  v16 = (char *)v12 + v13;
  v17 = 2 * a5;
  if ( v8 < 8 )
  {
    memcpy_0(v12, Src, v13);
    memcpy_0(v16, a4, v17);
    *((_WORD *)v15 + v14) = 0;
  }
  else
  {
    v18 = *Src;
    memcpy_0(v12, *Src, v13);
    memcpy_0(v16, a4, v17);
    *((_WORD *)v15 + v14) = 0;
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(2 * v8 + 2));
  }
  result = Src;
  *Src = v15;
  return result;
}
