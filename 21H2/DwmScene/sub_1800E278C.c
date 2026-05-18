/*
 * XREFs of sub_1800E278C @ 0x1800E278C
 * Callers:
 *     sub_180092C14 @ 0x180092C14 (sub_180092C14.c)
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 * Callees:
 *     sub_1800E1F54 @ 0x1800E1F54 (sub_1800E1F54.c)
 *     sub_1800E248C @ 0x1800E248C (sub_1800E248C.c)
 *     sub_18010AE58 @ 0x18010AE58 (sub_18010AE58.c)
 *     sub_18010B0B4 @ 0x18010B0B4 (sub_18010B0B4.c)
 *     sub_18010B1EC @ 0x18010B1EC (sub_18010B1EC.c)
 *     sub_18010B258 @ 0x18010B258 (sub_18010B258.c)
 *     sub_18010B2A4 @ 0x18010B2A4 (sub_18010B2A4.c)
 *     sub_180121E6C @ 0x180121E6C (sub_180121E6C.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800E278C(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  __int64 i; // rdi
  __int64 v13; // rcx
  int v14; // eax
  volatile signed __int32 *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  struct _Mtx_internal_imp_t *v20; // [rsp+20h] [rbp-99h]
  __int128 v21; // [rsp+28h] [rbp-91h] BYREF
  __int128 v22; // [rsp+38h] [rbp-81h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-71h]
  _BYTE v24[192]; // [rsp+50h] [rbp-69h] BYREF

  v23 = a4;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v20 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v9 = Mtx_lock((_Mtx_t)(a1 + 24));
  if ( v9 )
  {
LABEL_26:
    std::_Throw_C_error(v9);
    goto LABEL_27;
  }
  v10 = sub_1800E248C(a1, a3);
  v11 = *(_QWORD *)(a1 + 8);
  for ( i = *(_QWORD *)a1; i != v11 && sub_18010B258(i) != v10; i += 128LL )
    ;
  v13 = a4[1];
  if ( i == *(_QWORD *)(a1 + 8) )
  {
    v22 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      v13 = a4[1];
      v8 = v20;
    }
    *(_QWORD *)&v22 = *a4;
    *((_QWORD *)&v22 + 1) = v13;
    v16 = sub_18010B0B4(v24, v10, &v22);
    if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 8) )
    {
      sub_1800E1F54((_QWORD *)a1, *(_QWORD *)(a1 + 8));
    }
    else
    {
      sub_18010AE58(*(_QWORD *)(a1 + 8), v16);
      *(_QWORD *)(a1 + 8) += 128LL;
    }
    sub_18010B1EC(v24);
    sub_180121E6C(a2, v17);
    v18 = Mtx_unlock(v8);
    if ( !v18 )
    {
      v15 = (volatile signed __int32 *)a4[1];
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            goto LABEL_23;
        }
      }
      return a2;
    }
    std::_Throw_C_error(v18);
    goto LABEL_26;
  }
  v21 = 0LL;
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a4[1];
    v8 = v20;
  }
  *(_QWORD *)&v21 = *a4;
  *((_QWORD *)&v21 + 1) = v13;
  sub_18010B2A4(i, a2, &v21);
  v14 = Mtx_unlock(v8);
  if ( v14 )
  {
LABEL_27:
    std::_Throw_C_error(v14);
    JUMPOUT(0x1800E298DLL);
  }
  v15 = (volatile signed __int32 *)a4[1];
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
LABEL_23:
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return a2;
}
