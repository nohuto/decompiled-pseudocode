/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d73f5fb274a89d640a490ac89c80c1e5__bool_ActivatableEntityBamoPrincipal___::_Do_call @ 0x180004950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall std::_Func_impl_no_alloc__lambda_d73f5fb274a89d640a490ac89c80c1e5__bool_ActivatableEntityBamoPrincipal___::_Do_call(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rdx

  v3 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 56LL))(*(_QWORD *)a2 + 8LL);
  v4 = *(_DWORD **)(a1 + 8);
  return v4[1] == v3[1] && *v4 == *v3;
}
