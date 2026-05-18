/*
 * XREFs of sub_18010B2A4 @ 0x18010B2A4
 * Callers:
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 * Callees:
 *     sub_18001101C @ 0x18001101C (sub_18001101C.c)
 *     sub_180121E6C @ 0x180121E6C (sub_180121E6C.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010B2A4(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  volatile signed __int32 *v15; // rdi
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  struct _Mtx_internal_imp_t *v18; // [rsp+50h] [rbp+8h]

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v18 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v7 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v7 )
    goto LABEL_19;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    v9 = *a3;
    v17 = 0LL;
    v10 = *(_QWORD *)(a1 + 40);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v8 = *(_QWORD *)(a1 + 32);
      v10 = *(_QWORD *)(a1 + 40);
      v6 = v18;
    }
    *(_QWORD *)&v17 = v8;
    *((_QWORD *)&v17 + 1) = v10;
    (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 8LL))(v9, a2, &v17);
    v11 = Mtx_unlock(v6);
    if ( !v11 )
      goto LABEL_13;
LABEL_20:
    std::_Throw_C_error(v11);
    JUMPOUT(0x18010B3FDLL);
  }
  v12 = *(__int64 **)(a1 + 8);
  if ( *(__int64 **)(a1 + 16) == v12 )
  {
    sub_18001101C((_QWORD *)a1, v12, a3);
  }
  else
  {
    *v12 = 0LL;
    v12[1] = 0LL;
    v13 = a3[1];
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v6 = v18;
    }
    *v12 = *a3;
    v12[1] = a3[1];
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  sub_180121E6C(a2, v12);
  v14 = Mtx_unlock(v6);
  if ( v14 )
  {
    std::_Throw_C_error(v14);
LABEL_19:
    std::_Throw_C_error(v7);
    goto LABEL_20;
  }
LABEL_13:
  v15 = (volatile signed __int32 *)a3[1];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return a2;
}
