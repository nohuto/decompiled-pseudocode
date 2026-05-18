/*
 * XREFs of sub_1800C7AB4 @ 0x1800C7AB4
 * Callers:
 *     sub_1800C79C0 @ 0x1800C79C0 (sub_1800C79C0.c)
 * Callees:
 *     sub_1800C8734 @ 0x1800C8734 (sub_1800C8734.c)
 *     __std_type_info_hash @ 0x18011E0A6 (__std_type_info_hash.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800C7AB4(__int64 *a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdi
  int v12; // eax
  struct _Mtx_internal_imp_t *v14; // [rsp+20h] [rbp-38h]
  __int128 v15; // [rsp+28h] [rbp-30h] BYREF
  __int128 v16; // [rsp+38h] [rbp-20h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v14 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v5 = Mtx_lock((_Mtx_t)(a1 + 2));
  if ( v5 )
    goto LABEL_23;
  v6 = _std_type_info_hash(&qword_18020FD10);
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_9;
  do
  {
    if ( v8[4] >= v6 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v7 == (__int64 *)*a1 || v6 < v7[4] )
LABEL_9:
    v7 = (__int64 *)*a1;
  if ( v7 == (__int64 *)*a1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v9 = Mtx_unlock(v4);
    if ( !v9 )
      return a2;
    goto LABEL_22;
  }
  v16 = 0LL;
  v10 = v7[12];
  if ( !v10 )
  {
LABEL_24:
    std::_Xbad_function_call();
    JUMPOUT(0x1800C7C3ALL);
  }
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 16LL))(v10, &v16);
  v15 = 0LL;
  sub_1800C8734(&v15, &v16);
  *(_OWORD *)a2 = v15;
  v11 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    v4 = v14;
  }
  v12 = Mtx_unlock(v4);
  if ( v12 )
  {
    std::_Throw_C_error(v12);
LABEL_22:
    std::_Throw_C_error(v9);
LABEL_23:
    std::_Throw_C_error(v5);
    goto LABEL_24;
  }
  return a2;
}
