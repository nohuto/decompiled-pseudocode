/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_574d9b62067e76d7f2061fc7e2fb2c27___ @ 0x18006E1C0
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800DE190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     _lambda_574d9b62067e76d7f2061fc7e2fb2c27_::operator() @ 0x18006E25C (_lambda_574d9b62067e76d7f2061fc7e2fb2c27_--operator().c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_574d9b62067e76d7f2061fc7e2fb2c27___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  __int64 result; // rax

  for ( i = a2; i != a3; i += 8LL )
    lambda_574d9b62067e76d7f2061fc7e2fb2c27_::operator()(a4, i);
  result = a1;
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a4 + 16);
  return result;
}
