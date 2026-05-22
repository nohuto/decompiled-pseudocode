/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6e97336237950b521c09fad48fc4540a__void_IMPCInputProviderBase___::_Do_call @ 0x180079100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

bool *__fastcall std::_Func_impl_no_alloc__lambda_6e97336237950b521c09fad48fc4540a__void_IMPCInputProviderBase___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // bl
  bool *result; // rax

  v2 = 0;
  if ( **(_BYTE **)(a1 + 8) )
    v2 = (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2) != 0;
  result = *(bool **)(a1 + 8);
  *result = v2;
  return result;
}
