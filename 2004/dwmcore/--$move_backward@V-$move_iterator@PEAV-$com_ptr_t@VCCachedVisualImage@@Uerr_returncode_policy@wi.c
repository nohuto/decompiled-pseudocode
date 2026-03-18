/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801F33A4
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801F40E4 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@w.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy> *>>(
        __int64 a1,
        CRenderTargetBitmap **a2,
        CRenderTargetBitmap **a3,
        __int64 *a4)
{
  CRenderTargetBitmap **v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r15
  CRenderTargetBitmap **v10; // r14
  CRenderTargetBitmap *v11; // rax
  CRenderTargetBitmap *v12; // rcx
  __int64 result; // rax
  __int64 v14; // xmm1_8

  v6 = a3;
  v8 = -(a3 - a2);
  if ( v8 < 0 && a4[2] < (unsigned __int64)-v8 || v8 > 0 && a4[1] - a4[2] < (unsigned __int64)v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v8);
    __debugbreak();
  }
  v9 = *a4;
  v10 = (CRenderTargetBitmap **)(*a4 + 8 * a4[2]);
  while ( a2 != v6 )
  {
    --v6;
    --v10;
    v11 = *v6;
    *v6 = 0LL;
    v12 = *v10;
    *v10 = v11;
    if ( v12 )
      CRenderTargetBitmap::Release(v12);
  }
  result = a1;
  a4[2] = ((__int64)v10 - v9) >> 3;
  v14 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}
