/*
 * XREFs of sub_1800E2640 @ 0x1800E2640
 * Callers:
 *     sub_180070D20 @ 0x180070D20 (sub_180070D20.c)
 * Callees:
 *     sub_18002C9B0 @ 0x18002C9B0 (sub_18002C9B0.c)
 *     sub_18010B1EC @ 0x18010B1EC (sub_18010B1EC.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_1800E2640(__int64 *a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  struct _Mtx_internal_imp_t *v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rsi
  _QWORD *v8; // rsi
  __int64 *v9; // r15
  __int64 *v10; // rcx
  __int64 v11; // r15
  _QWORD *v12; // rsi
  __int64 *v13; // r14
  __int64 *v14; // rcx
  int v15; // eax
  int result; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v3 = Mtx_lock((_Mtx_t)(a1 + 3));
  if ( v3 )
    goto LABEL_15;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 13);
  v5 = Mtx_lock((_Mtx_t)(a1 + 13));
  if ( v5 )
  {
LABEL_16:
    std::_Throw_C_error(v5);
    goto LABEL_17;
  }
  v6 = a1[1];
  v7 = *a1;
  if ( *a1 != v6 )
  {
    do
    {
      sub_18010B1EC(v7);
      v7 += 128LL;
    }
    while ( v7 != v6 );
    v7 = *a1;
  }
  a1[1] = v7;
  v8 = (_QWORD *)a1[23];
  v9 = (__int64 *)v8[1];
  while ( !*((_BYTE *)v9 + 25) )
  {
    sub_18002C9B0((__int64)(a1 + 23), (__int64)(a1 + 23), (__int64 *)v9[2]);
    v10 = v9;
    v9 = (__int64 *)*v9;
    j_j__o_free(v10);
  }
  v8[1] = v8;
  *v8 = v8;
  v8[2] = v8;
  a1[24] = 0LL;
  v11 = (__int64)(a1 + 25);
  v12 = (_QWORD *)a1[25];
  v13 = (__int64 *)v12[1];
  while ( !*((_BYTE *)v13 + 25) )
  {
    sub_18002C9B0(v11, v11, (__int64 *)v13[2]);
    v14 = v13;
    v13 = (__int64 *)*v13;
    j_j__o_free(v14);
  }
  v12[1] = v12;
  *v12 = v12;
  v12[2] = v12;
  *(_QWORD *)(v11 + 8) = 0LL;
  v15 = Mtx_unlock(v4);
  if ( v15 )
  {
LABEL_17:
    std::_Throw_C_error(v15);
    JUMPOUT(0x1800E2788LL);
  }
  result = Mtx_unlock(v2);
  if ( result )
  {
    std::_Throw_C_error(result);
LABEL_15:
    std::_Throw_C_error(v3);
    goto LABEL_16;
  }
  return result;
}
