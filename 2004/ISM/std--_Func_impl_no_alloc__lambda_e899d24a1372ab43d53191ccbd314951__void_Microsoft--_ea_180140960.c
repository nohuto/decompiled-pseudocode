/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e899d24a1372ab43d53191ccbd314951__void_Microsoft::WRL::ComPtr_DataProviderPrincipal__&_::_Move @ 0x180140960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_e899d24a1372ab43d53191ccbd314951__void_Microsoft::WRL::ComPtr_DataProviderPrincipal____::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801AC8D8;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 28);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 48);
  result = a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
