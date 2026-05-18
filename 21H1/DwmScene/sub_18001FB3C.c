/*
 * XREFs of sub_18001FB3C @ 0x18001FB3C
 * Callers:
 *     sub_180025CE0 @ 0x180025CE0 (sub_180025CE0.c)
 * Callees:
 *     sub_180020D3C @ 0x180020D3C (sub_180020D3C.c)
 *     sub_180026B88 @ 0x180026B88 (sub_180026B88.c)
 *     __std_type_info_hash @ 0x18011E0A6 (__std_type_info_hash.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_18001FB3C(__int64 a1)
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
    JUMPOUT(0x18001FC28LL);
  }
  v9 = _std_type_info_hash(&qword_18020FB40);
  sub_180020D3C(a1, v6, &v9);
  v7[0] = &std::_Func_impl_no_alloc<_lambda_ad0815aa9f361cf5dc68792ada8f36bf_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
  v8 = v7;
  sub_180026B88(v7, v6[0] + 40LL);
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
