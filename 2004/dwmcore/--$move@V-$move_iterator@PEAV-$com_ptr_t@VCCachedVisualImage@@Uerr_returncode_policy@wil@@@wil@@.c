/*
 * XREFs of ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18016B4E0
 * Callers:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801757E0 (-clear_region@-$vector_facade@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall std::move<std::move_iterator<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy> *>>(
        __int64 a1,
        CRenderTargetBitmap **a2,
        CRenderTargetBitmap **a3,
        __int64 *a4)
{
  CRenderTargetBitmap **v4; // rbx
  __int64 v8; // rdx
  bool v9; // cc
  __int64 v10; // r15
  CRenderTargetBitmap **v11; // rsi
  CRenderTargetBitmap *v12; // rax
  CRenderTargetBitmap *v13; // rcx
  __int64 result; // rax
  __int64 v15; // xmm1_8

  v4 = a2;
  v8 = a3 - a2;
  v9 = v8 <= 0;
  if ( v8 >= 0 )
  {
LABEL_4:
    if ( v9 || a4[1] - a4[2] >= (unsigned __int64)v8 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( a4[2] >= (unsigned __int64)-v8 )
  {
    v9 = v8 <= 0;
    goto LABEL_4;
  }
LABEL_6:
  _o__invalid_parameter_noinfo_noreturn(a1, v8);
  __debugbreak();
LABEL_7:
  v10 = *a4;
  v11 = (CRenderTargetBitmap **)(*a4 + 8 * a4[2]);
  while ( v4 != a3 )
  {
    v12 = *v4;
    *v4 = 0LL;
    v13 = *v11;
    *v11 = v12;
    if ( v13 )
      CRenderTargetBitmap::Release(v13);
    ++v11;
    ++v4;
  }
  result = a1;
  a4[2] = ((__int64)v11 - v10) >> 3;
  v15 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v15;
  return result;
}
