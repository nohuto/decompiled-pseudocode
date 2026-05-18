/*
 * XREFs of sub_18010B0B4 @ 0x18010B0B4
 * Callers:
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 * Callees:
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     sub_18010ADDC @ 0x18010ADDC (sub_18010ADDC.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18010B0B4(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  volatile signed __int32 *v12; // rbx

  sub_18010ADDC((_QWORD *)a1, 0x10uLL);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v7 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v7 )
  {
LABEL_17:
    std::_Throw_C_error(v7);
    __debugbreak();
  }
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_QWORD **)a1;
  if ( *(_QWORD **)a1 != v8 )
  {
    do
    {
      unknown_libname_102((__int64)v9, 0);
      v9 += 2;
    }
    while ( v9 != v8 );
    v9 = *(_QWORD **)a1;
  }
  *(_QWORD *)(a1 + 8) = v9;
  if ( *(_QWORD **)(a1 + 16) == v9 )
  {
    sub_18001101C((_QWORD *)a1, v9, a3);
  }
  else
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v10 = a3[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
    }
    *v9 = *a3;
    v9[1] = a3[1];
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  v11 = Mtx_unlock(v6);
  if ( v11 )
  {
    std::_Throw_C_error(v11);
    goto LABEL_17;
  }
  v12 = (volatile signed __int32 *)a3[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
