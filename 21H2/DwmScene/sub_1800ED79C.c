/*
 * XREFs of sub_1800ED79C @ 0x1800ED79C
 * Callers:
 *     sub_1800768CC @ 0x1800768CC (sub_1800768CC.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18002C3EC @ 0x18002C3EC (sub_18002C3EC.c)
 *     sub_18010D290 @ 0x18010D290 (sub_18010D290.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800ED79C(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-8h]

  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_180020B7C(v5, (__int64)&qword_180214418);
  sub_18010D290(a1, v5);
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  v5[0] = &std::_Func_impl_no_alloc<_lambda_20367243aca76bfbe97691624f9e2047_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6 = v5;
  v2 = o__aligned_malloc(592LL, 16LL);
  a1[26] = 0LL;
  sub_18002C3EC((__int64)(a1 + 19), (__int64)v5);
  a1[27] = v2;
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return a1;
}
