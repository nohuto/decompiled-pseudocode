/*
 * XREFs of sub_18010B400 @ 0x18010B400
 * Callers:
 *     sub_1800E231C @ 0x1800E231C (sub_1800E231C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_18010ACD4 @ 0x18010ACD4 (sub_18010ACD4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18010B400(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  char *v6; // r15
  char *v7; // rsi
  int v8; // eax
  __int128 i; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rbx
  __int64 result; // rax
  volatile signed __int32 *v14; // rbx
  __int128 v15; // [rsp+28h] [rbp-58h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-40h]
  _BYTE v18[8]; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int32 *v19; // [rsp+50h] [rbp-30h]
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]

  v16 = a2;
  v21 = 0LL;
  v20 = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v17 = a1 + 48;
  v5 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v5 )
  {
LABEL_23:
    std::_Throw_C_error(v5);
    JUMPOUT(0x18010B5D1LL);
  }
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 32), a2);
  if ( &v20 != (__int128 *)a1 )
    sub_18010ACD4((__int64)&v20, *(char **)a1, *(char **)(a1 + 8));
  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  if ( *(char **)a1 != v6 )
  {
    do
    {
      unknown_libname_102((__int64)v7, 0);
      v7 += 16;
    }
    while ( v7 != v6 );
    v7 = *(char **)a1;
  }
  *(_QWORD *)(a1 + 8) = v7;
  v8 = Mtx_unlock(v4);
  if ( v8 )
  {
    std::_Throw_C_error(v8);
    goto LABEL_23;
  }
  for ( i = v20; (_QWORD)i != *((_QWORD *)&i + 1); *(_QWORD *)&i = i + 16 )
  {
    v10 = *(_QWORD *)i;
    v15 = 0LL;
    v11 = a2[1];
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v11 = a2[1];
    }
    *(_QWORD *)&v15 = *a2;
    *((_QWORD *)&v15 + 1) = v11;
    (*(void (__fastcall **)(__int64, _BYTE *, __int128 *))(*(_QWORD *)v10 + 8LL))(v10, v18, &v15);
    v12 = v19;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  result = sub_180012A18((__int64 *)&v20);
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
