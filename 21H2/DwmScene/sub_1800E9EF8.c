/*
 * XREFs of sub_1800E9EF8 @ 0x1800E9EF8
 * Callers:
 *     sub_1800764EC @ 0x1800764EC (sub_1800764EC.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18002C3EC @ 0x18002C3EC (sub_18002C3EC.c)
 *     sub_1800A8998 @ 0x1800A8998 (sub_1800A8998.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800E9EF8(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v5[7]; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+68h] [rbp-8h]

  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_180020B7C(v5, (__int64)&qword_180213C58);
  sub_1800A8998((__int64)a1, v5);
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v5[0] = (__int64)&std::_Func_impl_no_alloc<_lambda_39709042d9feebb009db8fd78baed610_,void,Spectre::Engine::LightConstants *>::`vftable';
  v6 = v5;
  v2 = o__aligned_malloc(592LL, 16LL);
  a1[21] = 0LL;
  sub_18002C3EC((__int64)(a1 + 14), (__int64)v5);
  a1[22] = v2;
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(__int64 *, __int64 *))(*v6 + 32))(v6, v3);
  }
  return a1;
}
