/*
 * XREFs of sub_180120A90 @ 0x180120A90
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_18011FD28 @ 0x18011FD28 (sub_18011FD28.c)
 *     sub_1801225A8 @ 0x1801225A8 (sub_1801225A8.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_180120A90(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  char *v6; // rax
  __int64 v7; // rsi
  unsigned __int8 v8; // di
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v5 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v5 )
  {
LABEL_7:
    std::_Throw_C_error(v5);
    JUMPOUT(0x180120B3DLL);
  }
  v6 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v12, a2);
  sub_18011FD28((char **)(a1 + 144), (__int64)&v11, v6);
  v7 = v11;
  unknown_libname_103(v12);
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v8 = sub_1801225A8(v7 + 64, a2);
  v9 = Mtx_unlock(v4);
  if ( v9 )
  {
    std::_Throw_C_error(v9);
    goto LABEL_7;
  }
  return v8;
}
