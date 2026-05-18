/*
 * XREFs of sub_180120300 @ 0x180120300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_18002C458 @ 0x18002C458 (sub_18002C458.c)
 *     sub_18011FBD8 @ 0x18011FBD8 (sub_18011FBD8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180120300(__int64 a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  __int64 *v6; // rsi
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  _BYTE *v8; // rdx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 *v14[4]; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v15[56]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE *v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+80h] [rbp+37h] BYREF

  v14[2] = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v14[3] = (__int64 *)(a1 + 160);
  v5 = Mtx_lock((_Mtx_t)(a1 + 160));
  if ( v5 )
  {
LABEL_13:
    std::_Throw_C_error(v5);
    JUMPOUT(0x180120436LL);
  }
  v17 = 0;
  if ( *(_QWORD *)(a1 + 240) != **(_QWORD **)(a1 + 240) )
  {
    v14[0] = *(__int64 **)(a1 + 240);
    sub_180027CD0(v14);
    v17 = *((_DWORD *)v14[0] + 8) + 1;
  }
  sub_18011FBD8((__int64 **)(a1 + 240), (__int64)v14, &v17);
  v6 = v14[0];
  v16 = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))a2[7];
  if ( v7 )
    v16 = (_BYTE *)(**v7)(v7, v15);
  sub_18002C458((__int64)v15, (__int64)(v6 + 5));
  if ( v16 )
  {
    v8 = v15;
    LOBYTE(v8) = v16 != v15;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v8);
  }
  v9 = v17;
  v10 = Mtx_unlock(v4);
  if ( v10 )
  {
    std::_Throw_C_error(v10);
    goto LABEL_13;
  }
  v12 = (__int64 *)a2[7];
  if ( v12 )
  {
    LOBYTE(v11) = v12 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v12 + 32))(v12, v11);
    a2[7] = 0LL;
  }
  return v9;
}
