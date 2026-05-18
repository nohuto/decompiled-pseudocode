/*
 * XREFs of sub_18011B768 @ 0x18011B768
 * Callers:
 *     sub_18011B9C8 @ 0x18011B9C8 (sub_18011B9C8.c)
 * Callees:
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     sub_18011AEBC @ 0x18011AEBC (sub_18011AEBC.c)
 *     sub_18011B3F0 @ 0x18011B3F0 (sub_18011B3F0.c)
 *     sub_18011B478 @ 0x18011B478 (sub_18011B478.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18011B768(__int64 a1, int a2, __int64 a3)
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
  v7 = (struct _Mtx_internal_imp_t *)sub_18011B478();
  v27 = v7;
  v8 = Mtx_lock(v7);
  if ( v8 )
    goto LABEL_22;
  v9 = sub_18011B3F0();
  v26 = 0LL;
  v10 = operator new(0x68uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)&v26 = v10;
  sub_18011AEBC(&v26, v9, v24, v11);
  v12 = (_QWORD *)v25;
  sub_18006E8C4((__int64)&v25, (__int64)&v25, *(__int64 **)(v25 + 8));
  v12[1] = v12;
  *v12 = v12;
  v12[2] = v12;
  *((_QWORD *)&v25 + 1) = 0LL;
  sub_18011AEBC(&v25, &v26, v24, v13);
  sub_18006E8C4((__int64)&v26, (__int64)&v26, *(__int64 **)(v26 + 8));
  j_j__o_free(v26);
  v14 = Mtx_unlock(v7);
  if ( v14 )
  {
    std::_Throw_C_error(v14);
LABEL_21:
    std::_Xbad_function_call();
LABEL_22:
    std::_Throw_C_error(v8);
    JUMPOUT(0x18011B9C6LL);
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
  sub_18006E8C4((__int64)&v25, (__int64)&v25, *(__int64 **)(v15 + 8));
  return j_j__o_free(v25);
}
