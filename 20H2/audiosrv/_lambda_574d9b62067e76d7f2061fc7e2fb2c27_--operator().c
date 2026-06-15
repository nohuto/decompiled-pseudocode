/*
 * XREFs of _lambda_574d9b62067e76d7f2061fc7e2fb2c27_::operator() @ 0x18006E25C
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_574d9b62067e76d7f2061fc7e2fb2c27___ @ 0x18006E1C0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall lambda_574d9b62067e76d7f2061fc7e2fb2c27_::operator()(__int64 a1, __int64 *a2)
{
  __int64 *result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF

  result = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v9);
  if ( *result == *(_QWORD *)a1 )
  {
    result = (__int64 *)result[1];
    if ( result == *(__int64 **)(a1 + 8) )
    {
      v5 = **(_QWORD **)(a1 + 16);
      if ( !v5
        || (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2),
            result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5),
            v6 < (__int64)result) )
      {
        result = *(__int64 **)(a1 + 16);
        v7 = *a2;
        v8 = *result;
        *result = *a2;
        if ( v7 )
          result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        if ( v8 )
          return (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  return result;
}
