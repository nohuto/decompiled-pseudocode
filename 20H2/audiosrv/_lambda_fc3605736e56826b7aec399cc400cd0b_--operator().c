/*
 * XREFs of _lambda_fc3605736e56826b7aec399cc400cd0b_::operator() @ 0x1800DAAA4
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_fc3605736e56826b7aec399cc400cd0b___ @ 0x1800DA708 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800DA708.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_fc3605736e56826b7aec399cc400cd0b_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *result; // rax
  __int64 v9; // rcx
  _BYTE v10[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v10);
  v5 = *v4 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *v4 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v5 = v4[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( !v5 )
    **(_BYTE **)a1 = 1;
  v6 = *a2;
  v7 = *(_QWORD **)(a1 + 8);
  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 40LL))(v6, v10);
  v9 = *result - *v7;
  if ( *result == *v7 )
    v9 = result[1] - v7[1];
  if ( !v9 )
  {
    result = *(_QWORD **)(a1 + 16);
    *(_BYTE *)result = 1;
  }
  return result;
}
