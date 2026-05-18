/*
 * XREFs of sub_1801207C0 @ 0x1801207C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18011FD28 @ 0x18011FD28 (sub_18011FD28.c)
 *     sub_180120988 @ 0x180120988 (sub_180120988.c)
 *     sub_180122450 @ 0x180122450 (sub_180122450.c)
 *     sub_1801225A8 @ 0x1801225A8 (sub_1801225A8.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1801207C0(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  char *v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14[5]; // [rsp+48h] [rbp-40h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v13[4] = a1 + 64;
  v5 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v5 )
  {
LABEL_10:
    std::_Throw_C_error(v5);
    JUMPOUT(0x1801208B9LL);
  }
  v6 = 0;
  if ( a2[2] )
  {
    v7 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v14, a2);
    sub_18011FD28((char **)(a1 + 144), (__int64)v13, v7);
    v8 = v13[0];
    unknown_libname_103(v14);
    v9 = a2;
    if ( a2[3] >= 8uLL )
      v9 = (_QWORD *)*a2;
    if ( (unsigned __int8)sub_1801225A8(v8 + 64, v9) )
    {
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_18001277C(v13, (__int64)a2);
      v10 = sub_180122450(v8 + 64, v13);
      v6 = sub_180120988(a1, v10);
    }
  }
  v11 = Mtx_unlock(v4);
  if ( v11 )
  {
    std::_Throw_C_error(v11);
    goto LABEL_10;
  }
  return v6;
}
