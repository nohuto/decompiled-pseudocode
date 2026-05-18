/*
 * XREFs of sub_1800C3AEC @ 0x1800C3AEC
 * Callers:
 *     sub_1800C2EF0 @ 0x1800C2EF0 (sub_1800C2EF0.c)
 * Callees:
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C3AEC(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  _QWORD v5[10]; // [rsp+28h] [rbp-50h] BYREF

  v2 = (__int64 *)sub_18007AB84(a1, 1);
  v5[1] = a1;
  v5[0] = &std::_Func_impl_no_alloc<_lambda_823642e07a838ed8a51da7ce3fd8e94c_,void,std::wstring const &>::`vftable';
  v3 = *v2;
  v5[7] = v5;
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v3 + 8))(v2, v5);
}
