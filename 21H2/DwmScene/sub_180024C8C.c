/*
 * XREFs of sub_180024C8C @ 0x180024C8C
 * Callers:
 *     sub_18002B5B0 @ 0x18002B5B0 (sub_18002B5B0.c)
 * Callees:
 *     sub_18002660C @ 0x18002660C (sub_18002660C.c)
 *     sub_18002C458 @ 0x18002C458 (sub_18002C458.c)
 *     __std_type_info_hash @ 0x180123976 (__std_type_info_hash.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180024C8C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  _QWORD *v4; // rdx
  int result; // eax
  _QWORD v6[3]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v7[7]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v8; // [rsp+78h] [rbp-20h]
  __int64 v9; // [rsp+80h] [rbp-18h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  v3 = Mtx_lock((_Mtx_t)(a1 + 16));
  if ( v3 )
  {
LABEL_6:
    std::_Throw_C_error(v3);
    JUMPOUT(0x180024D78LL);
  }
  v9 = _std_type_info_hash(&qword_180216E08);
  sub_18002660C(a1, v6, &v9);
  v7[0] = &std::_Func_impl_no_alloc<_lambda_0afe27ddc9a0cdc90bbf3e2db7bb1a1d_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
  v8 = v7;
  sub_18002C458(v7, v6[0] + 40LL);
  if ( v8 )
  {
    v4 = v7;
    LOBYTE(v4) = v8 != v7;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v8 + 32LL))(v8, v4);
  }
  result = Mtx_unlock(v2);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_6;
  }
  return result;
}
