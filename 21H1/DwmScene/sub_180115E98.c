/*
 * XREFs of sub_180115E98 @ 0x180115E98
 * Callers:
 *     sub_1801160F8 @ 0x1801160F8 (sub_1801160F8.c)
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     sub_1801155EC @ 0x1801155EC (sub_1801155EC.c)
 *     sub_180115B20 @ 0x180115B20 (sub_180115B20.c)
 *     sub_180115BA8 @ 0x180115BA8 (sub_180115BA8.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180115E98(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v6; // rax
  struct _Mtx_internal_imp_t *v7; // rbx
  int v8; // eax
  __int64 *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // r10
  __int64 (__fastcall ***v18)(_QWORD, _BYTE *); // rcx
  _BYTE *v19; // rdx
  __int64 **v20; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  char v24; // [rsp+30h] [rbp-79h]
  __int128 v25; // [rsp+48h] [rbp-61h] BYREF
  __int128 v26; // [rsp+58h] [rbp-51h] BYREF
  struct _Mtx_internal_imp_t *v27; // [rsp+68h] [rbp-41h] BYREF
  int v28; // [rsp+70h] [rbp-39h]
  _BYTE v29[56]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE *v30; // [rsp+B0h] [rbp+7h]

  v25 = 0LL;
  v6 = operator new(0x68uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)&v25 = v6;
  v7 = (struct _Mtx_internal_imp_t *)sub_180115BA8();
  v27 = v7;
  v8 = Mtx_lock(v7);
  if ( v8 )
    goto LABEL_22;
  v9 = sub_180115B20();
  v26 = 0LL;
  v10 = operator new(0x68uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)&v26 = v10;
  sub_1801155EC(&v26, v9, v24, v11);
  v12 = (_QWORD *)v25;
  sub_180068FF4((__int64)&v25, (__int64)&v25, *(__int64 **)(v25 + 8));
  v12[1] = v12;
  *v12 = v12;
  v12[2] = v12;
  *((_QWORD *)&v25 + 1) = 0LL;
  sub_1801155EC(&v25, &v26, v24, v13);
  sub_180068FF4((__int64)&v26, (__int64)&v26, *(__int64 **)(v26 + 8));
  j_j__o_free(v26);
  v14 = Mtx_unlock(v7);
  if ( v14 )
  {
    std::_Throw_C_error(v14);
LABEL_21:
    std::_Xbad_function_call();
LABEL_22:
    std::_Throw_C_error(v8);
    JUMPOUT(0x1801160F6LL);
  }
  v15 = v25;
  v16 = *(__int64 **)v25;
  if ( *(_QWORD *)v25 != (_QWORD)v25 )
  {
    do
    {
      v28 = *((_DWORD *)v16 + 8);
      v27 = (struct _Mtx_internal_imp_t *)v29;
      v17 = 0LL;
      v30 = 0LL;
      v18 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))v16[12];
      if ( v18 )
      {
        v17 = (**v18)(v18, v29);
        v30 = (_BYTE *)v17;
      }
      LODWORD(v27) = a2;
      if ( !v17 )
        goto LABEL_21;
      (*(void (__fastcall **)(__int64, __int64, struct _Mtx_internal_imp_t **, __int64))(*(_QWORD *)v17 + 16LL))(
        v17,
        a1,
        &v27,
        a3);
      if ( v30 )
      {
        v19 = v29;
        LOBYTE(v19) = v30 != v29;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v30 + 32LL))(v30, v19);
      }
      v20 = (__int64 **)v16[2];
      if ( *((_BYTE *)v20 + 25) )
      {
        for ( i = (__int64 *)v16[1]; !*((_BYTE *)i + 25) && v16 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v16 = i;
        v16 = i;
      }
      else
      {
        v16 = (__int64 *)v16[2];
        for ( j = *v20; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v16 = j;
      }
    }
    while ( v16 != (__int64 *)v15 );
    v15 = v25;
  }
  sub_180068FF4((__int64)&v25, (__int64)&v25, *(__int64 **)(v15 + 8));
  return j_j__o_free(v25);
}
