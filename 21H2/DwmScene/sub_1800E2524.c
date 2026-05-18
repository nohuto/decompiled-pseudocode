/*
 * XREFs of sub_1800E2524 @ 0x1800E2524
 * Callers:
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 *     sub_18010FEE0 @ 0x18010FEE0 (sub_18010FEE0.c)
 * Callees:
 *     sub_180075F1C @ 0x180075F1C (sub_180075F1C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800E2524(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r9
  _QWORD *v11; // rcx
  __int64 *v12; // rax
  int v13; // eax
  struct _Mtx_internal_imp_t *v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v15 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v7 = Mtx_lock((_Mtx_t)(a1 + 24));
  if ( v7 )
  {
LABEL_18:
    std::_Throw_C_error(v7);
    JUMPOUT(0x1800E263CLL);
  }
  if ( (_DWORD)v4 )
  {
    v9 = (v3 << 32) | v4;
    v17 = v9;
    v10 = (_QWORD *)(a1 + 184);
    v11 = *(_QWORD **)(a1 + 184);
    v12 = (__int64 *)v11[1];
    if ( *((_BYTE *)v12 + 25) )
      goto LABEL_11;
    do
    {
      if ( v12[4] >= v9 )
      {
        v11 = v12;
        v12 = (__int64 *)*v12;
      }
      else
      {
        v12 = (__int64 *)v12[2];
      }
    }
    while ( !*((_BYTE *)v12 + 25) );
    if ( v11 == (_QWORD *)*v10 || v9 < v11[4] )
LABEL_11:
      v11 = (_QWORD *)*v10;
    if ( v11 == (_QWORD *)*v10 )
    {
      v8 = (v3 << 32) | (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
      sub_180075F1C((__int64 **)(a1 + 184), (__int64)&v16, &v17);
      *(_QWORD *)(v16 + 40) = v8;
      v6 = v15;
    }
    else
    {
      v8 = v11[5];
    }
  }
  else
  {
    v8 = 0LL;
  }
  v13 = Mtx_unlock(v6);
  if ( v13 )
  {
    std::_Throw_C_error(v13);
    goto LABEL_18;
  }
  return v8;
}
