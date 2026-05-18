/*
 * XREFs of sub_1800E231C @ 0x1800E231C
 * Callers:
 *     sub_18006FF60 @ 0x18006FF60 (sub_18006FF60.c)
 * Callees:
 *     sub_1800E1F54 @ 0x1800E1F54 (sub_1800E1F54.c)
 *     sub_18010AE58 @ 0x18010AE58 (sub_18010AE58.c)
 *     sub_18010AFA8 @ 0x18010AFA8 (sub_18010AFA8.c)
 *     sub_18010B1EC @ 0x18010B1EC (sub_18010B1EC.c)
 *     sub_18010B258 @ 0x18010B258 (sub_18010B258.c)
 *     sub_18010B400 @ 0x18010B400 (sub_18010B400.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
signed __int32 __fastcall sub_1800E231C(__int64 *a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // r15
  __int64 i; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  signed __int32 result; // eax
  volatile signed __int32 *v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-89h] BYREF
  struct _Mtx_internal_imp_t *v16; // [rsp+30h] [rbp-79h]
  __int128 v17; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-61h]
  _BYTE v19[176]; // [rsp+50h] [rbp-59h] BYREF

  v18 = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v16 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v7 = Mtx_lock((_Mtx_t)(a1 + 3));
  if ( v7 )
  {
LABEL_23:
    std::_Throw_C_error(v7);
    JUMPOUT(0x1800E2489LL);
  }
  v8 = a1[1];
  for ( i = *a1; i != v8 && sub_18010B258(i) != a3; i += 128LL )
    ;
  v10 = a2[1];
  if ( i == a1[1] )
  {
    v17 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a2[1];
      v6 = v16;
    }
    *(_QWORD *)&v17 = *a2;
    *((_QWORD *)&v17 + 1) = v10;
    v11 = sub_18010AFA8(v19, a3, &v17);
    v12 = a1[1];
    if ( a1[2] == v12 )
    {
      sub_1800E1F54(a1, a1[1]);
    }
    else
    {
      sub_18010AE58(v12, v11);
      a1[1] += 128LL;
    }
    sub_18010B1EC(v19);
  }
  else
  {
    v15 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a2[1];
      v6 = v16;
    }
    *(_QWORD *)&v15 = *a2;
    *((_QWORD *)&v15 + 1) = v10;
    sub_18010B400(i, &v15);
  }
  result = Mtx_unlock(v6);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_23;
  }
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 )
  {
    result = _InterlockedDecrement(v14 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = _InterlockedDecrement(v14 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
