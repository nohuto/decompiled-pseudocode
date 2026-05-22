/*
 * XREFs of std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)___lambda_ba6101031141f0d6e8e74a4c358feff2__void_ @ 0x18013D5E4
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x18013EE30 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_____::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_______lambda_ba6101031141f0d6e8e74a4c358feff2__void_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = operator new(0x40uLL);
  *v4 = off_1801AC8D8;
  v4[1] = 0LL;
  v4[2] = 0LL;
  v4[1] = *(_QWORD *)a2;
  v4[2] = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *((_DWORD *)v4 + 6) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)v4 + 7) = *(_DWORD *)(a2 + 20);
  v4[4] = *(_QWORD *)(a2 + 24);
  v4[5] = *(_QWORD *)(a2 + 32);
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[6] = *(_QWORD *)(a2 + 40);
  v4[7] = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = v4;
  v5 = *(std::_Ref_count_base **)(a2 + 48);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
