/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ba6101031141f0d6e8e74a4c358feff2__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Delete_this @ 0x180140750
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_ba6101031141f0d6e8e74a4c358feff2__void_Microsoft::WRL::ComPtr_DataProviderPrincipal____::_Delete_this(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v4 = (std::_Ref_count_base *)a1[7];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)a1[2];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
}
