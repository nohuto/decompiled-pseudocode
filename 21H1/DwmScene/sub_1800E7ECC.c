/*
 * XREFs of sub_1800E7ECC @ 0x1800E7ECC
 * Callers:
 *     sub_180070FFC @ 0x180070FFC (sub_180070FFC.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180026B1C @ 0x180026B1C (sub_180026B1C.c)
 *     sub_1801079C0 @ 0x1801079C0 (sub_1801079C0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800E7ECC(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-8h]

  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_18001CDF8(v5, (__int64)&qword_18020D3A8);
  sub_1801079C0(a1, v5);
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  v5[0] = &std::_Func_impl_no_alloc<_lambda_20367243aca76bfbe97691624f9e2047_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6 = v5;
  v2 = o__aligned_malloc(592LL, 16LL);
  a1[26] = 0LL;
  sub_180026B1C((__int64)(a1 + 19), (__int64)v5);
  a1[27] = v2;
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return a1;
}
