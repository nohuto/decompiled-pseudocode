/*
 * XREFs of sub_1800DCEBC @ 0x1800DCEBC
 * Callers:
 *     sub_18008D344 @ 0x18008D344 (sub_18008D344.c)
 *     sub_180095F78 @ 0x180095F78 (sub_180095F78.c)
 * Callees:
 *     sub_1800DC684 @ 0x1800DC684 (sub_1800DC684.c)
 *     sub_1800DCBBC @ 0x1800DCBBC (sub_1800DCBBC.c)
 *     sub_180105588 @ 0x180105588 (sub_180105588.c)
 *     sub_1801057E4 @ 0x1801057E4 (sub_1801057E4.c)
 *     sub_18010591C @ 0x18010591C (sub_18010591C.c)
 *     sub_180105988 @ 0x180105988 (sub_180105988.c)
 *     sub_1801059D4 @ 0x1801059D4 (sub_1801059D4.c)
 *     sub_18011C59C @ 0x18011C59C (sub_18011C59C.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800DCEBC(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
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
  v10 = sub_1800DCBBC(a1, a3);
  v11 = *(_QWORD *)(a1 + 8);
  for ( i = *(_QWORD *)a1; i != v11 && sub_180105988(i) != v10; i += 128LL )
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
    v16 = sub_1801057E4(v24, v10, &v22);
    if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 8) )
    {
      sub_1800DC684((_QWORD *)a1, *(_QWORD *)(a1 + 8));
    }
    else
    {
      sub_180105588(*(_QWORD *)(a1 + 8), v16);
      *(_QWORD *)(a1 + 8) += 128LL;
    }
    sub_18010591C(v24);
    sub_18011C59C(a2, v17);
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
  sub_1801059D4(i, a2, &v21);
  v14 = Mtx_unlock(v8);
  if ( v14 )
  {
LABEL_27:
    std::_Throw_C_error(v14);
    JUMPOUT(0x1800DD0BDLL);
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
