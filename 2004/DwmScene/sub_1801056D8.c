/*
 * XREFs of sub_1801056D8 @ 0x1801056D8
 * Callers:
 *     sub_1800DCA4C @ 0x1800DCA4C (sub_1800DCA4C.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     sub_18010550C @ 0x18010550C (sub_18010550C.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1801056D8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // rsi
  int v10; // eax
  volatile signed __int32 *v11; // rbx

  sub_18010550C((_QWORD *)a1, 0x10uLL);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v7 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v7 )
  {
LABEL_14:
    std::_Throw_C_error(v7);
    JUMPOUT(0x1801057E1LL);
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != v8 )
  {
    do
    {
      unknown_libname_100(v9, 0);
      v9 += 16LL;
    }
    while ( v9 != v8 );
    v9 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v9;
  v10 = Mtx_unlock((_Mtx_t)(a1 + 48));
  if ( v10 )
  {
    std::_Throw_C_error(v10);
    goto LABEL_14;
  }
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a1;
}
