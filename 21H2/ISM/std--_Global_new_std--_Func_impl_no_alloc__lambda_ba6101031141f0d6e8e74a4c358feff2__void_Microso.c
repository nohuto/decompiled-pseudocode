/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_ba6101031141f0d6e8e74a4c358feff2__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&___lambda_ba6101031141f0d6e8e74a4c358feff2__const_&_ @ 0x18013DE50
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ba6101031141f0d6e8e74a4c358feff2__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Copy @ 0x180140B20 (std--_Func_impl_no_alloc__lambda_ba6101031141f0d6e8e74a4c358feff2__void_Microsoft--_ea_180140B20.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_ba6101031141f0d6e8e74a4c358feff2__void_Microsoft::WRL::ComPtr_DataProviderPrincipal______lambda_ba6101031141f0d6e8e74a4c358feff2__const___(
        __int64 a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = operator new(0x40uLL);
  *v2 = off_1801AD908;
  v2[1] = 0LL;
  v2[2] = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v2[1] = *(_QWORD *)a1;
  v2[2] = *(_QWORD *)(a1 + 8);
  *((_DWORD *)v2 + 6) = *(_DWORD *)(a1 + 16);
  *((_DWORD *)v2 + 7) = *(_DWORD *)(a1 + 20);
  v2[4] = *(_QWORD *)(a1 + 24);
  v2[5] = *(_QWORD *)(a1 + 32);
  v2[6] = 0LL;
  v2[7] = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v2[6] = *(_QWORD *)(a1 + 40);
  v2[7] = *(_QWORD *)(a1 + 48);
  return v2;
}
