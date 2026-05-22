/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9b9f0c840769002edef58b55115a0dea__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Move @ 0x18019C720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_9b9f0c840769002edef58b55115a0dea__void_Microsoft::WRL::ComPtr_DataProviderPrincipal____::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r9

  v2 = a1 + 8;
  *(_QWORD *)a2 = off_1801AED30;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( a2 + 8 != v2 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)v2;
    *(_QWORD *)v2 = 0LL;
  }
  v3 = (_QWORD *)(v2 + 8);
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( a2 + 16 != v2 + 8 )
  {
    *(_QWORD *)(a2 + 16) = *v3;
    *v3 = 0LL;
  }
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(v2 + 16);
  return a2;
}
